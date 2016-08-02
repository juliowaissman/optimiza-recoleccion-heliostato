/*
 * campo_optim_mex.c
 *
 * Code generation for function 'campo_optim_mex'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "campo_optim_mex.h"

/* Variable Definitions */
static const volatile char_T *emlrtBreakCheckR2012bFlagVar;
static emlrtRSInfo emlrtRSI = { 6, "campo_optim",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/campo_optim.m" };

static emlrtRSInfo b_emlrtRSI = { 19, "simulador_rayos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/simulador_rayos.m"
};

static emlrtRSInfo c_emlrtRSI = { 22, "simulador_rayos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/simulador_rayos.m"
};

static emlrtRSInfo d_emlrtRSI = { 28, "simulador_rayos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/simulador_rayos.m"
};

static emlrtRSInfo e_emlrtRSI = { 34, "simulador_rayos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/simulador_rayos.m"
};

static emlrtRSInfo f_emlrtRSI = { 7, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo g_emlrtRSI = { 8, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo h_emlrtRSI = { 11, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo i_emlrtRSI = { 15, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo j_emlrtRSI = { 26, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo k_emlrtRSI = { 27, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo l_emlrtRSI = { 29, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo m_emlrtRSI = { 39, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo n_emlrtRSI = { 40, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo o_emlrtRSI = { 41, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo p_emlrtRSI = { 42, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo q_emlrtRSI = { 50, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtRSInfo r_emlrtRSI = { 71, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtRSInfo s_emlrtRSI = { 86, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtRSInfo t_emlrtRSI = { 30, "eml_xdotc",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/blas/eml_xdotc.m"
};

static emlrtRSInfo u_emlrtRSI = { 1, "xdotc",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+blas/xdotc.p"
};

static emlrtRSInfo v_emlrtRSI = { 1, "xdot",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+blas/xdot.p"
};

static emlrtRSInfo w_emlrtRSI = { 1, "xdot",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+refblas/xdot.p"
};

static emlrtRSInfo x_emlrtRSI = { 14, "sqrt",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/elfun/sqrt.m" };

static emlrtRSInfo y_emlrtRSI = { 12, "repmat",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo ab_emlrtRSI = { 15, "rdivide",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo bb_emlrtRSI = { 9, "eml_div",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_div.m" };

static emlrtRSInfo cb_emlrtRSI = { 18, "min",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/datafun/min.m" };

static emlrtRSInfo db_emlrtRSI = { 15, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

emlrtRSInfo eb_emlrtRSI = { 37, "norm",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo fb_emlrtRSI = { 170, "norm",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/matfun/norm.m" };

emlrtRSInfo gb_emlrtRSI = { 19, "eml_xnrm2",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/blas/eml_xnrm2.m"
};

emlrtRSInfo hb_emlrtRSI = { 1, "xnrm2",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+blas/xnrm2.p"
};

static emlrtRSInfo ib_emlrtRSI = { 3, "reflejado",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/reflejado.m" };

static emlrtRSInfo jb_emlrtRSI = { 6, "reflejado",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/reflejado.m" };

static emlrtRSInfo kb_emlrtRSI = { 13, "reflejado",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/reflejado.m" };

static emlrtRSInfo lb_emlrtRSI = { 14, "reflejado",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/reflejado.m" };

static emlrtRSInfo mb_emlrtRSI = { 25, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtRSInfo nb_emlrtRSI = { 14, "log",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/elfun/log.m" };

static emlrtMCInfo emlrtMCI = { 16, 1, "error",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtMCInfo b_emlrtMCI = { 14, 5, "eml_li_find",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtMCInfo c_emlrtMCI = { 24, 5, "repmat",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtMCInfo d_emlrtMCI = { 42, 9, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo e_emlrtMCI = { 41, 19, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo f_emlrtMCI = { 57, 5, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo g_emlrtMCI = { 56, 15, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtMCInfo h_emlrtMCI = { 15, 5, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtMCInfo i_emlrtMCI = { 13, 15, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtMCInfo j_emlrtMCI = { 14, 5, "rdivide",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo k_emlrtMCI = { 13, 15, "rdivide",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtMCInfo l_emlrtMCI = { 41, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo m_emlrtMCI = { 38, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo n_emlrtMCI = { 82, 9, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtMCInfo o_emlrtMCI = { 81, 19, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtBCInfo emlrtBCI = { 1, 3, 1, 1, "", "xdotx",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p",
  0 };

static emlrtBCInfo b_emlrtBCI = { -1, -1, 1, 1, "", "xdotx",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p",
  0 };

static emlrtBCInfo c_emlrtBCI = { -1, -1, 43, 11, "ind", "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 0 };

static emlrtECInfo emlrtECI = { -1, 40, 10, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtECInfo b_emlrtECI = { 2, 39, 14, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m" };

static emlrtBCInfo d_emlrtBCI = { 1, 600, 32, 5, "b", "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 0 };

static emlrtDCInfo emlrtDCI = { 32, 5, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 1 };

static emlrtBCInfo e_emlrtBCI = { 1, 6, 17, 5, "d", "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 0 };

static emlrtDCInfo b_emlrtDCI = { 17, 5, "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 1 };

static emlrtBCInfo f_emlrtBCI = { -1, -1, 41, 5, "ri", "impactos",
  "/Users/juliowaissman/Documents/github/Colector/optimizador/impactos.m", 0 };

static emlrtBCInfo g_emlrtBCI = { 1, 18, 1, 1, "", "xdotx",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p",
  0 };

static emlrtDCInfo c_emlrtDCI = { 20, 34, "eml_li_find",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m", 4
};

static emlrtRTEInfo emlrtRTEI = { 20, 5, "eml_error",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_error.m" };

static emlrtBCInfo h_emlrtBCI = { 1, 1200, 1, 1, "", "xdotx",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+refblas/xdotx.p",
  0 };

static emlrtBCInfo i_emlrtBCI = { -1, -1, 1, 1, "", "xdot",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/+blas/xdot.p",
  0 };

static emlrtECInfo c_emlrtECI = { 2, 1, 1, "div",
  "/Applications/MATLAB_R2014a.app/toolbox/coder/coder/+coder/+internal/div.p" };

campo_optim_mexStackData *campo_optim_mexStackDataLocal;
static emlrtRSInfo ob_emlrtRSI = { 14, "eml_li_find",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_li_find.m" };

static emlrtRSInfo pb_emlrtRSI = { 13, "rdivide",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo qb_emlrtRSI = { 13, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtRSInfo rb_emlrtRSI = { 24, "repmat",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/elmat/repmat.m" };

static emlrtRSInfo sb_emlrtRSI = { 56, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo tb_emlrtRSI = { 41, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo ub_emlrtRSI = { 16, "error",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/lang/error.m" };

static emlrtRSInfo vb_emlrtRSI = { 81, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo wb_emlrtRSI = { 38, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo xb_emlrtRSI = { 14, "rdivide",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/ops/rdivide.m" };

static emlrtRSInfo yb_emlrtRSI = { 15, "dot",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/specfun/dot.m" };

static emlrtRSInfo ac_emlrtRSI = { 57, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

static emlrtRSInfo bc_emlrtRSI = { 82, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo cc_emlrtRSI = { 41, "eml_min_or_max",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_min_or_max.m"
};

static emlrtRSInfo dc_emlrtRSI = { 42, "eml_assert_valid_size_arg",
  "/Applications/MATLAB_R2014a.app/toolbox/eml/lib/matlab/eml/eml_assert_valid_size_arg.m"
};

/* Function Declarations */
static boolean_T any(const boolean_T x[6]);
static void b_abs(const real_T x[600], real_T y[600]);
static void b_dot(const emlrtStack *sp, const real_T a[1200], const real_T b
                  [1200], real_T c[600]);
static void b_eml_error(const emlrtStack *sp);
static void b_eml_li_find(const emlrtStack *sp, const boolean_T x_data[], const
  int32_T x_size[1], int32_T y_data[], int32_T y_size[1]);
static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1200];
static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2]);
static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location);
static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location);
static real_T b_norm(const real_T x[3]);
static void b_power(const real_T a_data[], const int32_T a_size[1], real_T
                    y_data[], int32_T y_size[1]);
static void b_rdivide(const emlrtStack *sp, const real_T x_data[], const int32_T
                      x_size[1], const real_T y_data[], const int32_T y_size[2],
                      real_T z_data[], int32_T z_size[1]);
static void b_repmat(const real_T a[2], real_T b[1200]);
static void b_sqrt(const emlrtStack *sp, real_T *x);
static real_T b_sum(const real_T x[600]);
static void c_dot(const emlrtStack *sp, const real_T a_data[], const int32_T
                  a_size[2], const real_T b_data[], const int32_T b_size[2],
                  real_T c_data[], int32_T c_size[1]);
static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *pared,
  const char_T *identifier))[49];
static const mxArray *c_emlrt_marshallOut(const real_T u[3]);
static void c_repmat(const emlrtStack *sp, real_T a, const real_T varargin_1[2],
                     real_T b_data[], int32_T b_size[2]);
static void c_sqrt(real_T x[600]);
static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[49];
static void d_emlrt_marshallOut(const real_T u[3], const mxArray *y);
static void d_repmat(const emlrtStack *sp, const real_T a[2], const real_T
                     varargin_1[2], real_T b_data[], int32_T b_size[2]);
static void d_sqrt(const emlrtStack *sp, real_T x_data[], int32_T x_size[1]);
static void dot(const emlrtStack *sp, const real_T a[18], const real_T b[18],
                real_T c[6]);
static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N, const
  char_T *identifier))[21];
static const mxArray *e_emlrt_marshallOut(const real_T u[606]);
static void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2]);
static void eml_div(const emlrtStack *sp, const real_T x_data[], const int32_T
                    x_size[1], const real_T y_data[], const int32_T y_size[2],
                    real_T z_data[], int32_T z_size[1]);
static void eml_error(const emlrtStack *sp);
static void eml_li_find(const emlrtStack *sp, const boolean_T x[6], int32_T
  y_data[], int32_T y_size[1]);
static void eml_scalexp_alloc(const int32_T varargin_1_size[1], int32_T z_size[1]);
static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *entradas,
  const char_T *identifier))[1200];
static const mxArray *emlrt_marshallOut(const real_T u);
static void error(const emlrtStack *sp);
static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[21];
static const mxArray *f_emlrt_marshallOut(const real_T u[250652]);
static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Pp_1,
  const char_T *identifier))[187989];
static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[187989];
static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *radio,
  const char_T *identifier);
static boolean_T isequal(const real_T varargin_1[2], const real_T varargin_2[2]);
static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayo,
  const char_T *identifier))[3];
static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[3];
static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ct,
  const char_T *identifier))[1200];
static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location);
static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1200];
static real_T norm(const real_T x_data[]);
static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1200];
static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[49];
static void power(const real_T a[600], real_T y[600]);
static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[21];
static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[187989];
static void rdivide(const real_T x[6], const real_T y[6], real_T z[6]);
static void repmat(const real_T a[3], real_T b[18]);
static real_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId);
static real_T sum(const real_T x[606]);
static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3];
static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1200];

/* Function Definitions */
static boolean_T any(const boolean_T x[6])
{
  boolean_T y;
  int32_T k;
  boolean_T exitg1;
  y = false;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 6)) {
    if (!(x[k] == 0)) {
      y = true;
      exitg1 = true;
    } else {
      k++;
    }
  }

  return y;
}

static void b_abs(const real_T x[600], real_T y[600])
{
  int32_T k;
  for (k = 0; k < 600; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

static void b_dot(const emlrtStack *sp, const real_T a[1200], const real_T b
                  [1200], real_T c[600])
{
  int32_T ic;
  int32_T i1;
  int32_T j;
  real_T b_c;
  int32_T ix;
  int32_T iy;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  ic = -1;
  i1 = 0;
  for (j = 0; j < 600; j++) {
    ic++;
    i1++;
    st.site = &r_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &t_emlrtRSI;
    d_st.site = &u_emlrtRSI;
    e_st.site = &v_emlrtRSI;
    f_st.site = &w_emlrtRSI;
    b_c = 0.0;
    ix = i1;
    iy = i1;
    for (k = 0; k < 2; k++) {
      b_c += a[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 1200, &h_emlrtBCI, &f_st)
        - 1] * b[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 1200, &h_emlrtBCI,
        &f_st) - 1];
      ix += 600;
      iy += 600;
    }

    c[ic] = b_c;
  }
}

static void b_eml_error(const emlrtStack *sp)
{
  static char_T cv21[3][1] = { { 'l' }, { 'o' }, { 'g' } };

  emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
    3, 4, 3, cv21);
}

static void b_eml_li_find(const emlrtStack *sp, const boolean_T x_data[], const
  int32_T x_size[1], int32_T y_data[], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m9;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  k = 0;
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      k++;
    }
  }

  if (k <= x_size[0]) {
  } else {
    y = NULL;
    m9 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m9);
    st.site = &ob_emlrtRSI;
    b_error(&st, y, &b_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &c_emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  for (i = 1; i <= x_size[0]; i++) {
    if (x_data[i - 1]) {
      y_data[k] = i;
      k++;
    }
  }
}

static real_T (*b_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1200]
{
  real_T (*y)[1200];
  y = o_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *b_emlrt_marshallOut(const real_T u_data[], const int32_T
  u_size[2])
{
  const mxArray *y;
  static const int32_T iv11[2] = { 0, 0 };

  const mxArray *m11;
  y = NULL;
  m11 = emlrtCreateNumericArray(2, iv11, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m11, (void *)u_data);
  emlrtSetDimensions((mxArray *)m11, u_size, 2);
  emlrtAssign(&y, m11);
  return y;
}

static void b_error(const emlrtStack *sp, const mxArray *b, emlrtMCInfo
                    *location)
{
  const mxArray *pArray;
  pArray = b;
  emlrtCallMATLABR2012b(sp, 0, NULL, 1, &pArray, "error", true, location);
}

static const mxArray *b_message(const emlrtStack *sp, const mxArray *b,
  emlrtMCInfo *location)
{
  const mxArray *pArray;
  const mxArray *m16;
  pArray = b;
  return emlrtCallMATLABR2012b(sp, 1, &m16, 1, &pArray, "message", true,
    location);
}

static real_T b_norm(const real_T x[3])
{
  real_T y;
  real_T scale;
  int32_T k;
  real_T absxk;
  real_T t;
  y = 0.0;
  scale = 2.2250738585072014E-308;
  for (k = 0; k < 3; k++) {
    absxk = muDoubleScalarAbs(x[k]);
    if (absxk > scale) {
      t = scale / absxk;
      y = 1.0 + y * t * t;
      scale = absxk;
    } else {
      t = absxk / scale;
      y += t * t;
    }
  }

  return scale * muDoubleScalarSqrt(y);
}

static void b_power(const real_T a_data[], const int32_T a_size[1], real_T
                    y_data[], int32_T y_size[1])
{
  int32_T k;
  eml_scalexp_alloc(a_size, y_size);
  for (k = 0; k < y_size[0]; k++) {
    y_data[k] = a_data[k] * a_data[k];
  }
}

static void b_rdivide(const emlrtStack *sp, const real_T x_data[], const int32_T
                      x_size[1], const real_T y_data[], const int32_T y_size[2],
                      real_T z_data[], int32_T z_size[1])
{
  int16_T varargin_1[2];
  int16_T varargin_2[2];
  int32_T i;
  boolean_T p;
  boolean_T b_p;
  boolean_T exitg1;
  const mxArray *y;
  static const int32_T iv10[2] = { 1, 15 };

  const mxArray *m8;
  char_T cv19[15];
  static const char_T cv20[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'i',
    'm', 'a', 'g', 'r', 'e', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  varargin_1[0] = (int16_T)x_size[0];
  varargin_1[1] = 1;
  for (i = 0; i < 2; i++) {
    varargin_2[i] = (int16_T)y_size[i];
  }

  p = false;
  b_p = true;
  i = 0;
  exitg1 = false;
  while ((!exitg1) && (i < 2)) {
    if (!(varargin_1[i] == varargin_2[i])) {
      b_p = false;
      exitg1 = true;
    } else {
      i++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  if (p) {
  } else {
    y = NULL;
    m8 = emlrtCreateCharArray(2, iv10);
    for (i = 0; i < 15; i++) {
      cv19[i] = cv20[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m8, cv19);
    emlrtAssign(&y, m8);
    st.site = &pb_emlrtRSI;
    b_st.site = &xb_emlrtRSI;
    b_error(&st, b_message(&b_st, y, &j_emlrtMCI), &k_emlrtMCI);
  }

  st.site = &ab_emlrtRSI;
  eml_div(&st, x_data, x_size, y_data, y_size, z_data, z_size);
}

static void b_repmat(const real_T a[2], real_T b[1200])
{
  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  for (jcol = 0; jcol < 2; jcol++) {
    ibmat = jcol * 600;
    for (itilerow = 0; itilerow < 600; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

static void b_sqrt(const emlrtStack *sp, real_T *x)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (*x < 0.0) {
    st.site = &x_emlrtRSI;
    eml_error(&st);
  }

  *x = muDoubleScalarSqrt(*x);
}

static real_T b_sum(const real_T x[600])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 599; k++) {
    y += x[k + 1];
  }

  return y;
}

static void c_dot(const emlrtStack *sp, const real_T a_data[], const int32_T
                  a_size[2], const real_T b_data[], const int32_T b_size[2],
                  real_T c_data[], int32_T c_size[1])
{
  real_T a[2];
  real_T b[2];
  int32_T i;
  boolean_T b1;
  const mxArray *y;
  static const int32_T iv9[2] = { 1, 28 };

  const mxArray *m7;
  char_T cv17[28];
  static const char_T cv18[28] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'd', 'o',
    't', ':', 'I', 'n', 'p', 'u', 't', 'S', 'i', 'z', 'e', 'M', 'i', 's', 'm',
    'a', 't', 'c', 'h' };

  int16_T sz[2];
  int32_T ic;
  int32_T i1;
  int32_T j;
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  ptrdiff_t incy_t;
  double * xix0_t;
  double * yiy0_t;
  real_T c;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  c_st.prev = &st;
  c_st.tls = st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  for (i = 0; i < 2; i++) {
    a[i] = a_size[i];
    b[i] = b_size[i];
  }

  if (isequal(a, b) || ((a_size[0] == 1) && (b_size[0] == 1))) {
    b1 = true;
  } else {
    b1 = false;
  }

  if (b1) {
  } else {
    y = NULL;
    m7 = emlrtCreateCharArray(2, iv9);
    for (i = 0; i < 28; i++) {
      cv17[i] = cv18[i];
    }

    emlrtInitCharArrayR2013a(sp, 28, m7, cv17);
    emlrtAssign(&y, m7);
    st.site = &qb_emlrtRSI;
    b_st.site = &yb_emlrtRSI;
    b_error(&st, b_message(&b_st, y, &h_emlrtMCI), &i_emlrtMCI);
  }

  for (i = 0; i < 2; i++) {
    sz[i] = (int16_T)a_size[i];
  }

  c_size[0] = sz[0];
  ic = -1;
  i1 = 0;
  for (j = 1; j <= a_size[0]; j++) {
    ic++;
    i1++;
    st.site = &r_emlrtRSI;
    c_st.site = &s_emlrtRSI;
    d_st.site = &t_emlrtRSI;
    e_st.site = &u_emlrtRSI;
    f_st.site = &v_emlrtRSI;
    n_t = (ptrdiff_t)(2);
    incx_t = (ptrdiff_t)(a_size[0]);
    incy_t = (ptrdiff_t)(a_size[0]);
    i = a_size[0] << 1;
    xix0_t = (double *)(&a_data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
      &i_emlrtBCI, &f_st) - 1]);
    i = b_size[0] << 1;
    yiy0_t = (double *)(&b_data[emlrtDynamicBoundsCheckFastR2012b(i1, 1, i,
      &i_emlrtBCI, &f_st) - 1]);
    c = ddot(&n_t, xix0_t, &incx_t, yiy0_t, &incy_t);
    c_data[ic] = c;
  }
}

static real_T (*c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *pared,
  const char_T *identifier))[49]
{
  real_T (*y)[49];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = d_emlrt_marshallIn(sp, emlrtAlias(pared), &thisId);
  emlrtDestroyArray(&pared);
  return y;
}
  static const mxArray *c_emlrt_marshallOut(const real_T u[3])
{
  const mxArray *y;
  static const int32_T iv12[2] = { 0, 0 };

  const mxArray *m12;
  static const int32_T iv13[2] = { 1, 3 };

  y = NULL;
  m12 = emlrtCreateNumericArray(2, iv12, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m12, (void *)u);
  emlrtSetDimensions((mxArray *)m12, iv13, 2);
  emlrtAssign(&y, m12);
  return y;
}

static void c_repmat(const emlrtStack *sp, real_T a, const real_T varargin_1[2],
                     real_T b_data[], int32_T b_size[2])
{
  const mxArray *y;
  static const int32_T iv5[2] = { 1, 15 };

  const mxArray *m4;
  char_T cv9[15];
  int32_T i;
  static const char_T cv10[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  int32_T i1;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  eml_assert_valid_size_arg(&st, varargin_1);
  if ((int16_T)(int32_T)varargin_1[0] == (int32_T)varargin_1[0]) {
  } else {
    y = NULL;
    m4 = emlrtCreateCharArray(2, iv5);
    for (i = 0; i < 15; i++) {
      cv9[i] = cv10[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m4, cv9);
    emlrtAssign(&y, m4);
    st.site = &rb_emlrtRSI;
    b_error(&st, y, &c_emlrtMCI);
  }

  b_size[0] = (int32_T)varargin_1[0];
  b_size[1] = 1;
  i = (int32_T)varargin_1[0];
  for (i1 = 0; i1 < i; i1++) {
    b_data[i1] = a;
  }
}

static void c_sqrt(real_T x[600])
{
  int32_T k;
  for (k = 0; k < 600; k++) {
    x[k] = muDoubleScalarSqrt(x[k]);
  }
}

static real_T (*d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[49]
{
  real_T (*y)[49];
  y = p_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static void d_emlrt_marshallOut(const real_T u[3], const mxArray *y)
{
  static const int32_T iv14[2] = { 1, 3 };

  mxSetData((mxArray *)y, (void *)u);
  emlrtSetDimensions((mxArray *)y, iv14, 2);
}

static void d_repmat(const emlrtStack *sp, const real_T a[2], const real_T
                     varargin_1[2], real_T b_data[], int32_T b_size[2])
{
  const mxArray *y;
  static const int32_T iv8[2] = { 1, 15 };

  const mxArray *m6;
  char_T cv15[15];
  int32_T i;
  static const char_T cv16[15] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 'p', 'm',
    'a', 'x', 's', 'i', 'z', 'e' };

  int32_T ibmat;
  int32_T itilerow;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &y_emlrtRSI;
  eml_assert_valid_size_arg(&st, varargin_1);
  if ((int16_T)(int32_T)varargin_1[0] == (int32_T)varargin_1[0]) {
  } else {
    y = NULL;
    m6 = emlrtCreateCharArray(2, iv8);
    for (i = 0; i < 15; i++) {
      cv15[i] = cv16[i];
    }

    emlrtInitCharArrayR2013a(sp, 15, m6, cv15);
    emlrtAssign(&y, m6);
    st.site = &rb_emlrtRSI;
    b_error(&st, y, &c_emlrtMCI);
  }

  b_size[0] = (int32_T)varargin_1[0];
  b_size[1] = 2;
  if ((int32_T)varargin_1[0] == 0) {
  } else {
    for (i = 0; i < 2; i++) {
      ibmat = i * (int32_T)varargin_1[0];
      for (itilerow = 1; itilerow <= (int32_T)varargin_1[0]; itilerow++) {
        b_data[(ibmat + itilerow) - 1] = a[i];
      }
    }
  }
}

static void d_sqrt(const emlrtStack *sp, real_T x_data[], int32_T x_size[1])
{
  int32_T k;
  int32_T i8;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  for (k = 0; k < x_size[0]; k++) {
    if (x_data[k] < 0.0) {
      st.site = &x_emlrtRSI;
      eml_error(&st);
    }
  }

  i8 = x_size[0];
  for (k = 0; k < i8; k++) {
    x_data[k] = muDoubleScalarSqrt(x_data[k]);
  }
}

static void dot(const emlrtStack *sp, const real_T a[18], const real_T b[18],
                real_T c[6])
{
  int32_T ic;
  int32_T i1;
  int32_T j;
  real_T b_c;
  int32_T ix;
  int32_T iy;
  int32_T k;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  ic = -1;
  i1 = 0;
  for (j = 0; j < 6; j++) {
    ic++;
    i1++;
    st.site = &r_emlrtRSI;
    b_st.site = &s_emlrtRSI;
    c_st.site = &t_emlrtRSI;
    d_st.site = &u_emlrtRSI;
    e_st.site = &v_emlrtRSI;
    f_st.site = &w_emlrtRSI;
    b_c = 0.0;
    ix = i1;
    iy = i1;
    for (k = 0; k < 3; k++) {
      b_c += a[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 18, &g_emlrtBCI, &f_st)
        - 1] * b[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 18, &g_emlrtBCI, &f_st)
        - 1];
      ix += 6;
      iy += 6;
    }

    c[ic] = b_c;
  }
}

static real_T (*e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *N, const
  char_T *identifier))[21]
{
  real_T (*y)[21];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = f_emlrt_marshallIn(sp, emlrtAlias(N), &thisId);
  emlrtDestroyArray(&N);
  return y;
}
  static const mxArray *e_emlrt_marshallOut(const real_T u[606])
{
  const mxArray *y;
  static const int32_T iv15[2] = { 0, 0 };

  const mxArray *m13;
  static const int32_T iv16[2] = { 1, 606 };

  y = NULL;
  m13 = emlrtCreateNumericArray(2, iv15, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m13, (void *)u);
  emlrtSetDimensions((mxArray *)m13, iv16, 2);
  emlrtAssign(&y, m13);
  return y;
}

static void eml_assert_valid_size_arg(const emlrtStack *sp, const real_T
  varargin_1[2])
{
  int32_T i;
  int32_T exitg1;
  boolean_T p;
  const mxArray *y;
  static const int32_T iv6[2] = { 1, 57 };

  const mxArray *m5;
  char_T cv11[57];
  static const char_T cv12[57] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'a', 's', 's', 'e', 'r', 't',
    '_', 'v', 'a', 'l', 'i', 'd', '_', 's', 'i', 'z', 'e', '_', 'a', 'r', 'g',
    '_', 'i', 'n', 'v', 'a', 'l', 'i', 'd', 'S', 'i', 'z', 'e', 'V', 'e', 'c',
    't', 'o', 'r' };

  const mxArray *b_y;
  const mxArray *c_y;
  real_T n;
  const mxArray *d_y;
  static const int32_T iv7[2] = { 1, 21 };

  char_T cv13[21];
  static const char_T cv14[21] = { 'C', 'o', 'd', 'e', 'r', ':', 'M', 'A', 'T',
    'L', 'A', 'B', ':', 'p', 'm', 'a', 'x', 's', 'i', 'z', 'e' };

  emlrtStack st;
  emlrtStack b_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = sp;
  b_st.tls = sp->tls;
  i = 0;
  do {
    exitg1 = 0;
    if (i < 2) {
      if (varargin_1[i] != varargin_1[i]) {
        p = false;
        exitg1 = 1;
      } else {
        i++;
      }
    } else {
      p = true;
      exitg1 = 1;
    }
  } while (exitg1 == 0);

  if (p) {
  } else {
    y = NULL;
    m5 = emlrtCreateCharArray(2, iv6);
    for (i = 0; i < 57; i++) {
      cv11[i] = cv12[i];
    }

    emlrtInitCharArrayR2013a(sp, 57, m5, cv11);
    emlrtAssign(&y, m5);
    b_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MIN_int32_T;
    emlrtAssign(&b_y, m5);
    c_y = NULL;
    m5 = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
    *(int32_T *)mxGetData(m5) = MAX_int32_T;
    emlrtAssign(&c_y, m5);
    st.site = &tb_emlrtRSI;
    b_st.site = &dc_emlrtRSI;
    b_error(&st, message(&b_st, y, b_y, c_y, &d_emlrtMCI), &e_emlrtMCI);
  }

  n = 1.0;
  for (i = 0; i < 2; i++) {
    if (varargin_1[i] <= 0.0) {
      n = 0.0;
    } else {
      n *= varargin_1[i];
    }
  }

  if (2.147483647E+9 >= n) {
  } else {
    d_y = NULL;
    m5 = emlrtCreateCharArray(2, iv7);
    for (i = 0; i < 21; i++) {
      cv13[i] = cv14[i];
    }

    emlrtInitCharArrayR2013a(sp, 21, m5, cv13);
    emlrtAssign(&d_y, m5);
    st.site = &sb_emlrtRSI;
    b_st.site = &ac_emlrtRSI;
    b_error(&st, b_message(&b_st, d_y, &f_emlrtMCI), &g_emlrtMCI);
  }
}

static void eml_div(const emlrtStack *sp, const real_T x_data[], const int32_T
                    x_size[1], const real_T y_data[], const int32_T y_size[2],
                    real_T z_data[], int32_T z_size[1])
{
  int32_T x[2];
  int32_T y[2];
  int32_T i2;
  int32_T loop_ub;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &bb_emlrtRSI;
  x[0] = x_size[0];
  x[1] = 1;
  for (i2 = 0; i2 < 2; i2++) {
    y[i2] = y_size[i2];
  }

  emlrtSizeEqCheck2DFastR2012b(x, y, &c_emlrtECI, &st);
  z_size[0] = x_size[0];
  loop_ub = x_size[0];
  for (i2 = 0; i2 < loop_ub; i2++) {
    z_data[i2] = x_data[i2] / y_data[i2];
  }
}

static void eml_error(const emlrtStack *sp)
{
  static char_T cv8[4][1] = { { 's' }, { 'q' }, { 'r' }, { 't' } };

  emlrtErrorWithMessageIdR2012b(sp, &emlrtRTEI, "Coder:toolbox:ElFunDomainError",
    3, 4, 4, cv8);
}

static void eml_li_find(const emlrtStack *sp, const boolean_T x[6], int32_T
  y_data[], int32_T y_size[1])
{
  int32_T k;
  int32_T i;
  const mxArray *y;
  const mxArray *m3;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  k = 0;
  for (i = 0; i < 6; i++) {
    if (x[i]) {
      k++;
    }
  }

  if (k <= 6) {
  } else {
    y = NULL;
    m3 = emlrtCreateString("Assertion failed.");
    emlrtAssign(&y, m3);
    st.site = &ob_emlrtRSI;
    b_error(&st, y, &b_emlrtMCI);
  }

  emlrtNonNegativeCheckFastR2012b(k, &c_emlrtDCI, sp);
  y_size[0] = k;
  k = 0;
  for (i = 0; i < 6; i++) {
    if (x[i]) {
      y_data[k] = i + 1;
      k++;
    }
  }
}

static void eml_scalexp_alloc(const int32_T varargin_1_size[1], int32_T z_size[1])
{
  z_size[0] = (int16_T)varargin_1_size[0];
}

static real_T (*emlrt_marshallIn(const emlrtStack *sp, const mxArray *entradas,
  const char_T *identifier))[1200]
{
  real_T (*y)[1200];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = b_emlrt_marshallIn(sp, emlrtAlias(entradas), &thisId);
  emlrtDestroyArray(&entradas);
  return y;
}
  static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *y;
  const mxArray *m10;
  y = NULL;
  m10 = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m10);
  return y;
}

static void error(const emlrtStack *sp)
{
  const mxArray *y;
  static const int32_T iv4[2] = { 1, 22 };

  const mxArray *m2;
  char_T cv6[22];
  int32_T i;
  static const char_T cv7[22] = { 'E', 'l', ' ', 'd', 'e', 'n', 'o', 'm', 'i',
    'n', 'a', 'd', 'o', 'r', ' ', 'e', 's', ' ', 'c', 'e', 'r', 'o' };

  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  y = NULL;
  m2 = emlrtCreateCharArray(2, iv4);
  for (i = 0; i < 22; i++) {
    cv6[i] = cv7[i];
  }

  emlrtInitCharArrayR2013a(sp, 22, m2, cv6);
  emlrtAssign(&y, m2);
  st.site = &ub_emlrtRSI;
  b_error(&st, y, &emlrtMCI);
}

static real_T (*f_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[21]
{
  real_T (*y)[21];
  y = q_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static const mxArray *f_emlrt_marshallOut(const real_T u[250652])
{
  const mxArray *y;
  static const int32_T iv17[2] = { 0, 0 };

  const mxArray *m14;
  static const int32_T iv18[2] = { 62663, 4 };

  y = NULL;
  m14 = emlrtCreateNumericArray(2, iv17, mxDOUBLE_CLASS, mxREAL);
  mxSetData((mxArray *)m14, (void *)u);
  emlrtSetDimensions((mxArray *)m14, iv18, 2);
  emlrtAssign(&y, m14);
  return y;
}

static real_T (*g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *Pp_1,
  const char_T *identifier))[187989]
{
  real_T (*y)[187989];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = h_emlrt_marshallIn(sp, emlrtAlias(Pp_1), &thisId);
  emlrtDestroyArray(&Pp_1);
  return y;
}
  static real_T (*h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[187989]
{
  real_T (*y)[187989];
  y = r_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T i_emlrt_marshallIn(const emlrtStack *sp, const mxArray *radio,
  const char_T *identifier)
{
  real_T y;
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = j_emlrt_marshallIn(sp, emlrtAlias(radio), &thisId);
  emlrtDestroyArray(&radio);
  return y;
}

static boolean_T isequal(const real_T varargin_1[2], const real_T varargin_2[2])
{
  boolean_T p;
  boolean_T b_p;
  int32_T k;
  boolean_T exitg1;
  p = false;
  b_p = true;
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k < 2)) {
    if (!(varargin_1[k] == varargin_2[k])) {
      b_p = false;
      exitg1 = true;
    } else {
      k++;
    }
  }

  if (!b_p) {
  } else {
    p = true;
  }

  return p;
}

static real_T j_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  real_T y;
  y = s_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*k_emlrt_marshallIn(const emlrtStack *sp, const mxArray *rayo,
  const char_T *identifier))[3]
{
  real_T (*y)[3];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = l_emlrt_marshallIn(sp, emlrtAlias(rayo), &thisId);
  emlrtDestroyArray(&rayo);
  return y;
}
  static real_T (*l_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId))[3]
{
  real_T (*y)[3];
  y = t_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static real_T (*m_emlrt_marshallIn(const emlrtStack *sp, const mxArray *ct,
  const char_T *identifier))[1200]
{
  real_T (*y)[1200];
  emlrtMsgIdentifier thisId;
  thisId.fIdentifier = identifier;
  thisId.fParent = NULL;
  y = n_emlrt_marshallIn(sp, emlrtAlias(ct), &thisId);
  emlrtDestroyArray(&ct);
  return y;
}
  static const mxArray *message(const emlrtStack *sp, const mxArray *b, const
  mxArray *c, const mxArray *d, emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m15;
  pArrays[0] = b;
  pArrays[1] = c;
  pArrays[2] = d;
  return emlrtCallMATLABR2012b(sp, 1, &m15, 3, pArrays, "message", true,
    location);
}

static real_T (*n_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId))[1200]
{
  real_T (*y)[1200];
  y = u_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}
  static real_T norm(const real_T x_data[])
{
  ptrdiff_t n_t;
  ptrdiff_t incx_t;
  double * xix0_t;
  n_t = (ptrdiff_t)(2);
  incx_t = (ptrdiff_t)(1);
  xix0_t = (double *)(&x_data[0]);
  return dnrm2(&n_t, xix0_t, &incx_t);
}

static real_T (*o_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1200]
{
  real_T (*ret)[1200];
  int32_T iv19[2];
  int32_T i3;
  for (i3 = 0; i3 < 2; i3++) {
    iv19[i3] = 1 + 1199 * i3;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv19);
  ret = (real_T (*)[1200])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*p_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[49]
{
  real_T (*ret)[49];
  int32_T iv20[2];
  int32_T i;
  for (i = 0; i < 2; i++) {
    iv20[i] = 7;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv20);
  ret = (real_T (*)[49])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void power(const real_T a[600], real_T y[600])
{
  int32_T k;
  for (k = 0; k < 600; k++) {
    y[k] = a[k] * a[k];
  }
}

static real_T (*q_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[21]
{
  real_T (*ret)[21];
  int32_T iv21[2];
  int32_T i4;
  for (i4 = 0; i4 < 2; i4++) {
    iv21[i4] = 7 + -4 * i4;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv21);
  ret = (real_T (*)[21])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*r_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[187989]
{
  real_T (*ret)[187989];
  int32_T iv22[2];
  int32_T i5;
  for (i5 = 0; i5 < 2; i5++) {
    iv22[i5] = 62663 + -62660 * i5;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv22);
  ret = (real_T (*)[187989])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void rdivide(const real_T x[6], const real_T y[6], real_T z[6])
{
  int32_T i;
  for (i = 0; i < 6; i++) {
    z[i] = x[i] / y[i];
  }
}

static void repmat(const real_T a[3], real_T b[18])
{
  int32_T jcol;
  int32_T ibmat;
  int32_T itilerow;
  for (jcol = 0; jcol < 3; jcol++) {
    ibmat = jcol * 6;
    for (itilerow = 0; itilerow < 6; itilerow++) {
      b[ibmat + itilerow] = a[jcol];
    }
  }
}

static real_T s_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src, const
  emlrtMsgIdentifier *msgId)
{
  real_T ret;
  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 0U, 0);
  ret = *(real_T *)mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static real_T sum(const real_T x[606])
{
  real_T y;
  int32_T k;
  y = x[0];
  for (k = 0; k < 605; k++) {
    y += x[k + 1];
  }

  return y;
}

static real_T (*t_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[3]
{
  real_T (*ret)[3];
  int32_T iv23[2];
  int32_T i6;
  for (i6 = 0; i6 < 2; i6++) {
    iv23[i6] = 1 + (i6 << 1);
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv23);
  ret = (real_T (*)[3])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}
  static real_T (*u_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId))[1200]
{
  real_T (*ret)[1200];
  int32_T iv24[2];
  int32_T i7;
  for (i7 = 0; i7 < 2; i7++) {
    iv24[i7] = 600 + -598 * i7;
  }

  emlrtCheckBuiltInR2012b(sp, msgId, src, "double", false, 2U, iv24);
  ret = (real_T (*)[1200])mxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

real_T campo_optim(campo_optim_mexStackData *SD, const emlrtStack *sp, const
                   real_T entradas[1200], const real_T pared[49], const real_T
                   N[21], const real_T Pp_1[187989], const real_T rayo1[187989],
                   real_T radio)
{
  real_T b_entradas[1200];
  int32_T i0;
  real_T con_p[606];
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;

  /* CAMPO_OPTIM Funcion objetivo para método de optimización */
  /*    FIXME: Agregar la documentación */
  /* DE_ENTRADAS_A_CT Convierte las entradas a posiciones de los tubos */
  /*    FIXME: Agregar explicación */
  for (i0 = 0; i0 < 600; i0++) {
    b_entradas[i0] = entradas[i0];
    b_entradas[600 + i0] = entradas[600 + i0];
  }

  st.site = &emlrtRSI;
  simulador_rayos(&st, pared, N, Pp_1, rayo1, b_entradas, radio, con_p,
                  SD->f0.unusedU0);
  return 1.0 - b_sum(*(real_T (*)[600])&con_p[6]) / sum(con_p);
}

void campo_optim_api(campo_optim_mexStackData *SD, const mxArray * const prhs[6],
                     const mxArray *plhs[1])
{
  real_T (*entradas)[1200];
  real_T (*pared)[49];
  real_T (*N)[21];
  real_T (*Pp_1)[187989];
  real_T (*rayo1)[187989];
  real_T radio;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;

  /* Marshall function inputs */
  entradas = emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "entradas");
  pared = c_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "pared");
  N = e_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "N");
  Pp_1 = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "Pp_1");
  rayo1 = g_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "rayo1");
  radio = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "radio");

  /* Invoke the target function */
  radio = campo_optim(SD, &st, *entradas, *pared, *N, *Pp_1, *rayo1, radio);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(radio);
}

void campo_optim_mex_atexit(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtCreateRootTLS(&emlrtRootTLSGlobal, &emlrtContextGlobal, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtEnterRtStackR2012b(&st);
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void campo_optim_mex_initialize(emlrtContext *aContext)
{
  emlrtStack st = { NULL, NULL, NULL };

  emlrtBreakCheckR2012bFlagVar = emlrtGetBreakCheckFlagAddressR2012b();
  emlrtCreateRootTLS(&emlrtRootTLSGlobal, aContext, NULL, 1);
  st.tls = emlrtRootTLSGlobal;
  emlrtClearAllocCountR2012b(&st, false, 0U, 0);
  emlrtEnterRtStackR2012b(&st);
  emlrtFirstTimeR2012b(emlrtRootTLSGlobal);
}

void campo_optim_mex_terminate(void)
{
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  emlrtLeaveRtStackR2012b(&st);
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

void impactos(const emlrtStack *sp, const real_T rayo[3], real_T p_i1, const
              real_T P_e[3], const real_T pared[49], const real_T N[21], const
              real_T ct[1200], real_T radio, real_T *p_i, real_T Nrefl_data[],
              int32_T Nrefl_size[2], real_T P_e_new[3])
{
  real_T dv0[18];
  real_T b_pared[18];
  real_T b_N[18];
  int32_T ii;
  int32_T i;
  real_T numerador[6];
  real_T dv1[18];
  real_T denominador[6];
  boolean_T b_denominador[6];
  real_T dv2[6];
  int32_T tmp_size[1];
  int32_T tmp_data[6];
  int32_T loop_ub;
  real_T mtmp;
  int32_T itmp;
  int32_T ix;
  boolean_T exitg4;
  real_T A[1200];
  real_T normBsquare;
  real_T normB;
  real_T dotA[600];
  real_T b_tmp_data[1200];
  real_T b[600];
  real_T b_b[600];
  real_T ri_data[600];
  boolean_T exitg3;
  int32_T ii_data[600];
  boolean_T exitg2;
  boolean_T guard1 = false;
  int16_T b_ii_data[600];
  int16_T ind_data[600];
  int32_T b_size[1];
  real_T a_data[600];
  real_T ind[2];
  int32_T b_tmp_size[2];
  int32_T iv1[2];
  int32_T a[2];
  real_T b_ind[2];
  real_T A_data[1200];
  int32_T A_size[2];
  real_T c_ind[2];
  real_T b_ri_data[600];
  int32_T ri_size[1];
  boolean_T c_ri_data[600];
  int32_T b_ri_size[1];
  boolean_T b0;
  const mxArray *y;
  static const int32_T iv2[2] = { 1, 36 };

  const mxArray *m1;
  char_T cv2[36];
  static const char_T cv3[36] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'a', 'u', 't', 'o', 'D', 'i', 'm', 'I', 'n', 'c',
    'o', 'm', 'p', 'a', 't', 'i', 'b', 'i', 'l', 'i', 't', 'y' };

  const mxArray *b_y;
  static const int32_T iv3[2] = { 1, 39 };

  char_T cv4[39];
  static const char_T cv5[39] = { 'C', 'o', 'd', 'e', 'r', ':', 't', 'o', 'o',
    'l', 'b', 'o', 'x', ':', 'e', 'm', 'l', '_', 'm', 'i', 'n', '_', 'o', 'r',
    '_', 'm', 'a', 'x', '_', 'v', 'a', 'r', 'D', 'i', 'm', 'Z', 'e', 'r', 'o' };

  boolean_T exitg1;
  real_T b_Nrefl_data[3];
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &c_st;
  e_st.tls = c_st.tls;

  /*  valor para que el rayo (por redondeo) no pegue en esquinas de la caja,  */
  /*  ni se vaya de paso (por cuestiones de redondeo) */
  repmat(P_e, dv0);
  for (ii = 0; ii < 3; ii++) {
    for (i = 0; i < 6; i++) {
      b_pared[i + 6 * ii] = pared[(i + 7 * ii) + 1] - dv0[i + 6 * ii];
      b_N[i + 6 * ii] = N[(i + 7 * ii) + 1];
    }
  }

  st.site = &f_emlrtRSI;
  dot(&st, b_pared, b_N, numerador);
  for (ii = 0; ii < 3; ii++) {
    for (i = 0; i < 6; i++) {
      b_N[i + 6 * ii] = N[(i + 7 * ii) + 1];
    }
  }

  repmat(rayo, dv1);
  st.site = &g_emlrtRSI;
  dot(&st, dv1, b_N, denominador);
  for (i = 0; i < 6; i++) {
    b_denominador[i] = (denominador[i] == 0.0);
  }

  if (any(b_denominador)) {
    st.site = &h_emlrtRSI;
    error(&st);
  }

  for (i = 0; i < 6; i++) {
    dv2[i] = 0.999 * numerador[i];
  }

  rdivide(dv2, denominador, numerador);
  for (i = 0; i < 6; i++) {
    b_denominador[i] = (numerador[i] < 0.0);
  }

  st.site = &i_emlrtRSI;
  eml_li_find(&st, b_denominador, tmp_data, tmp_size);
  loop_ub = tmp_size[0];
  for (ii = 0; ii < loop_ub; ii++) {
    numerador[tmp_data[ii] - 1] = 1.0E+20;
  }

  if (p_i1 < 7.0) {
    ii = (int32_T)emlrtIntegerCheckFastR2012b(p_i1, &b_emlrtDCI, sp);
    numerador[emlrtDynamicBoundsCheckFastR2012b(ii, 1, 6, &e_emlrtBCI, sp) - 1] =
      1.0E+20;
  }

  i = 1;
  mtmp = numerador[0];
  itmp = 1;
  if (muDoubleScalarIsNaN(numerador[0])) {
    ix = 2;
    exitg4 = false;
    while ((!exitg4) && (ix < 7)) {
      i = ix;
      if (!muDoubleScalarIsNaN(numerador[ix - 1])) {
        mtmp = numerador[ix - 1];
        itmp = ix;
        exitg4 = true;
      } else {
        ix++;
      }
    }
  }

  if (i < 6) {
    while (i + 1 < 7) {
      if (numerador[i] < mtmp) {
        mtmp = numerador[i];
        itmp = i + 1;
      }

      i++;
    }
  }

  *p_i = itmp;
  Nrefl_size[0] = 1;
  Nrefl_size[1] = 3;
  for (ii = 0; ii < 3; ii++) {
    Nrefl_data[ii] = N[itmp + 7 * ii];
  }

  for (ii = 0; ii < 3; ii++) {
    P_e_new[ii] = P_e[ii] + mtmp * rayo[ii];
  }

  b_repmat(*(real_T (*)[2])&P_e[0], A);
  for (ii = 0; ii < 1200; ii++) {
    A[ii] = ct[ii] - A[ii];
  }

  normBsquare = rayo[0] * rayo[0] + rayo[1] * rayo[1];
  normB = normBsquare;
  st.site = &j_emlrtRSI;
  b_sqrt(&st, &normB);
  st.site = &k_emlrtRSI;
  b_dot(&st, A, A, dotA);
  b_repmat(*(real_T (*)[2])&rayo[0], b_tmp_data);
  st.site = &l_emlrtRSI;
  b_dot(&st, A, b_tmp_data, b);
  memcpy(&b_b[0], &b[0], 600U * sizeof(real_T));
  power(b_b, b);
  for (i = 0; i < 600; i++) {
    ri_data[i] = dotA[i] - b[i] / normBsquare;
  }

  b_abs(ri_data, b);
  c_sqrt(b);
  if (p_i1 > 6.0) {
    normBsquare = p_i1 - 6.0;
    ii = (int32_T)emlrtIntegerCheckFastR2012b(normBsquare, &emlrtDCI, sp);
    b[emlrtDynamicBoundsCheckFastR2012b(ii, 1, 600, &d_emlrtBCI, sp) - 1] =
      1.0E+20;
  }

  i = 0;
  ix = 1;
  ii = 1;
  exitg3 = false;
  while ((!exitg3) && (ii < 601)) {
    if (b[ii - 1] <= radio) {
      i = 1;
      exitg3 = true;
    } else {
      ii++;
    }
  }

  if (i == 0) {
    ix = 0;
  }

  if (ix == 0) {
  } else {
    i = 0;
    ii = 1;
    exitg2 = false;
    while ((!exitg2) && (ii < 601)) {
      guard1 = false;
      if (b[ii - 1] <= radio) {
        i++;
        ii_data[i - 1] = ii;
        if (i >= 600) {
          exitg2 = true;
        } else {
          guard1 = true;
        }
      } else {
        guard1 = true;
      }

      if (guard1) {
        ii++;
      }
    }

    if (1 > i) {
      loop_ub = 0;
    } else {
      loop_ub = i;
    }

    for (ii = 0; ii < loop_ub; ii++) {
      b_ii_data[ii] = (int16_T)ii_data[ii];
    }

    for (ii = 0; ii < loop_ub; ii++) {
      ii_data[ii] = b_ii_data[ii];
    }

    for (ii = 0; ii < loop_ub; ii++) {
      ind_data[ii] = (int16_T)ii_data[ii];
    }

    b_size[0] = loop_ub;
    for (ii = 0; ii < loop_ub; ii++) {
      dotA[ii] = b[ind_data[ii] - 1];
    }

    b_power(dotA, b_size, a_data, tmp_size);
    ind[0] = loop_ub;
    ind[1] = 1.0;
    st.site = &m_emlrtRSI;
    c_repmat(&st, radio * radio, ind, dotA, b_tmp_size);
    for (ii = 0; ii < 2; ii++) {
      iv1[ii] = b_tmp_size[ii];
    }

    a[0] = tmp_size[0];
    a[1] = 1;
    emlrtSizeEqCheck2DFastR2012b(iv1, a, &b_emlrtECI, sp);
    tmp_size[0] = b_tmp_size[0];
    i = b_tmp_size[0];
    for (ii = 0; ii < i; ii++) {
      a_data[ii] = dotA[ii] - a_data[ii];
    }

    st.site = &m_emlrtRSI;
    d_sqrt(&st, a_data, tmp_size);
    b_ind[0] = loop_ub;
    b_ind[1] = 1.0;
    st.site = &n_emlrtRSI;
    d_repmat(&st, *(real_T (*)[2])&rayo[0], b_ind, b_tmp_data, b_tmp_size);
    A_size[0] = loop_ub;
    A_size[1] = 2;
    for (ii = 0; ii < 2; ii++) {
      for (i = 0; i < loop_ub; i++) {
        A_data[i + loop_ub * ii] = A[(ind_data[i] + 600 * ii) - 1];
      }
    }

    st.site = &n_emlrtRSI;
    c_dot(&st, A_data, A_size, b_tmp_data, b_tmp_size, ri_data, b_size);
    c_ind[0] = loop_ub;
    c_ind[1] = 1.0;
    st.site = &n_emlrtRSI;
    c_repmat(&st, normB, c_ind, dotA, b_tmp_size);
    ri_size[0] = b_size[0];
    i = b_size[0];
    for (ii = 0; ii < i; ii++) {
      b_ri_data[ii] = ri_data[ii];
    }

    st.site = &n_emlrtRSI;
    b_rdivide(&st, b_ri_data, ri_size, dotA, b_tmp_size, ri_data, b_size);
    emlrtSizeEqCheck1DFastR2012b(b_size[0], tmp_size[0], &emlrtECI, sp);
    i = b_size[0];
    for (ii = 0; ii < i; ii++) {
      ri_data[ii] -= a_data[ii];
    }

    b_ri_size[0] = b_size[0];
    i = b_size[0];
    for (ii = 0; ii < i; ii++) {
      c_ri_data[ii] = (ri_data[ii] < 0.0);
    }

    st.site = &o_emlrtRSI;
    b_eml_li_find(&st, c_ri_data, b_ri_size, ii_data, tmp_size);
    i = tmp_size[0];
    for (ii = 0; ii < i; ii++) {
      ri_data[emlrtDynamicBoundsCheckFastR2012b(ii_data[ii], 1, b_size[0],
        &f_emlrtBCI, sp) - 1] = 1.0E+20;
    }

    st.site = &p_emlrtRSI;
    b_st.site = &cb_emlrtRSI;
    c_st.site = &db_emlrtRSI;
    if ((b_size[0] == 1) || (b_size[0] != 1)) {
      b0 = true;
    } else {
      b0 = false;
    }

    if (b0) {
    } else {
      y = NULL;
      m1 = emlrtCreateCharArray(2, iv2);
      for (i = 0; i < 36; i++) {
        cv2[i] = cv3[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 36, m1, cv2);
      emlrtAssign(&y, m1);
      d_st.site = &wb_emlrtRSI;
      e_st.site = &cc_emlrtRSI;
      b_error(&d_st, b_message(&e_st, y, &l_emlrtMCI), &m_emlrtMCI);
    }

    if (b_size[0] > 0) {
    } else {
      b_y = NULL;
      m1 = emlrtCreateCharArray(2, iv3);
      for (i = 0; i < 39; i++) {
        cv4[i] = cv5[i];
      }

      emlrtInitCharArrayR2013a(&c_st, 39, m1, cv4);
      emlrtAssign(&b_y, m1);
      d_st.site = &vb_emlrtRSI;
      e_st.site = &bc_emlrtRSI;
      b_error(&d_st, b_message(&e_st, b_y, &n_emlrtMCI), &o_emlrtMCI);
    }

    i = 1;
    normBsquare = ri_data[0];
    itmp = 0;
    if (b_size[0] > 1) {
      if (muDoubleScalarIsNaN(ri_data[0])) {
        ix = 2;
        exitg1 = false;
        while ((!exitg1) && (ix <= b_size[0])) {
          i = ix;
          if (!muDoubleScalarIsNaN(ri_data[ix - 1])) {
            normBsquare = ri_data[ix - 1];
            itmp = ix - 1;
            exitg1 = true;
          } else {
            ix++;
          }
        }
      }

      if (i < b_size[0]) {
        while (i + 1 <= b_size[0]) {
          if (ri_data[i] < normBsquare) {
            normBsquare = ri_data[i];
            itmp = i;
          }

          i++;
        }
      }
    }

    ii = itmp + 1;
    emlrtDynamicBoundsCheckFastR2012b(ii, 1, loop_ub, &c_emlrtBCI, sp);
    if (normBsquare < mtmp) {
      *p_i = (real_T)ind_data[itmp] + 6.0;
      for (ii = 0; ii < 3; ii++) {
        P_e_new[ii] = P_e[ii] + rayo[ii] * normBsquare;
      }

      for (ii = 0; ii < 2; ii++) {
        Nrefl_data[ii] = P_e_new[ii] - ct[(ind_data[itmp] + 600 * ii) - 1];
      }

      st.site = &q_emlrtRSI;
      normBsquare = norm(Nrefl_data);
      for (ii = 0; ii < 2; ii++) {
        b_Nrefl_data[ii] = Nrefl_data[ii] / normBsquare;
      }

      b_Nrefl_data[2] = 0.0;
      Nrefl_size[0] = 1;
      Nrefl_size[1] = 3;
      for (ii = 0; ii < 3; ii++) {
        Nrefl_data[ii] = b_Nrefl_data[ii];
      }
    }
  }
}

void impactos_api(const mxArray * const prhs[7], const mxArray *plhs[3])
{
  real_T (*P_e_new)[3];
  real_T (*Nrefl_data)[3];
  real_T (*rayo)[3];
  real_T p_i1;
  real_T (*P_e)[3];
  real_T (*pared)[49];
  real_T (*N)[21];
  real_T (*ct)[1200];
  real_T radio;
  int32_T Nrefl_size[2];
  real_T p_i;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  P_e_new = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));
  Nrefl_data = (real_T (*)[3])mxMalloc(sizeof(real_T [3]));

  /* Marshall function inputs */
  rayo = k_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "rayo");
  p_i1 = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[1]), "p_i1");
  P_e = k_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "P_e");
  pared = c_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "pared");
  N = e_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "N");
  ct = m_emlrt_marshallIn(&st, emlrtAlias(prhs[5]), "ct");
  radio = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[6]), "radio");

  /* Invoke the target function */
  impactos(&st, *rayo, p_i1, *P_e, *pared, *N, *ct, radio, &p_i, *Nrefl_data,
           Nrefl_size, *P_e_new);

  /* Marshall function outputs */
  plhs[0] = emlrt_marshallOut(p_i);
  plhs[1] = b_emlrt_marshallOut(*Nrefl_data, Nrefl_size);
  plhs[2] = c_emlrt_marshallOut(*P_e_new);
}

void reflejado(const emlrtStack *sp, real_T rayo[3], const real_T Ni[3])
{
  real_T thnor[3];
  int32_T ix;
  real_T c;
  int32_T iy;
  int32_T k;
  real_T teta_r1;
  real_T phi_r1;
  real_T shnor[3];
  real_T a;
  real_T b_a;
  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &ib_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  for (ix = 0; ix < 3; ix++) {
    thnor[ix] = -rayo[ix];
  }

  b_st.site = &mb_emlrtRSI;
  c_st.site = &s_emlrtRSI;
  d_st.site = &t_emlrtRSI;
  e_st.site = &u_emlrtRSI;
  f_st.site = &v_emlrtRSI;
  g_st.site = &w_emlrtRSI;
  c = 0.0;
  ix = 1;
  iy = 1;
  for (k = 0; k < 3; k++) {
    c += thnor[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 3, &emlrtBCI, &g_st) - 1]
      * Ni[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 3, &emlrtBCI, &g_st) - 1];
    ix++;
    iy++;
  }

  for (ix = 0; ix < 3; ix++) {
    rayo[ix] += 2.0 * (c * Ni[ix]);
  }

  /* rayo reflejado */
  st.site = &jb_emlrtRSI;
  emlrtRandu(&c, 1);
  if (c < 0.5) {
    /* error para los rayos */
    /* [slope] */
    /* [speculacion] 0.003 */
    /* angulos de inclinaci[on y rotacion de los rayos debido al error sig */
    st.site = &kb_emlrtRSI;
    emlrtRandu(&c, 1);
    st.site = &kb_emlrtRSI;
    if (1.0 - c < 0.0) {
      b_st.site = &nb_emlrtRSI;
      b_eml_error(&b_st);
    }

    st.site = &kb_emlrtRSI;
    c = -1.8E-5 * muDoubleScalarLog(1.0 - c);
    if (c < 0.0) {
      b_st.site = &x_emlrtRSI;
      eml_error(&b_st);
    }

    teta_r1 = muDoubleScalarSqrt(c);
    st.site = &lb_emlrtRSI;
    emlrtRandu(&c, 1);
    phi_r1 = c * 2.0 * 3.1415926535897931;
    thnor[0] = 0.0 * rayo[2] - rayo[1];
    thnor[1] = rayo[0] - 0.0 * rayo[2];
    thnor[2] = 0.0 * rayo[1] - 0.0 * rayo[0];
    c = b_norm(thnor);
    for (ix = 0; ix < 3; ix++) {
      thnor[ix] /= c;
    }

    shnor[0] = rayo[1] * thnor[2] - rayo[2] * thnor[1];
    shnor[1] = rayo[2] * thnor[0] - rayo[0] * thnor[2];
    shnor[2] = rayo[0] * thnor[1] - rayo[1] * thnor[0];
    c = b_norm(shnor);
    for (ix = 0; ix < 3; ix++) {
      shnor[ix] /= c;
    }

    /* rayo generado con los angulos teta y phi */
    a = muDoubleScalarSin(teta_r1) * muDoubleScalarSin(phi_r1);
    b_a = muDoubleScalarSin(teta_r1) * muDoubleScalarCos(phi_r1);
    c = muDoubleScalarCos(teta_r1);
    for (ix = 0; ix < 3; ix++) {
      phi_r1 = (a * thnor[ix] + b_a * shnor[ix]) + c * rayo[ix];
      thnor[ix] = phi_r1;
    }

    c = b_norm(thnor);
    for (ix = 0; ix < 3; ix++) {
      rayo[ix] = thnor[ix] / c;
    }
  }
}

void reflejado_api(const mxArray *prhs[2], const mxArray *plhs[1])
{
  real_T (*rayo)[3];
  real_T (*Ni)[3];
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  prhs[0] = emlrtProtectR2012b(prhs[0], 0, true, -1);

  /* Marshall function inputs */
  rayo = k_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "rayo");
  Ni = k_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "Ni");

  /* Invoke the target function */
  reflejado(&st, *rayo, *Ni);

  /* Marshall function outputs */
  d_emlrt_marshallOut(*rayo, prhs[0]);
  plhs[0] = prhs[0];
}

void simulador_rayos(const emlrtStack *sp, const real_T pared[49], const real_T
                     N[21], const real_T Pp_1[187989], const real_T rayo1[187989],
                     const real_T ct[1200], real_T radio, real_T con_p[606],
                     real_T P_a[250652])
{
  int32_T b;
  real_T P_e[3];
  real_T rayo[3];
  int32_T k;
  real_T p_i;
  boolean_T absv;
  real_T thnor[3];
  int32_T Nrefl_size[2];
  real_T Nrefl_data[3];
  real_T phi_r1;
  boolean_T guard1 = false;
  boolean_T guard2 = false;
  boolean_T guard3 = false;
  real_T r;
  int32_T ix;
  int32_T iy;
  real_T teta_r1;
  real_T B;
  real_T shnor[3];
  real_T a;
  real_T b_a;
  const mxArray *y;
  static const int32_T iv0[2] = { 1, 67 };

  const mxArray *m0;
  char_T cv0[67];
  static const char_T cv1[67] = { 'L', 'o', 's', ' ', 'r', 'a', 'y', 'o', 's',
    ' ', 'q', 'u', 'e', ' ', 'e', 'n', 't', 'r', 'a', 'n', ' ', 'd', 'e', 'b',
    'e', 'n', ' ', 'd', 'e', ' ', 's', 'e', 'r', ' ', 'i', 'g', 'u', 'a', 'l',
    ' ', 'a', ' ', 'l', 'o', 's', ' ', 'r', 'a', 'y', 'o', 's', ' ', 'q', 'u',
    'e', ' ', 's', 'e', ' ', 'a', 'b', 's', 'o', 'r', 'b', 'e', 'n' };

  emlrtStack st;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;

  /* number of rays entering the receptor */
  /*  number of tubes + number of walls */
  memset(&con_p[0], 0, 606U * sizeof(real_T));

  /*  matrix used further to asign x,y,z values for the impact position,  */
  /*  and tell which tube or wall that corresponds to */
  memset(&P_a[0], 0, 250652U * sizeof(real_T));
  for (b = 0; b < 62663; b++) {
    /* revisamos todos los rayos */
    for (k = 0; k < 3; k++) {
      P_e[k] = Pp_1[b + 62663 * k];
      rayo[k] = rayo1[b + 62663 * k];
    }

    p_i = 6.0;
    absv = false;

    /* false(1)=0 */
    while (absv == 0) {
      /* revisamos en que pared intersecta el rayo */
      for (k = 0; k < 3; k++) {
        thnor[k] = P_e[k];
      }

      st.site = &b_emlrtRSI;
      impactos(&st, rayo, p_i, thnor, pared, N, ct, radio, &phi_r1, Nrefl_data,
               Nrefl_size, P_e);
      p_i = phi_r1;

      /* el termino de en medio es para paredes con reflectancia 0.7 */
      guard1 = false;
      guard2 = false;
      guard3 = false;
      if (phi_r1 == 6.0) {
        guard2 = true;
      } else if (phi_r1 < 6.0) {
        st.site = &c_emlrtRSI;
        emlrtRandu(&r, 1);
        if (r < 0.3) {
          guard2 = true;
        } else {
          guard3 = true;
        }
      } else {
        guard3 = true;
      }

      if (guard3) {
        if (phi_r1 > 6.0) {
          st.site = &c_emlrtRSI;
          emlrtRandu(&r, 1);
          if (r < 0.6) {
            guard2 = true;
          } else {
            guard1 = true;
          }
        } else {
          guard1 = true;
        }
      }

      if (guard2) {
        con_p[(int32_T)phi_r1 - 1]++;
        for (k = 0; k < 3; k++) {
          P_a[b + 62663 * k] = P_e[k];
        }

        P_a[187989 + b] = phi_r1;
        absv = true;
      }

      if (guard1) {
        /* si el rayo no fue absorbido, se refleja */
        st.site = &d_emlrtRSI;
        b_st.site = &ib_emlrtRSI;
        for (k = 0; k < 3; k++) {
          thnor[k] = -rayo[k];
        }

        c_st.site = &mb_emlrtRSI;
        d_st.site = &s_emlrtRSI;
        e_st.site = &t_emlrtRSI;
        f_st.site = &u_emlrtRSI;
        g_st.site = &v_emlrtRSI;
        h_st.site = &w_emlrtRSI;
        phi_r1 = 0.0;
        ix = 1;
        iy = 1;
        for (k = 0; k < 3; k++) {
          phi_r1 += thnor[emlrtDynamicBoundsCheckFastR2012b(ix, 1, 3, &emlrtBCI,
            &h_st) - 1] * Nrefl_data[emlrtDynamicBoundsCheckFastR2012b(iy, 1, 3,
            &b_emlrtBCI, &h_st) - 1];
          ix++;
          iy++;
        }

        for (k = 0; k < 3; k++) {
          rayo[k] += 2.0 * (phi_r1 * Nrefl_data[k]);
        }

        /* rayo reflejado */
        b_st.site = &jb_emlrtRSI;
        emlrtRandu(&r, 1);
        if (r < 0.5) {
          /* error para los rayos */
          /* [slope] */
          /* [speculacion] 0.003 */
          /* angulos de inclinaci[on y rotacion de los rayos debido al error sig */
          b_st.site = &kb_emlrtRSI;
          emlrtRandu(&r, 1);
          b_st.site = &kb_emlrtRSI;
          if (1.0 - r < 0.0) {
            c_st.site = &nb_emlrtRSI;
            b_eml_error(&c_st);
          }

          b_st.site = &kb_emlrtRSI;
          r = -1.8E-5 * muDoubleScalarLog(1.0 - r);
          if (r < 0.0) {
            c_st.site = &x_emlrtRSI;
            eml_error(&c_st);
          }

          teta_r1 = muDoubleScalarSqrt(r);
          b_st.site = &lb_emlrtRSI;
          emlrtRandu(&r, 1);
          phi_r1 = r * 2.0 * 3.1415926535897931;
          thnor[0] = 0.0 * rayo[2] - rayo[1];
          thnor[1] = rayo[0] - 0.0 * rayo[2];
          thnor[2] = 0.0 * rayo[1] - 0.0 * rayo[0];
          B = b_norm(thnor);
          for (k = 0; k < 3; k++) {
            thnor[k] /= B;
          }

          shnor[0] = rayo[1] * thnor[2] - rayo[2] * thnor[1];
          shnor[1] = rayo[2] * thnor[0] - rayo[0] * thnor[2];
          shnor[2] = rayo[0] * thnor[1] - rayo[1] * thnor[0];
          B = b_norm(shnor);

          /* rayo generado con los angulos teta y phi */
          a = muDoubleScalarSin(teta_r1) * muDoubleScalarSin(phi_r1);
          b_a = muDoubleScalarSin(teta_r1) * muDoubleScalarCos(phi_r1);
          r = muDoubleScalarCos(teta_r1);
          for (k = 0; k < 3; k++) {
            phi_r1 = shnor[k] / B;
            shnor[k] = phi_r1;
            thnor[k] = (a * thnor[k] + b_a * phi_r1) + r * rayo[k];
          }

          B = b_norm(thnor);
          for (k = 0; k < 3; k++) {
            rayo[k] = thnor[k] / B;
          }
        }
      }

      emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
    }

    emlrtBreakCheckFastR2012b(emlrtBreakCheckR2012bFlagVar, sp);
  }

  phi_r1 = con_p[0];
  for (k = 0; k < 605; k++) {
    phi_r1 += con_p[k + 1];
  }

  if (62663.0 != phi_r1) {
    st.site = &e_emlrtRSI;
    y = NULL;
    m0 = emlrtCreateCharArray(2, iv0);
    memcpy(&cv0[0], &cv1[0], 67U * sizeof(char_T));
    emlrtInitCharArrayR2013a(&st, 67, m0, cv0);
    emlrtAssign(&y, m0);
    b_st.site = &ub_emlrtRSI;
    b_error(&b_st, y, &emlrtMCI);
  }
}

void simulador_rayos_api(const mxArray * const prhs[6], const mxArray *plhs[2])
{
  real_T (*con_p)[606];
  real_T (*P_a)[250652];
  real_T (*pared)[49];
  real_T (*N)[21];
  real_T (*Pp_1)[187989];
  real_T (*rayo1)[187989];
  real_T (*ct)[1200];
  real_T radio;
  emlrtStack st = { NULL, NULL, NULL };

  st.tls = emlrtRootTLSGlobal;
  con_p = (real_T (*)[606])mxMalloc(sizeof(real_T [606]));
  P_a = (real_T (*)[250652])mxMalloc(sizeof(real_T [250652]));

  /* Marshall function inputs */
  pared = c_emlrt_marshallIn(&st, emlrtAlias(prhs[0]), "pared");
  N = e_emlrt_marshallIn(&st, emlrtAlias(prhs[1]), "N");
  Pp_1 = g_emlrt_marshallIn(&st, emlrtAlias(prhs[2]), "Pp_1");
  rayo1 = g_emlrt_marshallIn(&st, emlrtAlias(prhs[3]), "rayo1");
  ct = m_emlrt_marshallIn(&st, emlrtAlias(prhs[4]), "ct");
  radio = i_emlrt_marshallIn(&st, emlrtAliasP(prhs[5]), "radio");

  /* Invoke the target function */
  simulador_rayos(&st, *pared, *N, *Pp_1, *rayo1, *ct, radio, *con_p, *P_a);

  /* Marshall function outputs */
  plhs[0] = e_emlrt_marshallOut(*con_p);
  plhs[1] = f_emlrt_marshallOut(*P_a);
}

/* End of code generation (campo_optim_mex.c) */
