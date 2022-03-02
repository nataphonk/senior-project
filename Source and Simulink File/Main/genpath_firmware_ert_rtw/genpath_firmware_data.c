/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: genpath_firmware_data.c
 *
 * Code generated for Simulink model 'genpath_firmware'.
 *
 * Model version                  : 1.40
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Mar  2 20:58:00 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "genpath_firmware.h"
#include "genpath_firmware_private.h"

/* Invariant block signals (default storage) */
const ConstB_genpath_firmware_T genpath_firmware_ConstB = {
  7U                                   /* '<S22>/Width' */
};

/* Block parameters (default storage) */
P_genpath_firmware_T genpath_firmware_P = {
  /* Mask Parameter: CounterLimited_uplimit
   * Referenced by: '<S43>/FixPt Switch'
   */
  500U,

  /* Mask Parameter: CounterLimited_uplimit_k
   * Referenced by: '<S32>/FixPt Switch'
   */
  999U,

  /* Expression: 1
   * Referenced by: '<Root>/Constant'
   */
  1.0,

  /* Computed Parameter: Gain_Gain
   * Referenced by: '<S47>/Gain'
   */
  0.5F,

  /* Computed Parameter: Gain_Gain_f
   * Referenced by: '<S46>/Gain'
   */
  0.5F,

  /* Computed Parameter: Bias_Bias
   * Referenced by: '<S3>/Bias'
   */
  -1.65F,

  /* Computed Parameter: Gain3_Gain
   * Referenced by: '<S3>/Gain3'
   */
  -10.0F,

  /* Computed Parameter: Filter_Constant_Value
   * Referenced by: '<S18>/Filter_Constant'
   */
  0.02F,

  /* Computed Parameter: One_Value
   * Referenced by: '<S18>/One'
   */
  0.98F,

  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S18>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Gain1_Gain
   * Referenced by: '<S7>/Gain1'
   */
  -0.28F,

  /* Computed Parameter: Filter_Constant_Value_m
   * Referenced by: '<S15>/Filter_Constant'
   */
  0.02F,

  /* Computed Parameter: One_Value_o
   * Referenced by: '<S15>/One'
   */
  0.98F,

  /* Computed Parameter: UnitDelay_InitialCondition_b
   * Referenced by: '<S15>/Unit Delay'
   */
  0.0F,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S36>/Constant1'
   */
  0.0F,

  /* Computed Parameter: PreventDivisionByZero_UpperSat
   * Referenced by: '<S33>/Prevent Division By Zero'
   */
  81.5F,

  /* Computed Parameter: PreventDivisionByZero_LowerSat
   * Referenced by: '<S33>/Prevent Division By Zero'
   */
  0.1F,

  /* Computed Parameter: Bias_Bias_a
   * Referenced by: '<S33>/Bias'
   */
  0.5F,

  /* Computed Parameter: PreventOvermodulation_UpperSat
   * Referenced by: '<S33>/Prevent Overmodulation'
   */
  1.0F,

  /* Computed Parameter: PreventOvermodulation_LowerSat
   * Referenced by: '<S33>/Prevent Overmodulation'
   */
  0.0F,

  /* Computed Parameter: TimeBasePeriod_Gain
   * Referenced by: '<S33>/Time Base Period'
   */
  5000.0F,

  /* Computed Parameter: CommandedSignal_Y0
   * Referenced by: '<S2>/Commanded Signal'
   */
  0.0F,

  /* Computed Parameter: RateTransitionSCIADC_InitialCon
   * Referenced by: '<Root>/Rate Transition SCI-ADC'
   */
  0.0F,

  /* Computed Parameter: DCBusVoltageADCGain_Gain
   * Referenced by: '<S3>/DC Bus Voltage ADC Gain'
   */
  41733U,

  /* Computed Parameter: PhaseCurrentADCGain_Gain
   * Referenced by: '<S3>/Phase Current ADC Gain'
   */
  54067U,

  /* Computed Parameter: Constant_Value_m
   * Referenced by: '<S32>/Constant'
   */
  0U,

  /* Computed Parameter: End_Value
   * Referenced by: '<S27>/End'
   */
  65535U,

  /* Computed Parameter: Start_Value
   * Referenced by: '<S27>/Start'
   */
  61166U,

  /* Computed Parameter: Bias_Bias_c
   * Referenced by: '<S27>/Bias'
   */
  2U,

  /* Computed Parameter: Start_Value_i
   * Referenced by: '<S26>/Start'
   */
  0U,

  /* Computed Parameter: Start1_Value
   * Referenced by: '<S26>/Start1'
   */
  0U,

  /* Computed Parameter: Constant_Value_h
   * Referenced by: '<S43>/Constant'
   */
  0U,

  /* Computed Parameter: Constant_Value_n
   * Referenced by: '<S38>/Constant'
   */
  250U,

  /* Computed Parameter: Output_InitialCondition
   * Referenced by: '<S41>/Output'
   */
  0U,

  /* Computed Parameter: FixPtConstant_Value
   * Referenced by: '<S42>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: Output_InitialCondition_a
   * Referenced by: '<S25>/Output'
   */
  0U,

  /* Computed Parameter: Bias_Bias_p
   * Referenced by: '<S9>/Bias'
   */
  5U,

  /* Computed Parameter: Bias1_Bias
   * Referenced by: '<S9>/Bias1'
   */
  5U,

  /* Computed Parameter: Bias2_Bias
   * Referenced by: '<S9>/Bias2'
   */
  5U,

  /* Computed Parameter: FixPtConstant_Value_j
   * Referenced by: '<S31>/FixPt Constant'
   */
  1U,

  /* Computed Parameter: PreventPWMCounterOverrun_UpperS
   * Referenced by: '<S33>/Prevent PWM Counter Overrun'
   */
  4995U,

  /* Computed Parameter: PreventPWMCounterOverrun_LowerS
   * Referenced by: '<S33>/Prevent PWM Counter Overrun'
   */
  0U,

  /* Computed Parameter: Merge_InitialOutput
   * Referenced by: '<S36>/Merge'
   */
  false,

  /* Start of '<S36>/Lower Always On' */
  {
    /* Expression: false
     * Referenced by: '<S39>/Constant'
     */
    false
  }
  ,

  /* End of '<S36>/Lower Always On' */

  /* Start of '<S36>/Upper Always On' */
  {
    /* Expression: true
     * Referenced by: '<S40>/Constant'
     */
    true
  }
  ,

  /* End of '<S36>/Upper Always On' */

  /* Start of '<S24>/CoreSubsys' */
  {
    /* Start of '<S24>/If Action Subsystem1' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S29>/Constant'
       */
      515U
    }
    ,

    /* End of '<S24>/If Action Subsystem1' */

    /* Start of '<S24>/If Action Subsystem' */
    {
      /* Computed Parameter: Constant_Value
       * Referenced by: '<S28>/Constant'
       */
      258U
    }
    /* End of '<S24>/If Action Subsystem' */
  }
  /* End of '<S24>/CoreSubsys' */
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
