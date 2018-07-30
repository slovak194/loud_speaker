/*
 * File: get_ekf.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 30-Jul-2018 23:02:18
 */

#ifndef GET_EKF_H
#define GET_EKF_H

/* Include Files */
#include <math.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "rtwtypes.h"
#include "get_ekf_types.h"

/* Custom Header Code */
#define NU                             1
#define NP                             2
#define N_STATE_HEADER                 25
#define NX                             5

/* Function Declarations */
extern void ctrl_struct_initializer(ctrl_t *out);
extern void dstate_struct_initializer(dstate_t *out);
extern void filter_parameters_struct_initializer(struct0_T *out);
extern void get_R_e_measurement(const float b_X[5], float v, const float n[5],
  const float p[2], float *y_R_e, double J_y_x[5], double *J_y_u, double J_y_n[5]);
extern void get_ekf(float u, const float y[2], const struct0_T *f_p, const float
                    p[2], float dt, float X_out[5], float P_diag[5]);
extern void get_ekf_initialize(void);
extern void get_ekf_terminate(void);
extern void get_ii_measurement(const float b_X[5], float v, const float n[5],
  const float p[2], float *y_ii, float J_y_x[5], float *J_y_u, double J_y_n[5]);
extern void get_model_step(const float b_X[5], float u, float b_ut, const float
  n[5], const float p[2], float dt, float X_out[5], float dX[5], float *utt);
extern void parameters_initializer(parameters_t *out);
extern void state_names_initializer(char out[25]);
extern void state_struct_initializer(state_t *out);

#endif

/*
 * File trailer for get_ekf.h
 *
 * [EOF]
 */
