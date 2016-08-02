/*
 * campo_optim_mex.h
 *
 * Code generation for function 'campo_optim_mex'
 *
 */

#ifndef __CAMPO_OPTIM_MEX_H__
#define __CAMPO_OPTIM_MEX_H__

/* Include files */
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include "mwmathutil.h"
#include "tmwtypes.h"
#include "mex.h"
#include "emlrt.h"
#include "blas.h"
#include "rtwtypes.h"
#include "campo_optim_mex_types.h"

/* Variable Declarations */
extern emlrtRSInfo eb_emlrtRSI;
extern emlrtRSInfo fb_emlrtRSI;
extern emlrtRSInfo gb_emlrtRSI;
extern emlrtRSInfo hb_emlrtRSI;
extern campo_optim_mexStackData *campo_optim_mexStackDataLocal;

/* Function Declarations */
extern real_T campo_optim(campo_optim_mexStackData *SD, const emlrtStack *sp,
  const real_T entradas[1200], const real_T pared[49], const real_T N[21], const
  real_T Pp_1[187989], const real_T rayo1[187989], real_T radio);

#ifdef __WATCOMC__

#pragma aux campo_optim value [8087];

#endif

extern void campo_optim_api(campo_optim_mexStackData *SD, const mxArray * const
  prhs[6], const mxArray *plhs[1]);
extern void campo_optim_mex_atexit(void);
extern void campo_optim_mex_initialize(emlrtContext *aContext);
extern void campo_optim_mex_terminate(void);
extern void impactos(const emlrtStack *sp, const real_T rayo[3], real_T p_i1,
                     const real_T P_e[3], const real_T pared[49], const real_T
                     N[21], const real_T ct[1200], real_T radio, real_T *p_i,
                     real_T Nrefl_data[], int32_T Nrefl_size[2], real_T P_e_new
                     [3]);
extern void impactos_api(const mxArray * const prhs[7], const mxArray *plhs[3]);
extern void reflejado(const emlrtStack *sp, real_T rayo[3], const real_T Ni[3]);
extern void reflejado_api(const mxArray *prhs[2], const mxArray *plhs[1]);
extern void simulador_rayos(const emlrtStack *sp, const real_T pared[49], const
  real_T N[21], const real_T Pp_1[187989], const real_T rayo1[187989], const
  real_T ct[1200], real_T radio, real_T con_p[606], real_T P_a[250652]);
extern void simulador_rayos_api(const mxArray * const prhs[6], const mxArray
  *plhs[2]);

#endif

/* End of code generation (campo_optim_mex.h) */
