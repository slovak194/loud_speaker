/*
 * File: _coder_get_ekf_mex.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 30-Jul-2018 16:43:34
 */

/* Include Files */
#include "_coder_get_ekf_api.h"
#include "_coder_get_ekf_mex.h"

/* Variable Definitions */
static const char * emlrtEntryPoints[10] = { "get_ekf", "get_R_e_measurement",
  "get_ii_measurement", "get_model_step", "parameters_initializer",
  "state_names_initializer", "state_struct_initializer",
  "dstate_struct_initializer", "ctrl_struct_initializer",
  "filter_parameters_struct_initializer" };

/* Function Declarations */
static void c_ctrl_struct_initializer_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void c_dstate_struct_initializer_mex(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void c_filter_parameters_struct_init(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void c_parameters_initializer_mexFun(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void c_state_names_initializer_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void c_state_struct_initializer_mexF(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1]);
static void get_R_e_measurement_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4]);
static void get_ekf_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
  const mxArray *prhs[5]);
static void get_ii_measurement_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4]);
static void get_model_step_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T
  nrhs, const mxArray *prhs[6]);

/* Function Definitions */

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_ctrl_struct_initializer_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 23,
                        "ctrl_struct_initializer", 4, 23,
                        "ctrl_struct_initializer", 4, 23,
                        "ctrl_struct_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        23, "ctrl_struct_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "ctrl_struct_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  ctrl_struct_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_dstate_struct_initializer_mex(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 25,
                        "dstate_struct_initializer", 4, 25,
                        "dstate_struct_initializer", 4, 25,
                        "dstate_struct_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        25, "dstate_struct_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 25,
                        "dstate_struct_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  dstate_struct_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_filter_parameters_struct_init(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 36,
                        "filter_parameters_struct_initializer", 4, 36,
                        "filter_parameters_struct_initializer", 4, 36,
                        "filter_parameters_struct_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        36, "filter_parameters_struct_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 36,
                        "filter_parameters_struct_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  filter_parameters_struct_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_parameters_initializer_mexFun(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 22,
                        "parameters_initializer", 4, 22,
                        "parameters_initializer", 4, 22,
                        "parameters_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        22, "parameters_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 22,
                        "parameters_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  parameters_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_state_names_initializer_mexFu(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 23,
                        "state_names_initializer", 4, 23,
                        "state_names_initializer", 4, 23,
                        "state_names_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        23, "state_names_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 23,
                        "state_names_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  state_names_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[1]
 *                int32_T nrhs
 *                const mxArray *prhs[1]
 * Return Type  : void
 */
static void c_state_struct_initializer_mexF(int32_T nlhs, mxArray *plhs[1],
  int32_T nrhs, const mxArray *prhs[1])
{
  const mxArray *inputs[1];
  const mxArray *outputs[1];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs < 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooFewInputsConstants", 9, 4, 24,
                        "state_struct_initializer", 4, 24,
                        "state_struct_initializer", 4, 24,
                        "state_struct_initializer");
  }

  if (nrhs != 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 1, 4,
                        24, "state_struct_initializer");
  }

  if (nlhs > 1) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 24,
                        "state_struct_initializer");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  state_struct_initializer_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[4]
 *                int32_T nrhs
 *                const mxArray *prhs[4]
 * Return Type  : void
 */
static void get_R_e_measurement_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4])
{
  const mxArray *inputs[4];
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        19, "get_R_e_measurement");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 19,
                        "get_R_e_measurement");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  get_R_e_measurement_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[2]
 *                int32_T nrhs
 *                const mxArray *prhs[5]
 * Return Type  : void
 */
static void get_ekf_mexFunction(int32_T nlhs, mxArray *plhs[2], int32_T nrhs,
  const mxArray *prhs[5])
{
  const mxArray *inputs[5];
  const mxArray *outputs[2];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 5) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 5, 4, 7,
                        "get_ekf");
  }

  if (nlhs > 2) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 7,
                        "get_ekf");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  get_ekf_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[4]
 *                int32_T nrhs
 *                const mxArray *prhs[4]
 * Return Type  : void
 */
static void get_ii_measurement_mexFunction(int32_T nlhs, mxArray *plhs[4],
  int32_T nrhs, const mxArray *prhs[4])
{
  const mxArray *inputs[4];
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 4, 4,
                        18, "get_ii_measurement");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 18,
                        "get_ii_measurement");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  get_ii_measurement_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray *plhs[4]
 *                int32_T nrhs
 *                const mxArray *prhs[6]
 * Return Type  : void
 */
static void get_model_step_mexFunction(int32_T nlhs, mxArray *plhs[4], int32_T
  nrhs, const mxArray *prhs[6])
{
  const mxArray *inputs[6];
  const mxArray *outputs[4];
  int32_T b_nlhs;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check for proper number of arguments. */
  if (nrhs != 6) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:WrongNumberOfInputs", 5, 12, 6, 4,
                        14, "get_model_step");
  }

  if (nlhs > 4) {
    emlrtErrMsgIdAndTxt(&st, "EMLRT:runTime:TooManyOutputArguments", 3, 4, 14,
                        "get_model_step");
  }

  /* Temporary copy for mex inputs. */
  if (0 <= nrhs - 1) {
    memcpy((void *)&inputs[0], (void *)&prhs[0], (uint32_T)(nrhs * (int32_T)
            sizeof(const mxArray *)));
  }

  /* Call the function. */
  get_model_step_api(inputs, outputs);

  /* Copy over outputs to the caller. */
  if (nlhs < 1) {
    b_nlhs = 1;
  } else {
    b_nlhs = nlhs;
  }

  emlrtReturnArrays(b_nlhs, plhs, outputs);

  /* Module termination. */
  get_ekf_terminate();
}

/*
 * Arguments    : int32_T nlhs
 *                const mxArray * const plhs[]
 *                int32_T nrhs
 *                const mxArray * const prhs[]
 * Return Type  : void
 */
void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const mxArray
                 *prhs[])
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexAtExit(get_ekf_atexit);

  /* Initialize the memory manager. */
  /* Module initialization. */
  get_ekf_initialize();
  st.tls = emlrtRootTLSGlobal;

  /* Dispatch the entry-point. */
  switch (emlrtGetEntryPointIndexR2016a(&st, nrhs, prhs, emlrtEntryPoints, 10))
  {
   case 0:
    get_ekf_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 1:
    get_R_e_measurement_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 2:
    get_ii_measurement_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 3:
    get_model_step_mexFunction(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 4:
    c_parameters_initializer_mexFun(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 5:
    c_state_names_initializer_mexFu(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 6:
    c_state_struct_initializer_mexF(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 7:
    c_dstate_struct_initializer_mex(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 8:
    c_ctrl_struct_initializer_mexFu(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;

   case 9:
    c_filter_parameters_struct_init(nlhs, plhs, nrhs - 1, &prhs[1]);
    break;
  }
}

/*
 * Arguments    : void
 * Return Type  : emlrtCTX
 */
emlrtCTX mexFunctionCreateRootTLS(void)
{
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  return emlrtRootTLSGlobal;
}

/*
 * File trailer for _coder_get_ekf_mex.c
 *
 * [EOF]
 */
