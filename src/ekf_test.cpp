//
// Created by slovak on 9/30/17.
//

#include <iostream>
#include <fstream>
#include <chrono>
#include <cassert>
#include <vector>

extern "C" {
#include <get_ekf.h>
}

int main(int argc, char **argv) {

    auto state_real_file_name = "state_real.csv";
    std::ofstream state_real_file(state_real_file_name);
    state_real_file.precision(10);

    auto state_predicted_file_name = "state_predicted.csv";
    std::ofstream state_predicted_file(state_predicted_file_name);
    state_predicted_file.precision(10);

    auto state_var_file_name = "state_var.csv";
    std::ofstream state_var_file(state_var_file_name);
    state_var_file.precision(10);

    auto state_err_file_name = "state_err.csv";
    std::ofstream state_err_file(state_err_file_name);
    state_err_file.precision(10);

    std::string test_data_file_name;

    if (argc < 2) {
        test_data_file_name = "../data/speech_dft.mp3.bin";
    } else {
        test_data_file_name = argv[1];
    }

    std::streampos test_data_file_size;
    {
        std::ifstream test_data_file(test_data_file_name, std::ios::ate | std::ios::binary);
        test_data_file_size = test_data_file.tellg();
        test_data_file.close();
    }

    std::ifstream test_data_file(test_data_file_name, std::ios::binary);
    assert(test_data_file.is_open());
    std::vector<float> test_data(static_cast<long>(test_data_file_size) / sizeof(float));
    test_data_file.read(reinterpret_cast<char *>(test_data.data()), test_data.size() * sizeof(float));
    test_data_file.close();

    float dt = 1.0f / 22050.0f;

    state_t X0;
    state_t X;
    state_t X_predicted;
    state_t P_diagonal;
    dstate_t dX;
    parameters_t model_parameters;
    struct0_T filter_parameters;
    char state_names[N_STATE_HEADER];

    auto model_parameters_ref = reinterpret_cast<float *>(&model_parameters);
    auto X_predicted_ref = reinterpret_cast<float *>(&X_predicted);
    auto P_diagonal_ref = reinterpret_cast<float *>(&P_diagonal);
    auto dX_ref = reinterpret_cast<float *>(&dX);
    auto X_ref = reinterpret_cast<float *>(&X);

    float m_performanceMax = 0.0f;
    float m_performanceMin = 100000000.0f;
    float m_performanceAverage = 0.0f;

    float b_ut = 0;
    float noize[NX] = {0, 0, 0, 0, 0};
    float ii_J_y_x[5];
    float ii_J_y_u;
    double ii_J_y_n[5];
    double R_e_J_y_x[5];
    double R_e_J_y_u;
    double R_e_J_y_n[5];
    float measurements[2];

    parameters_initializer(&model_parameters);
    state_names_initializer(state_names);
    filter_parameters_struct_initializer(&filter_parameters);
    state_struct_initializer(&X0);

    get_ekf_initialize();

    std::cout << "Running loudspeaker model and observer " << std::endl;
    state_real_file << state_names << std::endl;
    state_predicted_file << state_names << std::endl;
    state_var_file << state_names << std::endl;
    state_err_file << state_names << std::endl;

    X = X0;

    for (auto u : test_data) {

        get_model_step(X_ref, u, b_ut, noize, model_parameters_ref, dt, X_ref, dX_ref, &b_ut);
        get_ii_measurement(X_ref, u, noize, model_parameters_ref, &measurements[0], ii_J_y_x, &ii_J_y_u, ii_J_y_n);
        get_R_e_measurement(X_ref, u, noize, model_parameters_ref, &measurements[1], R_e_J_y_x, &R_e_J_y_u, R_e_J_y_n);

        auto begin = std::chrono::steady_clock::now();
        get_ekf(u, measurements, &filter_parameters, model_parameters_ref, dt, X_predicted_ref, P_diagonal_ref);
        auto end = std::chrono::steady_clock::now();

        auto mPerformance =
                1.0f / (std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() * 1.0e-6f);

        if (m_performanceMax < mPerformance) { m_performanceMax = mPerformance; }
        if (m_performanceMin > mPerformance) { m_performanceMin = mPerformance; }

        m_performanceAverage += mPerformance / test_data.size();

        for (auto i = 0; i < NX; i++) { state_real_file << X_ref[i] << ','; } state_real_file << std::endl;
        for (auto i = 0; i < NX; i++) { state_predicted_file << X_predicted_ref[i] << ','; } state_predicted_file << std::endl;
        for (auto i = 0; i < NX; i++) { state_var_file << P_diagonal_ref[i] << ','; } state_var_file << std::endl;
        for (auto i = 0; i < NX; i++) { state_err_file << sqrtf((X_ref[i] - X_predicted_ref[i]) * (X_ref[i] - X_predicted_ref[i])) << ','; } state_err_file << std::endl;
    }

    state_real_file.close();

    std::cout << "==================================" << std::endl;

    std::cout << "Average Performance = " << m_performanceAverage << " Hz" << std::endl;
    std::cout << "Max Performance = " << m_performanceMax << " Hz" << std::endl;
    std::cout << "Min Performance = " << m_performanceMin << " Hz" << std::endl;

    std::cout << "Result has been stored into " << std::endl;

    return EXIT_SUCCESS;
}
