/*
 * File: _coder_get_ekf_api.c
 *
 * MATLAB Coder version            : 3.4
 * C/C++ source code generated on  : 30-Jul-2018 23:02:18
 */

/* Include Files */
#include "tmwtypes.h"
#include "_coder_get_ekf_api.h"
#include "_coder_get_ekf_mex.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;
emlrtContext emlrtContextGlobal = { true,/* bFirstTime */
  false,                               /* bInitialized */
  131451U,                             /* fVersionInfo */
  NULL,                                /* fErrorFunction */
  "get_ekf",                           /* fFunctionName */
  NULL,                                /* fRTCallStack */
  false,                               /* bDebugMode */
  { 2045744189U, 2170104910U, 2743257031U, 4284093946U },/* fSigWrd */
  NULL                                 /* fSigMem */
};

/* Function Declarations */
static real32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static const mxArray *b_emlrt_marshallOut(const real32_T u);
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y, const
  char_T *identifier, real32_T b_y[2]);
static const mxArray *c_emlrt_marshallOut(const real_T u[5]);
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[2]);
static const mxArray *d_emlrt_marshallOut(const real_T u);
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f_p, const
  char_T *identifier, struct0_T *y);
static const mxArray *e_emlrt_marshallOut(const real32_T u[5]);
static real32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  char_T *identifier);
static const mxArray *emlrt_marshallOut(const real32_T u[5]);
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y);
static const mxArray *f_emlrt_marshallOut(void);
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[5]);
static const mxArray *g_emlrt_marshallOut(const parameters_t u);
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[25]);
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25]);
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[2]);
static const mxArray *i_emlrt_marshallOut(const state_t u);
static real32_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
  const char_T *identifier))[2];
static const mxArray *j_emlrt_marshallOut(const dstate_t u);
static real32_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2];
static const mxArray *k_emlrt_marshallOut(const ctrl_t u);
static real32_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
  const char_T *identifier))[5];
static const mxArray *l_emlrt_marshallOut(const struct0_T *u);
static real32_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[5];
static real32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real32_T ret[5]);
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real32_T ret[25]);
static real32_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2];
static real32_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[5];

/* Function Definitions */

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real32_T
 */
static real32_T b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real32_T y;
  y = n_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const real32_T u
 * Return Type  : const mxArray *
 */
static const mxArray *b_emlrt_marshallOut(const real32_T u)
{
  const mxArray *y;
  const mxArray *m1;
  y = NULL;
  m1 = emlrtCreateNumericMatrix(1, 1, mxSINGLE_CLASS, mxREAL);
  *(real32_T *)emlrtMxGetData(m1) = u;
  emlrtAssign(&y, m1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *y
 *                const char_T *identifier
 *                real32_T b_y[2]
 * Return Type  : void
 */
static void c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *y, const
  char_T *identifier, real32_T b_y[2])
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  d_emlrt_marshallIn(sp, emlrtAlias(y), &thisId, b_y);
  emlrtDestroyArray(&y);
}

/*
 * Arguments    : const real_T u[5]
 * Return Type  : const mxArray *
 */
static const mxArray *c_emlrt_marshallOut(const real_T u[5])
{
  const mxArray *y;
  const mxArray *m2;
  static const int32_T iv4[2] = { 0, 0 };

  static const int32_T iv5[2] = { 1, 5 };

  y = NULL;
  m2 = emlrtCreateNumericArray(2, iv4, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m2, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m2, iv5, 2);
  emlrtAssign(&y, m2);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real32_T y[2]
 * Return Type  : void
 */
static void d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[2])
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  int32_T iv0[2];
  boolean_T bv0[2];
  char_T str[11];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  for (i = 0; i < 2; i++) {
    iv0[i] = 1 + i;
    bv0[i] = false;
  }

  emlrtCheckCell(sp, parentId, u, 2U, iv0, bv0);
  for (i = 0; i < 2; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    y[i] = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, i)),
      &thisId);
  }

  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const real_T u
 * Return Type  : const mxArray *
 */
static const mxArray *d_emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m3;
  y = NULL;
  m3 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m3);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *f_p
 *                const char_T *identifier
 *                struct0_T *y
 * Return Type  : void
 */
static void e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *f_p, const
  char_T *identifier, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  f_emlrt_marshallIn(sp, emlrtAlias(f_p), &thisId, y);
  emlrtDestroyArray(&f_p);
}

/*
 * Arguments    : const real32_T u[5]
 * Return Type  : const mxArray *
 */
static const mxArray *e_emlrt_marshallOut(const real32_T u[5])
{
  const mxArray *y;
  const mxArray *m4;
  static const int32_T iv6[2] = { 0, 0 };

  static const int32_T iv7[2] = { 1, 5 };

  y = NULL;
  m4 = emlrtCreateNumericArray(2, iv6, mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m4, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m4, iv7, 2);
  emlrtAssign(&y, m4);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const char_T *identifier
 * Return Type  : real32_T
 */
static real32_T emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  char_T *identifier)
{
  real32_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = b_emlrt_marshallIn(sp, emlrtAlias(u), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

/*
 * Arguments    : const real32_T u[5]
 * Return Type  : const mxArray *
 */
static const mxArray *emlrt_marshallOut(const real32_T u[5])
{
  const mxArray *y;
  const mxArray *m0;
  static const int32_T iv2[1] = { 0 };

  static const int32_T iv3[1] = { 5 };

  y = NULL;
  m0 = emlrtCreateNumericArray(1, iv2, mxSINGLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m0, (void *)&u[0]);
  emlrtSetDimensions((mxArray *)m0, iv3, 1);
  emlrtAssign(&y, m0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                struct0_T *y
 * Return Type  : void
 */
static void f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, struct0_T *y)
{
  emlrtMsgIdentifier thisId;
  static const char * fieldNames[5] = { "X0", "P0", "Q", "U", "R" };

  static const int32_T dims = 0;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b(sp, parentId, u, 5, fieldNames, 0U, &dims);
  thisId.fIdentifier = "X0";
  g_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 0, "X0")),
                     &thisId, y->X0);
  thisId.fIdentifier = "P0";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 1, "P0")),
                     &thisId, y->P0);
  thisId.fIdentifier = "Q";
  h_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 2, "Q")),
                     &thisId, y->Q);
  thisId.fIdentifier = "U";
  y->U = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 3, "U")),
    &thisId);
  thisId.fIdentifier = "R";
  i_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b(sp, u, 0, 4, "R")),
                     &thisId, y->R);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : void
 * Return Type  : const mxArray *
 */
static const mxArray *f_emlrt_marshallOut(void)
{
  const mxArray *y;
  const mxArray *m5;
  static const int32_T iv8[2] = { 0, 0 };

  static const int32_T iv9[2] = { 0, 0 };

  y = NULL;
  m5 = emlrtCreateNumericArray(2, iv8, mxDOUBLE_CLASS, mxREAL);
  emlrtMxSetData((mxArray *)m5, NULL);
  emlrtSetDimensions((mxArray *)m5, iv9, 2);
  emlrtAssign(&y, m5);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real32_T y[5]
 * Return Type  : void
 */
static void g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[5])
{
  o_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const parameters_t u
 * Return Type  : const mxArray *
 */
static const mxArray *g_emlrt_marshallOut(const parameters_t u)
{
  const mxArray *y;
  static const char * sv0[2] = { "Bl", "M_m" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 2, sv0));
  emlrtSetFieldR2017b(y, 0, "Bl", b_emlrt_marshallOut(u.Bl), 0);
  emlrtSetFieldR2017b(y, 0, "M_m", b_emlrt_marshallOut(u.M_m), 1);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real32_T y[25]
 * Return Type  : void
 */
static void h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[25])
{
  p_emlrt_marshallIn(sp, emlrtAlias(u), parentId, y);
  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const char_T u[25]
 * Return Type  : const mxArray *
 */
static const mxArray *h_emlrt_marshallOut(const emlrtStack *sp, const char_T u
  [25])
{
  const mxArray *y;
  const mxArray *m6;
  static const int32_T iv10[2] = { 1, 25 };

  y = NULL;
  m6 = emlrtCreateCharArray(2, iv10);
  emlrtInitCharArrayR2013a(sp, 25, m6, &u[0]);
  emlrtAssign(&y, m6);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 *                real32_T y[2]
 * Return Type  : void
 */
static void i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId, real32_T y[2])
{
  emlrtMsgIdentifier thisId;
  int32_T i;
  int32_T iv1[2];
  boolean_T bv1[2];
  char_T str[11];
  thisId.fParent = parentId;
  thisId.bParentIsCell = true;
  for (i = 0; i < 2; i++) {
    iv1[i] = 1 + i;
    bv1[i] = false;
  }

  emlrtCheckCell(sp, parentId, u, 2U, iv1, bv1);
  for (i = 0; i < 2; i++) {
    sprintf(&str[0], "%d", i + 1);
    thisId.fIdentifier = &str[0];
    y[i] = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell(sp, parentId, u, i)),
      &thisId);
  }

  emlrtDestroyArray(&u);
}

/*
 * Arguments    : const state_t u
 * Return Type  : const mxArray *
 */
static const mxArray *i_emlrt_marshallOut(const state_t u)
{
  const mxArray *y;
  static const char * sv1[5] = { "xd", "xd_dot", "R_m", "K_m", "R_e" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, sv1));
  emlrtSetFieldR2017b(y, 0, "xd", b_emlrt_marshallOut(u.xd), 0);
  emlrtSetFieldR2017b(y, 0, "xd_dot", b_emlrt_marshallOut(u.xd_dot), 1);
  emlrtSetFieldR2017b(y, 0, "R_m", b_emlrt_marshallOut(u.R_m), 2);
  emlrtSetFieldR2017b(y, 0, "K_m", b_emlrt_marshallOut(u.K_m), 3);
  emlrtSetFieldR2017b(y, 0, "R_e", b_emlrt_marshallOut(u.R_e), 4);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *p
 *                const char_T *identifier
 * Return Type  : real32_T (*)[2]
 */
static real32_T (*j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *p,
  const char_T *identifier))[2]
{
  real32_T (*y)[2];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = k_emlrt_marshallIn(sp, emlrtAlias(p), &thisId);
  emlrtDestroyArray(&p);
  return y;
}
/*
 * Arguments    : const dstate_t u
 * Return Type  : const mxArray *
 */
  static const mxArray *j_emlrt_marshallOut(const dstate_t u)
{
  const mxArray *y;
  static const char * sv2[5] = { "xd_dot", "xd_dot_dot", "R_m_dot", "K_m_dot",
    "R_e_dot" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, sv2));
  emlrtSetFieldR2017b(y, 0, "xd_dot", b_emlrt_marshallOut(u.xd_dot), 0);
  emlrtSetFieldR2017b(y, 0, "xd_dot_dot", b_emlrt_marshallOut(u.xd_dot_dot), 1);
  emlrtSetFieldR2017b(y, 0, "R_m_dot", b_emlrt_marshallOut(u.R_m_dot), 2);
  emlrtSetFieldR2017b(y, 0, "K_m_dot", b_emlrt_marshallOut(u.K_m_dot), 3);
  emlrtSetFieldR2017b(y, 0, "R_e_dot", b_emlrt_marshallOut(u.R_e_dot), 4);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real32_T (*)[2]
 */
static real32_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[2]
{
  real32_T (*y)[2];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const ctrl_t u
 * Return Type  : const mxArray *
 */
  static const mxArray *k_emlrt_marshallOut(const ctrl_t u)
{
  const mxArray *y;
  static const char * sv3[1] = { "v" };

  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 1, sv3));
  emlrtSetFieldR2017b(y, 0, "v", b_emlrt_marshallOut(u.v), 0);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *X
 *                const char_T *identifier
 * Return Type  : real32_T (*)[5]
 */
static real32_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *X,
  const char_T *identifier))[5]
{
  real32_T (*y)[5];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = (const char *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = m_emlrt_marshallIn(sp, emlrtAlias(X), &thisId);
  emlrtDestroyArray(&X);
  return y;
}
/*
 * Arguments    : const struct0_T *u
 * Return Type  : const mxArray *
 */
  static const mxArray *l_emlrt_marshallOut(const struct0_T *u)
{
  const mxArray *y;
  static const char * sv4[5] = { "X0", "P0", "Q", "U", "R" };

  const mxArray *b_y;
  const mxArray *m7;
  static const int32_T iv11[1] = { 5 };

  real32_T *pData;
  int32_T i;
  static const int32_T iv12[2] = { 5, 5 };

  real32_T (*b_pData)[25];
  int32_T b_i;
  static const int32_T iv13[2] = { 5, 5 };

  real32_T b_u[2];
  int32_T iv14[2];
  y = NULL;
  emlrtAssign(&y, emlrtCreateStructMatrix(1, 1, 5, sv4));
  b_y = NULL;
  m7 = emlrtCreateNumericArray(1, iv11, mxSINGLE_CLASS, mxREAL);
  pData = (real32_T *)emlrtMxGetData(m7);
  for (i = 0; i < 5; i++) {
    pData[i] = u->X0[i];
  }

  emlrtAssign(&b_y, m7);
  emlrtSetFieldR2017b(y, 0, "X0", b_y, 0);
  b_y = NULL;
  m7 = emlrtCreateNumericArray(2, iv12, mxSINGLE_CLASS, mxREAL);
  b_pData = (real32_T (*)[25])emlrtMxGetData(m7);
  for (i = 0; i < 5; i++) {
    for (b_i = 0; b_i < 5; b_i++) {
      (*b_pData)[b_i + 5 * i] = u->P0[b_i + 5 * i];
    }
  }

  emlrtAssign(&b_y, m7);
  emlrtSetFieldR2017b(y, 0, "P0", b_y, 1);
  b_y = NULL;
  m7 = emlrtCreateNumericArray(2, iv13, mxSINGLE_CLASS, mxREAL);
  b_pData = (real32_T (*)[25])emlrtMxGetData(m7);
  for (i = 0; i < 5; i++) {
    for (b_i = 0; b_i < 5; b_i++) {
      (*b_pData)[b_i + 5 * i] = u->Q[b_i + 5 * i];
    }
  }

  emlrtAssign(&b_y, m7);
  emlrtSetFieldR2017b(y, 0, "Q", b_y, 2);
  emlrtSetFieldR2017b(y, 0, "U", b_emlrt_marshallOut(u->U), 3);
  for (i = 0; i < 2; i++) {
    b_u[i] = u->R[i];
  }

  b_y = NULL;
  for (i = 0; i < 2; i++) {
    iv14[i] = 1 + i;
  }

  emlrtAssign(&b_y, emlrtCreateCellArrayR2014a(2, iv14));
  for (i = 0; i < 2; i++) {
    emlrtSetCell(b_y, i, b_emlrt_marshallOut(b_u[i]));
  }

  emlrtSetFieldR2017b(y, 0, "R", b_y, 4);
  return y;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *u
 *                const emlrtMsgIdentifier *parentId
 * Return Type  : real32_T (*)[5]
 */
static real32_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[5]
{
  real32_T (*y)[5];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real32_T
 */
  static real32_T n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  real32_T ret;
  static const int32_T dims = 0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "single", false, 0U, &dims);
  ret = *(real32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real32_T ret[5]
 * Return Type  : void
 */
static void o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real32_T ret[5])
{
  static const int32_T dims[1] = { 5 };

  int32_T i0;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "single", false, 1U, dims);
  for (i0 = 0; i0 < 5; i0++) {
    ret[i0] = (*(real32_T (*)[5])emlrtMxGetData(src))[i0];
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 *                real32_T ret[25]
 * Return Type  : void
 */
static void p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId, real32_T ret[25])
{
  static const int32_T dims[2] = { 5, 5 };

  int32_T i1;
  int32_T i2;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "single", false, 2U, dims);
  for (i1 = 0; i1 < 5; i1++) {
    for (i2 = 0; i2 < 5; i2++) {
      ret[i2 + 5 * i1] = (*(real32_T (*)[25])emlrtMxGetData(src))[i2 + 5 * i1];
    }
  }

  emlrtDestroyArray(&src);
}

/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real32_T (*)[2]
 */
static real32_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[2]
{
  real32_T (*ret)[2];
  static const int32_T dims[1] = { 2 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "single", false, 1U, dims);
  ret = (real32_T (*)[2])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
/*
 * Arguments    : const emlrtStack *sp
 *                const mxArray *src
 *                const emlrtMsgIdentifier *msgId
 * Return Type  : real32_T (*)[5]
 */
  static real32_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[5]
{
  real32_T (*ret)[5];
  static const int32_T dims[1] = { 5 };

  emlrtCheckBuiltInR2012b(sp, msgId, src, "single", false, 1U, dims);
  ret = (real32_T (*)[5])emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void ctrl_struct_initializer_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  static const uint32_T ctrl[4] = { 262665984U, 3168720707U, 2402030810U,
    1186758560U };

  ctrl_t out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "ctrl", ctrl, prhs[0], false);

  /* Invoke the target function */
  ctrl_struct_initializer(&out);

  /* Marshall function outputs */
  plhs[0] = k_emlrt_marshallOut(out);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void dstate_struct_initializer_api(const mxArray * const prhs[1], const mxArray *
  plhs[1])
{
  static const uint32_T dstate[4] = { 4281054031U, 434408559U, 4210050298U,
    1926546272U };

  dstate_t out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "dstate", dstate, prhs[0], false);

  /* Invoke the target function */
  dstate_struct_initializer(&out);

  /* Marshall function outputs */
  plhs[0] = j_emlrt_marshallOut(out);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void filter_parameters_struct_initializer_api(const mxArray * const prhs[1],
  const mxArray *plhs[1])
{
  static const uint32_T f_p[4] = { 1031791567U, 2858036067U, 1003279951U,
    2039894613U };

  struct0_T out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "f_p", f_p, prhs[0], false);

  /* Invoke the target function */
  filter_parameters_struct_initializer(&out);

  /* Marshall function outputs */
  plhs[0] = l_emlrt_marshallOut(&out);
}

/*
 * Arguments    : const mxArray * const prhs[4]
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void get_R_e_measurement_api(const mxArray * const prhs[4], const mxArray *plhs
  [4])
{
  real_T (*J_y_x)[5];
  real_T (*J_y_n)[5];
  real32_T (*X)[5];
  real32_T v;
  real32_T (*n)[5];
  real32_T (*p)[2];
  real32_T y_R_e;
  real_T J_y_u;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  J_y_x = (real_T (*)[5])mxMalloc(sizeof(real_T [5]));
  J_y_n = (real_T (*)[5])mxMalloc(sizeof(real_T [5]));

  /* Marshall function inputs */
  X = l_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X");
  v = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "v");
  n = l_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "n");
  p = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "p");

  /* Invoke the target function */
  get_R_e_measurement(*X, v, *n, *p, &y_R_e, *J_y_x, &J_y_u, *J_y_n);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(y_R_e);
  plhs[1] = c_emlrt_marshallOut(*J_y_x);
  plhs[2] = d_emlrt_marshallOut(J_y_u);
  plhs[3] = c_emlrt_marshallOut(*J_y_n);
}

/*
 * Arguments    : const mxArray * const prhs[5]
 *                const mxArray *plhs[2]
 * Return Type  : void
 */
void get_ekf_api(const mxArray * const prhs[5], const mxArray *plhs[2])
{
  real32_T (*X_out)[5];
  real32_T (*P_diag)[5];
  real32_T u;
  real32_T y[2];
  struct0_T f_p;
  real32_T (*p)[2];
  real32_T dt;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  X_out = (real32_T (*)[5])mxMalloc(sizeof(real32_T [5]));
  P_diag = (real32_T (*)[5])mxMalloc(sizeof(real32_T [5]));

  /* Marshall function inputs */
  u = emlrt_marshallIn(&st, emlrtAliasP(prhs[0]), "u");
  c_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "y", y);
  e_emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "f_p", &f_p);
  p = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "p");
  dt = emlrt_marshallIn(&st, emlrtAliasP(prhs[4]), "dt");

  /* Invoke the target function */
  get_ekf(u, y, &f_p, *p, dt, *X_out, *P_diag);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*X_out);
  plhs[1] = emlrt_marshallOut(*P_diag);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void get_ekf_atexit(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
  get_ekf_xil_terminate();
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void get_ekf_initialize(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void get_ekf_terminate(void)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

/*
 * Arguments    : const mxArray * const prhs[4]
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void get_ii_measurement_api(const mxArray * const prhs[4], const mxArray *plhs[4])
{
  real32_T (*J_y_x)[5];
  real_T (*J_y_n)[5];
  real32_T (*X)[5];
  real32_T v;
  real32_T (*n)[5];
  real32_T (*p)[2];
  real32_T y_ii;
  real32_T J_y_u;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  J_y_x = (real32_T (*)[5])mxMalloc(sizeof(real32_T [5]));
  J_y_n = (real_T (*)[5])mxMalloc(sizeof(real_T [5]));

  /* Marshall function inputs */
  X = l_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X");
  v = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "v");
  n = l_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "n");
  p = j_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "p");

  /* Invoke the target function */
  get_ii_measurement(*X, v, *n, *p, &y_ii, *J_y_x, &J_y_u, *J_y_n);

  /* Marshall function outputs */
  plhs[0] = b_emlrt_marshallOut(y_ii);
  plhs[1] = e_emlrt_marshallOut(*J_y_x);
  plhs[2] = b_emlrt_marshallOut(J_y_u);
  plhs[3] = c_emlrt_marshallOut(*J_y_n);
}

/*
 * Arguments    : const mxArray * const prhs[6]
 *                const mxArray *plhs[4]
 * Return Type  : void
 */
void get_model_step_api(const mxArray * const prhs[6], const mxArray *plhs[4])
{
  real32_T (*X_out)[5];
  real32_T (*dX)[5];
  real32_T (*X)[5];
  real32_T u;
  real32_T ut;
  real32_T (*n)[5];
  real32_T (*p)[2];
  real32_T dt;
  real32_T utt;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;
  X_out = (real32_T (*)[5])mxMalloc(sizeof(real32_T [5]));
  dX = (real32_T (*)[5])mxMalloc(sizeof(real32_T [5]));
  mxMalloc(0U);

  /* Marshall function inputs */
  X = l_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "X");
  u = emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "u");
  ut = emlrt_marshallIn(&st, emlrtAliasP(prhs[2]), "ut");
  n = l_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "n");
  p = j_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "p");
  dt = emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "dt");

  /* Invoke the target function */
  get_model_step(*X, u, ut, *n, *p, dt, *X_out, *dX, &utt);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(*X_out);
  plhs[1] = emlrt_marshallOut(*dX);
  plhs[2] = f_emlrt_marshallOut();
  plhs[3] = b_emlrt_marshallOut(utt);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void parameters_initializer_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  static const uint32_T params[4] = { 2294266630U, 3581304866U, 940943775U,
    3664693608U };

  parameters_t out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "params", params, prhs[0], false);

  /* Invoke the target function */
  parameters_initializer(&out);

  /* Marshall function outputs */
  plhs[0] = g_emlrt_marshallOut(out);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void state_names_initializer_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  static const uint32_T state_names[4] = { 239330918U, 4137997868U, 2447950276U,
    3501862095U };

  char_T out[25];
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "state_names", state_names, prhs[0], false);

  /* Invoke the target function */
  state_names_initializer(out);

  /* Marshall function outputs */
  plhs[0] = h_emlrt_marshallOut(&st, out);
}

/*
 * Arguments    : const mxArray * const prhs[1]
 *                const mxArray *plhs[1]
 * Return Type  : void
 */
void state_struct_initializer_api(const mxArray * const prhs[1], const mxArray
  *plhs[1])
{
  static const uint32_T state[4] = { 4288421841U, 1708477348U, 351242664U,
    3924979355U };

  state_t out;
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = emlrtRootTLSGlobal;

  /* Check constant function inputs */
  emlrtCheckArrayChecksumR2014a(&st, "state", state, prhs[0], false);

  /* Invoke the target function */
  state_struct_initializer(&out);

  /* Marshall function outputs */
  plhs[0] = i_emlrt_marshallOut(out);
}

/*
 * File trailer for _coder_get_ekf_api.c
 *
 * [EOF]
 */
