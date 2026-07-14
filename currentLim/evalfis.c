/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * evalfis.c
 *
 * Code generation for function 'evalfis'
 *
 */

/* Include files */
#include "evalfis.h"
#include "rt_nonfinite.h"
#include "trapmf.h"

/* Function Definitions */
float evalfis(const float arg2[3])
{
  static const float outputMFCache[5] = {0.0F, 0.35F, 0.5F, 0.75F, 1.0F};
  static const float fv1[4] = {0.0F, 0.0F, 56.0F, 60.0F};
  static const float fv2[4] = {56.0F, 60.0F, 100.0F, 100.0F};
  static const float fv3[4] = {-500.0F, -500.0F, 0.0F, 3000.0F};
  static const float fv4[4] = {2887.68115F, 5967.18F, 6467.18F, 6467.18F};
  static const float fv5[4] = {-1.01000905F, -1.01000905F, -9.09918072E-6F,
                               0.00999090075F};
  static const float fv6[4] = {-0.00982711557F, 0.0401728861F, 0.990172863F,
                               0.990172863F};
  static const signed char iv[24] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 1, 2, 2,
                                     1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2};
  static const signed char iv1[8] = {3, 2, 1, 1, 5, 2, 2, 1};
  float consequentOutputs_tmp[8];
  float fv[6];
  float varargout_1;
  float y;
  int ruleID;
  fv[0] = trapmf(arg2[0], fv1);
  fv[1] = trapmf(arg2[0], fv2);
  fv[2] = trapmf(arg2[1], fv3);
  fv[3] = trapmf(arg2[1], fv4);
  fv[4] = trapmf(arg2[2], fv5);
  fv[5] = trapmf(arg2[2], fv6);
  varargout_1 = 0.0F;
  for (ruleID = 0; ruleID < 8; ruleID++) {
    y = fv[iv[ruleID] - 1] * fv[iv[ruleID + 8] + 1] * fv[iv[ruleID + 16] + 3];
    varargout_1 += y;
    consequentOutputs_tmp[ruleID] = outputMFCache[iv1[ruleID] - 1] * y;
  }
  y = consequentOutputs_tmp[0];
  for (ruleID = 0; ruleID < 7; ruleID++) {
    y += consequentOutputs_tmp[ruleID + 1];
  }
  if (varargout_1 == 0.0F) {
    varargout_1 = 0.5F;
  } else {
    varargout_1 = y * (1.0F / varargout_1);
  }
  return varargout_1;
}

/* End of code generation (evalfis.c) */
