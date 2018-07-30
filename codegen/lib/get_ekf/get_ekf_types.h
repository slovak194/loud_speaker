/*
 * File: get_ekf_types.h
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 28-Jul-2018 22:50:20
 */

#ifndef GET_EKF_TYPES_H
#define GET_EKF_TYPES_H

/* Include Files */
#include "rtwtypes.h"

/* Type Definitions */
#ifndef typedef_ctrl_t
#define typedef_ctrl_t

typedef struct {
  float v;
} ctrl_t;

#endif                                 /*typedef_ctrl_t*/

#ifndef typedef_dstate_t
#define typedef_dstate_t

typedef struct {
  float xd_dot;
  float xd_dot_dot;
  float R_m_dot;
  float K_m_dot;
  float R_e_dot;
} dstate_t;

#endif                                 /*typedef_dstate_t*/

#ifndef typedef_parameters_t
#define typedef_parameters_t

typedef struct {
  float Bl;
  float M_m;
} parameters_t;

#endif                                 /*typedef_parameters_t*/

#ifndef typedef_state_t
#define typedef_state_t

typedef struct {
  float xd;
  float xd_dot;
  float R_m;
  float K_m;
  float R_e;
} state_t;

#endif                                 /*typedef_state_t*/

#ifndef typedef_struct0_T
#define typedef_struct0_T

typedef struct {
  float X0[5];
  float P0[25];
  float Q[25];
  float U;
  float R[2];
} struct0_T;

#endif                                 /*typedef_struct0_T*/
#endif

/*
 * File trailer for get_ekf_types.h
 *
 * [EOF]
 */
