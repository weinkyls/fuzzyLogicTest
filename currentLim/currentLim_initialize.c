/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * currentLim_initialize.c
 *
 * Code generation for function 'currentLim_initialize'
 *
 */

/* Include files */
#include "currentLim_initialize.h"
#include "currentLim_data.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void currentLim_initialize(void)
{
  rt_InitInfAndNaN();
  isInitialized_currentLim = true;
}

/* End of code generation (currentLim_initialize.c) */
