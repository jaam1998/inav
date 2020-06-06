/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EulerController.c
 *
 * Code generated for Simulink model 'EulerController'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.0 (R2018b) 24-May-2018
 * C/C++ source code generated on : Sat Jun  6 10:41:21 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "EulerController.h"
#include "EulerController_private.h"

/* Block states (default storage) */
DW_EulerController_T EulerController_DW;

/* External inputs (root inport signals with default storage) */
ExtU_EulerController_T EulerController_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_EulerController_T EulerController_Y;

/* Real-time model */
RT_MODEL_EulerController_T EulerController_M_;
RT_MODEL_EulerController_T *const EulerController_M = &EulerController_M_;

/* Model step function */
void EulerController_step(void)
{
  /* DiscreteZeroPole: '<Root>/Forward differencing Transformation' incorporates:
   *  Inport: '<Root>/Error'
   *  Outport: '<Root>/Manipulated'
   */
  {
    EulerController_Y.Manipulated = 3.0*EulerController_U.Error;
    EulerController_Y.Manipulated += (-0.20999999999999985)*
      EulerController_DW.ForwarddifferencingTransformati;
  }

  /* Update for DiscreteZeroPole: '<Root>/Forward differencing Transformation' incorporates:
   *  Inport: '<Root>/Error'
   *  Outport: '<Root>/Manipulated'
   */
  {
    EulerController_DW.ForwarddifferencingTransformati = EulerController_U.Error
      + 0.9*EulerController_DW.ForwarddifferencingTransformati;
  }
}

/* Model initialize function */
void EulerController_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(EulerController_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&EulerController_DW, 0,
                sizeof(DW_EulerController_T));

  /* external inputs */
  EulerController_U.Error = 0.0;

  /* external outputs */
  EulerController_Y.Manipulated = 0.0;
}

/* Model terminate function */
void EulerController_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
