/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: genpath_firmware_private.h
 *
 * Code generated for Simulink model 'genpath_firmware'.
 *
 * Model version                  : 1.38
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Fri Feb 25 00:38:17 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_genpath_firmware_private_h_
#define RTW_HEADER_genpath_firmware_private_h_
#include "rtwtypes.h"
#include "genpath_firmware.h"
#ifndef UCHAR_MAX
#include <limits.h>
#endif

#if ( UCHAR_MAX != (0xFFFFU) ) || ( SCHAR_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uchar/char. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( USHRT_MAX != (0xFFFFU) ) || ( SHRT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized ushort/short. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( UINT_MAX != (0xFFFFU) ) || ( INT_MAX != (0x7FFF) )
#error Code was generated for compiler with different sized uint/int. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

#if ( ULONG_MAX != (0xFFFFFFFFUL) ) || ( LONG_MAX != (0x7FFFFFFFL) )
#error Code was generated for compiler with different sized ulong/long. \
Consider adjusting Test hardware word size settings on the \
Hardware Implementation pane to match your compiler word sizes as \
defined in limits.h of the compiler. Alternatively, you can \
select the Test hardware is the same as production hardware option and \
select the Enable portable word sizes option on the Code Generation > \
Verification pane for ERT based targets, which will disable the \
preprocessor word size checks.
#endif

/* Skipping ulong_long/long_long check: insufficient preprocessor integer range. */
void InitAdcA (void);
void config_ADCA_SOC6 (void);
void config_ADCA_SOC5 (void);
void InitAdcC (void);
void config_ADCC_SOC4 (void);
void config_ADCC_SOC3 (void);
void config_ADCC_SOC2 (void);
void config_ADCC_SOC1 (void);
void InitAdcB (void);
void config_ADCB_SOC0 (void);
extern uint16_T MW_adcAInitFlag;
extern uint16_T MW_adcCInitFlag;
extern uint16_T MW_adcBInitFlag;
void isr_int1pie1_task_fcn(void);
void isr_int9pie1_task_fcn(void);
extern void configureGPIOExtInterrupt(void);
extern void genpath_firmw_UpperAlwaysOn(boolean_T *rty_Out1,
  P_UpperAlwaysOn_genpath_firmw_T *localP);
void isr_int1pie1_task_fcn(void);

#endif                              /* RTW_HEADER_genpath_firmware_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
