/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * _coder_currentLim_api.h
 *
 * Code generation for function 'currentLim'
 *
 */

#ifndef _CODER_CURRENTLIM_API_H
#define _CODER_CURRENTLIM_API_H

/* Include files */
#include "emlrt.h"
#include "mex.h"
#include "tmwtypes.h"
#include <string.h>

/* Variable Declarations */
extern emlrtCTX emlrtRootTLSGlobal;
extern emlrtContext emlrtContextGlobal;

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
real32_T currentLim(uint16_T temp_cell, uint16_T rpm_mot,
                    real32_T energy_margin);

void currentLim_api(const mxArray *const prhs[3], const mxArray **plhs);

void currentLim_atexit(void);

void currentLim_initialize(void);

void currentLim_terminate(void);

void currentLim_xil_shutdown(void);

void currentLim_xil_terminate(void);

#ifdef __cplusplus
}
#endif

#endif
/* End of code generation (_coder_currentLim_api.h) */
