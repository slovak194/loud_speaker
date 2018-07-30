/*
 * File: _coder_get_ekf_mex.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 30-Jul-2018 23:02:18
 */

#ifndef _CODER_GET_EKF_MEX_H
#define _CODER_GET_EKF_MEX_H

/* Include Files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "_coder_get_ekf_api.h"

/* Custom Header Code */
#define NU                             1
#define NP                             2
#define N_STATE_HEADER                 25
#define NX                             5

/* Function Declarations */
extern void mexFunction(int32_T nlhs, mxArray *plhs[], int32_T nrhs, const
  mxArray *prhs[]);
extern emlrtCTX mexFunctionCreateRootTLS(void);

#endif

/*
 * File trailer for _coder_get_ekf_mex.h
 *
 * [EOF]
 */
