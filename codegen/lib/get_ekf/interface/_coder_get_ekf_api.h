/*
 * File: _coder_get_ekf_api.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 30-Jul-2018 23:02:18
 */

#ifndef _CODER_GET_EKF_API_H
#define _CODER_GET_EKF_API_H

/* Include Files */
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include <stddef.h>
#include <stdlib.h>
#include "_coder_get_ekf_api.h"

/* Custom Header Code */
#define NU                             1
#define NP                             2
#define N_STATE_HEADER                 25
#define NX                             5

/* Type Definitions */
#ifndef typedef_ctrl_t
#define typedef_ctrl_t

typedef struct {
  real32_T v;
} ctrl_t;

#endif                                 /*typedef_ctrl_t*/

#ifndef typedef_dstate_t
#define typedef_dstate_t

typedef struct {
  real32_T xd_dot;
  real32_T xd_dot_dot;
  real32_T R_m_dot;
  real32_T K_m_dot;
  real32_T R_e_dot;
} dstate_t;

#endif                                 /*typedef_dstate_t*/

#ifndef typedef_parameters_t
#define typedef_parameters_t

typedef struct {
  real32_T Bl;
  real32_T M_m;
} parameters_t;

#endif                                 /*typedef_parameters_t*/

#ifndef typedef_state_t
#define typedef_state_t

typedef struct {
  real32_T xd;
  real32_T xd_dot;
  real32_T R_m;
  real32_T K_m;
  real32_T R_e;
} state_t;

#endif                                 /*typedef_state_t*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  real32_T X0[5];
  real32_T P0[25];
  real32_T Q[25];
  real32_T U;
  real32_T R[2];
} struct0_T;

#endif                                 /*typedef_struct0_T*/

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

/* Function Declarations */
extern void ctrl_struct_initializer(ctrl_t *out);
extern void ctrl_struct_initializer_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void dstate_struct_initializer(dstate_t *out);
extern void dstate_struct_initializer_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void filter_parameters_struct_initializer(struct0_T *out);
extern void filter_parameters_struct_initializer_api(const mxArray * const prhs
  [1], const mxArray *plhs[1]);
extern void get_R_e_measurement(real32_T X[5], real32_T v, real32_T n[5],
  real32_T p[2], real32_T *y_R_e, real_T J_y_x[5], real_T *J_y_u, real_T J_y_n[5]);
extern void get_R_e_measurement_api(const mxArray * const prhs[4], const mxArray
  *plhs[4]);
extern void get_ekf(real32_T u, real32_T y[2], struct0_T *f_p, real32_T p[2],
                    real32_T dt, real32_T X_out[5], real32_T P_diag[5]);
extern void get_ekf_api(const mxArray * const prhs[5], const mxArray *plhs[2]);
extern void get_ekf_atexit(void);
extern void get_ekf_initialize(void);
extern void get_ekf_terminate(void);
extern void get_ekf_xil_terminate(void);
extern void get_ii_measurement(real32_T X[5], real32_T v, real32_T n[5],
  real32_T p[2], real32_T *y_ii, real32_T J_y_x[5], real32_T *J_y_u, real_T
  J_y_n[5]);
extern void get_ii_measurement_api(const mxArray * const prhs[4], const mxArray *
  plhs[4]);
extern void get_model_step(real32_T X[5], real32_T u, real32_T ut, real32_T n[5],
  real32_T p[2], real32_T dt, real32_T X_out[5], real32_T dX[5], real32_T *utt);
extern void get_model_step_api(const mxArray * const prhs[6], const mxArray
  *plhs[4]);
extern void parameters_initializer(parameters_t *out);
extern void parameters_initializer_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void state_names_initializer(char_T out[25]);
extern void state_names_initializer_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);
extern void state_struct_initializer(state_t *out);
extern void state_struct_initializer_api(const mxArray * const prhs[1], const
  mxArray *plhs[1]);

#endif

/*
 * File trailer for _coder_get_ekf_api.h
 *
 * [EOF]
 */
