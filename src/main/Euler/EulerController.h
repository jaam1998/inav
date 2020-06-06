/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: EulerController.h
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

#ifndef RTW_HEADER_EulerController_h_
#define RTW_HEADER_EulerController_h_
#include <stddef.h>
#include <string.h>
#ifndef EulerController_COMMON_INCLUDES_
# define EulerController_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* EulerController_COMMON_INCLUDES_ */

#include "EulerController_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T ForwarddifferencingTransformati;/* '<Root>/Forward differencing Transformation' */
} DW_EulerController_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T Error;                        /* '<Root>/Error' */
} ExtU_EulerController_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Manipulated;                  /* '<Root>/Manipulated' */
} ExtY_EulerController_T;

/* Real-time Model Data Structure */
struct tag_RTM_EulerController_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_EulerController_T EulerController_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_EulerController_T EulerController_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_EulerController_T EulerController_Y;

/* Model entry point functions */
extern void EulerController_initialize(void);
extern void EulerController_step(void);
extern void EulerController_terminate(void);

/* Real-time Model object */
extern RT_MODEL_EulerController_T *const EulerController_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'EulerController'
 */
#endif                                 /* RTW_HEADER_EulerController_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
