/*
 * File: Calculator.h
 *
 * Code generated for Simulink model 'Calculator'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan 30 10:50:05 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Calculator_h_
#define RTW_HEADER_Calculator_h_
#include <string.h>
#include <stddef.h>
#ifndef Calculator_COMMON_INCLUDES_
# define Calculator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Calculator_COMMON_INCLUDES_ */

#include "Calculator_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Subsystem.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (auto storage) */
typedef struct {
  real_T OutportBufferForresult;       /* '<S3>/Constant' */
  int64m_T Product;                    /* '<S4>/Product' */
} B_Calculator_T;

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Constant;               /* '<S3>/Constant' */
} ConstB_Calculator_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int32_T operand;                     /* '<Root>/operand' */
  int32_T number1;                     /* '<Root>/number 1 ' */
  int32_T number2;                     /* '<Root>/number 2' */
} ExtU_Calculator_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
  int32_T Out2;                        /* '<Root>/Out2' */
  int32_T Out3;                        /* '<Root>/Out3' */
  int32_T Out4;                        /* '<Root>/Out4' */
  int32_T Out5;                        /* '<Root>/Out5' */
} ExtY_Calculator_T;

/* Real-time Model Data Structure */
struct tag_RTM_Calculator_T {
  const char_T * volatile errorStatus;
};

/* Block signals (auto storage) */
extern B_Calculator_T Calculator_B;

/* External inputs (root inport signals with auto storage) */
extern ExtU_Calculator_T Calculator_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Calculator_T Calculator_Y;
extern const ConstB_Calculator_T Calculator_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Calculator_initialize(void);
extern void Calculator_step(void);
extern void Calculator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Calculator_T *const Calculator_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Data Type Conversion' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion1' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion2' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion3' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion4' : Eliminate redundant data type conversion
 * Block '<S1>/Data Type Conversion6' : Eliminate redundant data type conversion
 */

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
 * '<Root>' : 'Calculator'
 * '<S1>'   : 'Calculator/Subsystem'
 * '<S2>'   : 'Calculator/Subsystem/div'
 * '<S3>'   : 'Calculator/Subsystem/div1'
 * '<S4>'   : 'Calculator/Subsystem/mul'
 * '<S5>'   : 'Calculator/Subsystem/sub'
 * '<S6>'   : 'Calculator/Subsystem/sum'
 */
#endif                                 /* RTW_HEADER_Calculator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
