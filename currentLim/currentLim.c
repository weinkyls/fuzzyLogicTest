/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * currentLim.c
 *
 * Code generation for function 'currentLim'
 *
 */

/* Include files */
#include "currentLim.h"
#include "currentLim_data.h"
#include "currentLim_initialize.h"
#include "evalfis.h"
#include "rt_nonfinite.h"

/* Function Definitions */
float currentLim(unsigned short temp_cell, unsigned short rpm_mot,
                 float energy_margin)
{
  float b_temp_cell[3];
  if (!isInitialized_currentLim) {
    currentLim_initialize();
  }
  /*  Load the converted structure */
  /*  Evaluate Fuzzy Controller using the structure */
  b_temp_cell[0] = temp_cell;
  b_temp_cell[1] = rpm_mot;
  b_temp_cell[2] = energy_margin;
  return evalfis(b_temp_cell);
}

/* End of code generation (currentLim.c) */
