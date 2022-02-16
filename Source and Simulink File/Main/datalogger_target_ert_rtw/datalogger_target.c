/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: datalogger_target.c
 *
 * Code generated for Simulink model 'datalogger_target'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 9.5 (R2021a) 14-Nov-2020
 * C/C++ source code generated on : Wed Feb 16 12:58:16 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Texas Instruments->C2000
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "datalogger_target.h"
#include "datalogger_target_private.h"

/* Block signals (default storage) */
B_datalogger_target_T datalogger_target_B;

/* Block states (default storage) */
DW_datalogger_target_T datalogger_target_DW;

/* Real-time model */
static RT_MODEL_datalogger_target_T datalogger_target_M_;
RT_MODEL_datalogger_target_T *const datalogger_target_M = &datalogger_target_M_;
static void rate_monotonic_scheduler(void);
uint16_T MW_adcBInitFlag = 0;
uint16_T MW_adcCInitFlag = 0;
uint16_T MW_adcAInitFlag = 0;

/* Hardware Interrupt Block: '<Root>/ReplicaOfSource' */
void isr_int1pie1_task_fcn(void)
{
  if (1 == runModel) {
    /* Call the system: <Root>/ADC Interrupt Callback */
    {
      int16_T tmp;

      /* RateTransition: '<Root>/Rate Transition' */
      tmp = datalogger_target_DW.RateTransition_ActiveBufIdx * 3;
      datalogger_target_B.RateTransition[0] =
        datalogger_target_DW.RateTransition_Buffer[tmp];
      datalogger_target_B.RateTransition[1] =
        datalogger_target_DW.RateTransition_Buffer[tmp + 1];
      datalogger_target_B.RateTransition[2] =
        datalogger_target_DW.RateTransition_Buffer[tmp + 2];

      /* S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' */

      /* Output and update for function-call system: '<Root>/ADC Interrupt Callback' */
      {
        real32_T rtb_AvoidDivisionByZero;
        real32_T rtb_Gain1_idx_0;
        real32_T rtb_Gain3_idx_0;
        real32_T rtb_Gain3_idx_1;
        real32_T rtb_add_c;
        real32_T rtb_one_by_two;
        int16_T ForEach_itr;
        uint16_T rtb_Merge[9];
        uint16_T rtb_ImpAsg_InsertedFor_Data_at_[7];
        uint16_T rtb_TmpSignalConversionAtForEac[7];
        uint16_T rtb_DataTypeConversion[3];
        uint16_T rtb_Add;
        uint16_T rtb_DTC_output_1;
        uint16_T rtb_DTC_output_1_a;
        uint16_T rtb_Merge_p;

        /* S-Function (c2802xadc): '<S15>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_o = (AdcbResultRegs.ADCRESULT0);
        }

        /* S-Function (c2802xadc): '<S16>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_b = (AdccResultRegs.ADCRESULT1);
        }

        /* S-Function (c2802xadc): '<S17>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_e = (AdccResultRegs.ADCRESULT2);
        }

        /* S-Function (c2802xadc): '<S12>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_d = (AdccResultRegs.ADCRESULT3);
        }

        /* DataTypeConversion: '<S12>/DTC_output_1' incorporates:
         *  Bias: '<S12>/Bias'
         */
        rtb_DTC_output_1 = (uint16_T)c28x_add_s16_s16_s16_sat
          (datalogger_target_B.ReplicaOfSource_d,
           datalogger_target_P.Bias_Bias_p);

        /* S-Function (c2802xadc): '<S13>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_i = (AdccResultRegs.ADCRESULT4);
        }

        /* DataTypeConversion: '<S13>/DTC_output_1' incorporates:
         *  Bias: '<S13>/Bias'
         */
        rtb_DTC_output_1_a = (uint16_T)c28x_add_s16_s16_s16_sat
          (datalogger_target_B.ReplicaOfSource_i,
           datalogger_target_P.Bias_Bias_g);

        /* S-Function (c2802xadc): '<S14>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_dp = (AdcaResultRegs.ADCRESULT5);
        }

        /* S-Function (c2802xadc): '<S9>/ReplicaOfSource' */
        {
          /*  Internal Reference Voltage : Fixed scale 0 to 3.3 V range.  */
          /*  External Reference Voltage : Allowable ranges of VREFHI(ADCINA0) = 3.3 and VREFLO(tied to ground) = 0  */
          datalogger_target_B.ReplicaOfSource_p = (AdcaResultRegs.ADCRESULT6);
        }

        /* SignalConversion generated from: '<S18>/For Each Subsystem' incorporates:
         *  Bias: '<S14>/Bias'
         *  DataTypeConversion: '<S14>/DTC_output_1'
         */
        rtb_TmpSignalConversionAtForEac[0] =
          datalogger_target_B.ReplicaOfSource_o;
        rtb_TmpSignalConversionAtForEac[1] =
          datalogger_target_B.ReplicaOfSource_b;
        rtb_TmpSignalConversionAtForEac[2] =
          datalogger_target_B.ReplicaOfSource_e;
        rtb_TmpSignalConversionAtForEac[3] = rtb_DTC_output_1;
        rtb_TmpSignalConversionAtForEac[4] = rtb_DTC_output_1_a;
        rtb_TmpSignalConversionAtForEac[5] = (uint16_T)c28x_add_s16_s16_s16_sat
          (datalogger_target_B.ReplicaOfSource_dp,
           datalogger_target_P.Bias_Bias_c);
        rtb_TmpSignalConversionAtForEac[6] =
          datalogger_target_B.ReplicaOfSource_p;

        /* Outputs for Iterator SubSystem: '<S18>/For Each Subsystem' incorporates:
         *  ForEach: '<S22>/For Each'
         */
        for (ForEach_itr = 0; ForEach_itr < 7; ForEach_itr++) {
          /* ForEachSliceSelector generated from: '<S22>/Data Packet' */
          rtb_Merge_p = rtb_TmpSignalConversionAtForEac[ForEach_itr];

          /* If: '<S22>/If1' */
          if (rtb_Merge_p == 257U) {
            /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem' incorporates:
             *  ActionPort: '<S26>/Action Port'
             */
            datalogge_IfActionSubsystem(&rtb_Merge_p,
              &datalogger_target_P.CoreSubsys.IfActionSubsystem);

            /* End of Outputs for SubSystem: '<S22>/If Action Subsystem' */
          } else if (rtb_Merge_p == 514U) {
            /* Outputs for IfAction SubSystem: '<S22>/If Action Subsystem1' incorporates:
             *  ActionPort: '<S27>/Action Port'
             */
            datalogge_IfActionSubsystem(&rtb_Merge_p,
              &datalogger_target_P.CoreSubsys.IfActionSubsystem1);

            /* End of Outputs for SubSystem: '<S22>/If Action Subsystem1' */
          }

          /* End of If: '<S22>/If1' */

          /* ForEachSliceAssignment generated from: '<S22>/Data' */
          rtb_ImpAsg_InsertedFor_Data_at_[ForEach_itr] = rtb_Merge_p;
        }

        /* End of Outputs for SubSystem: '<S18>/For Each Subsystem' */

        /* If: '<S18>/If' incorporates:
         *  Inport: '<S21>/Data_width'
         *  UnitDelay: '<S20>/Output'
         */
        if (datalogger_target_DW.Output_DSTATE == 0U) {
          /* Outputs for IfAction SubSystem: '<S18>/Start' incorporates:
           *  ActionPort: '<S23>/Action Port'
           */
          /* SignalConversion generated from: '<S23>/Data_out' incorporates:
           *  Constant: '<S23>/End'
           *  Constant: '<S23>/Start'
           *  Inport: '<S23>/Data'
           */
          rtb_Merge[0] = datalogger_target_P.End_Value;
          rtb_Merge[1] = datalogger_target_P.Start_Value;
          for (ForEach_itr = 0; ForEach_itr < 7; ForEach_itr++) {
            rtb_Merge[ForEach_itr + 2] =
              rtb_ImpAsg_InsertedFor_Data_at_[ForEach_itr];
          }

          /* End of SignalConversion generated from: '<S23>/Data_out' */

          /* Bias: '<S23>/Bias' */
          rtb_Merge_p = datalogger_target_ConstB.Width +
            datalogger_target_P.Bias_Bias_cx;

          /* End of Outputs for SubSystem: '<S18>/Start' */
        } else {
          /* Outputs for IfAction SubSystem: '<S18>/Data' incorporates:
           *  ActionPort: '<S21>/Action Port'
           */
          /* SignalConversion generated from: '<S21>/Data_out' incorporates:
           *  Constant: '<S21>/Start'
           *  Constant: '<S21>/Start1'
           *  Inport: '<S21>/Data'
           */
          for (ForEach_itr = 0; ForEach_itr < 7; ForEach_itr++) {
            rtb_Merge[ForEach_itr] = rtb_ImpAsg_InsertedFor_Data_at_[ForEach_itr];
          }

          rtb_Merge[7] = datalogger_target_P.Start_Value_i;
          rtb_Merge[8] = datalogger_target_P.Start1_Value;

          /* End of SignalConversion generated from: '<S21>/Data_out' */
          rtb_Merge_p = datalogger_target_ConstB.Width;

          /* End of Outputs for SubSystem: '<S18>/Data' */
        }

        /* End of If: '<S18>/If' */

        /* Outputs for Iterator SubSystem: '<S4>/Serial Transmit' incorporates:
         *  WhileIterator: '<S19>/While Data Available'
         */
        /* MultiPortSwitch: '<S19>/Index Vector' */
        ForEach_itr = 0;
        do {
          datalogger_target_B.IndexVector = rtb_Merge[ForEach_itr];

          {
            scia_xmit((char*)&datalogger_target_B.IndexVector, 2, 2);
          }

          rtb_Add = (rtb_Merge_p - ForEach_itr) - 1U;
          ForEach_itr++;
        } while (rtb_Add != 0U);

        /* End of Outputs for SubSystem: '<S4>/Serial Transmit' */

        /* Sum: '<S24>/FixPt Sum1' incorporates:
         *  Constant: '<S24>/FixPt Constant'
         *  UnitDelay: '<S20>/Output'
         */
        datalogger_target_DW.Output_DSTATE +=
          datalogger_target_P.FixPtConstant_Value;

        /* Logic: '<S1>/NOT' */
        datalogger_target_B.NOT = !(datalogger_target_B.RateTransition[2] !=
          0.0F);

        /* S-Function (c280xgpio_do): '<S6>/ReplicaOfSource' */
        {
          if (datalogger_target_B.NOT)
            GpioDataRegs.GPBSET.bit.GPIO33 = 1;
          else
            GpioDataRegs.GPBCLEAR.bit.GPIO33 = 1;
        }

        /* SignalConversion generated from: '<S3>/Phase Current ADC Gain' */
        rtb_DataTypeConversion[0] = rtb_DTC_output_1;
        rtb_DataTypeConversion[1] = rtb_DTC_output_1_a;

        /* Gain: '<S3>/Phase Current ADC Gain' */
        rtb_AvoidDivisionByZero = (real32_T)
          datalogger_target_P.PhaseCurrentADCGain_Gain * 6.10351562E-5F;

        /* Gain: '<S3>/Gain3' incorporates:
         *  Bias: '<S3>/Bias'
         *  Gain: '<S3>/Phase Current ADC Gain'
         */
        rtb_Gain3_idx_0 = (rtb_AvoidDivisionByZero * (real32_T)
                           rtb_DataTypeConversion[0] +
                           datalogger_target_P.Bias_Bias) *
          datalogger_target_P.Gain3_Gain;
        rtb_Gain3_idx_1 = (rtb_AvoidDivisionByZero * (real32_T)
                           rtb_DataTypeConversion[1] +
                           datalogger_target_P.Bias_Bias) *
          datalogger_target_P.Gain3_Gain;

        /* Outputs for Atomic SubSystem: '<S7>/Clarke Transform' */
        /* Gain: '<S7>/Gain1' incorporates:
         *  AlgorithmDescriptorDelegate generated from: '<S35>/a16'
         */
        rtb_Gain1_idx_0 = datalogger_target_P.Gain1_Gain * rtb_Gain3_idx_0;

        /* End of Outputs for SubSystem: '<S7>/Clarke Transform' */

        /* Gain: '<S36>/one_by_two' */
        rtb_one_by_two = datalogger_target_P.one_by_two_Gain * rtb_Gain1_idx_0;

        /* Outputs for Atomic SubSystem: '<S7>/Clarke Transform' */
        /* Gain: '<S36>/sqrt3_by_two' incorporates:
         *  Gain: '<S35>/one_by_sqrt3'
         *  Gain: '<S7>/Gain1'
         *  Sum: '<S35>/a_plus_2b'
         */
        rtb_AvoidDivisionByZero = ((rtb_Gain3_idx_0 + rtb_Gain3_idx_1) +
          rtb_Gain3_idx_1) * datalogger_target_P.one_by_sqrt3_Gain *
          datalogger_target_P.Gain1_Gain * datalogger_target_P.sqrt3_by_two_Gain;

        /* End of Outputs for SubSystem: '<S7>/Clarke Transform' */

        /* Sum: '<S36>/add_b' */
        rtb_Gain3_idx_1 = rtb_AvoidDivisionByZero - rtb_one_by_two;

        /* Sum: '<S36>/add_c' */
        rtb_add_c = (0.0F - rtb_one_by_two) - rtb_AvoidDivisionByZero;

        /* Gain: '<S3>/DC Bus Voltage ADC Gain' */
        rtb_one_by_two = (real32_T)datalogger_target_P.DCBusVoltageADCGain_Gain *
          0.001953125F * (real32_T)datalogger_target_B.ReplicaOfSource_p;

        /* If: '<S30>/If Enable Two Arm Modulation' incorporates:
         *  DataTypeConversion: '<S1>/Data Type Conversion'
         */
        if (datalogger_target_B.RateTransition[0] != 0.0F) {
          /* Outputs for IfAction SubSystem: '<S30>/Compute Two Arm Modulation Offset' incorporates:
           *  ActionPort: '<S31>/Action Port'
           */
          /* If: '<S31>/If' incorporates:
           *  DataTypeConversion: '<S1>/Data Type Conversion1'
           */
          if (datalogger_target_B.RateTransition[1] != 0.0F) {
            /* Outputs for IfAction SubSystem: '<S31>/If Upper Switch Always Conduct' incorporates:
             *  ActionPort: '<S34>/Action Port'
             */
            /* Sum: '<S34>/Add' incorporates:
             *  Gain: '<S34>/Gain'
             *  MinMax: '<S34>/Max'
             */
            rtb_AvoidDivisionByZero = datalogger_target_P.Gain_Gain *
              rtb_one_by_two - fmaxf(fmaxf(rtb_Gain1_idx_0, rtb_Gain3_idx_1),
              rtb_add_c);

            /* End of Outputs for SubSystem: '<S31>/If Upper Switch Always Conduct' */
          } else {
            /* Outputs for IfAction SubSystem: '<S31>/If Lower Switch Always Conduct' incorporates:
             *  ActionPort: '<S33>/Action Port'
             */
            /* Sum: '<S33>/Add' incorporates:
             *  Gain: '<S33>/Gain'
             *  MinMax: '<S33>/Max'
             */
            rtb_AvoidDivisionByZero = (0.0F - fminf(fminf(rtb_Gain1_idx_0,
              rtb_Gain3_idx_1), rtb_add_c)) - datalogger_target_P.Gain_Gain_f *
              rtb_one_by_two;

            /* End of Outputs for SubSystem: '<S31>/If Lower Switch Always Conduct' */
          }

          /* End of If: '<S31>/If' */
          /* End of Outputs for SubSystem: '<S30>/Compute Two Arm Modulation Offset' */
        } else {
          /* Outputs for IfAction SubSystem: '<S30>/Zero Offset' incorporates:
           *  ActionPort: '<S32>/Action Port'
           */
          /* SignalConversion generated from: '<S32>/Out1' */
          rtb_AvoidDivisionByZero = 0.0F;

          /* End of Outputs for SubSystem: '<S30>/Zero Offset' */
        }

        /* End of If: '<S30>/If Enable Two Arm Modulation' */

        /* Sum: '<S30>/Add' */
        rtb_Gain3_idx_0 = rtb_Gain1_idx_0 + rtb_AvoidDivisionByZero;
        rtb_Gain3_idx_1 += rtb_AvoidDivisionByZero;
        rtb_Gain1_idx_0 = rtb_add_c + rtb_AvoidDivisionByZero;

        /* Saturate: '<S29>/Avoid Division By Zero' */
        if (rtb_one_by_two > datalogger_target_P.AvoidDivisionByZero_UpperSat) {
          rtb_AvoidDivisionByZero =
            datalogger_target_P.AvoidDivisionByZero_UpperSat;
        } else if (rtb_one_by_two <
                   datalogger_target_P.AvoidDivisionByZero_LowerSat) {
          rtb_AvoidDivisionByZero =
            datalogger_target_P.AvoidDivisionByZero_LowerSat;
        } else {
          rtb_AvoidDivisionByZero = rtb_one_by_two;
        }

        /* End of Saturate: '<S29>/Avoid Division By Zero' */

        /* Bias: '<S29>/Bias' incorporates:
         *  Product: '<S29>/Divide'
         */
        rtb_Gain3_idx_0 = rtb_Gain3_idx_0 / rtb_AvoidDivisionByZero +
          datalogger_target_P.Bias_Bias_a;

        /* Saturate: '<S29>/Saturation' */
        if (rtb_Gain3_idx_0 > datalogger_target_P.Saturation_UpperSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_UpperSat;
        } else if (rtb_Gain3_idx_0 < datalogger_target_P.Saturation_LowerSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_LowerSat;
        }

        /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
         *  Gain: '<S29>/Gain2'
         */
        rtb_Gain3_idx_0 *= datalogger_target_P.Gain2_Gain;
        if (rtb_Gain3_idx_0 < 65536.0F) {
          if (rtb_Gain3_idx_0 >= 0.0F) {
            rtb_DataTypeConversion[0] = (uint16_T)rtb_Gain3_idx_0;
          } else {
            rtb_DataTypeConversion[0] = 0U;
          }
        } else {
          rtb_DataTypeConversion[0] = MAX_uint16_T;
        }

        /* Bias: '<S29>/Bias' incorporates:
         *  Product: '<S29>/Divide'
         */
        rtb_Gain3_idx_0 = rtb_Gain3_idx_1 / rtb_AvoidDivisionByZero +
          datalogger_target_P.Bias_Bias_a;

        /* Saturate: '<S29>/Saturation' */
        if (rtb_Gain3_idx_0 > datalogger_target_P.Saturation_UpperSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_UpperSat;
        } else if (rtb_Gain3_idx_0 < datalogger_target_P.Saturation_LowerSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_LowerSat;
        }

        /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
         *  Gain: '<S29>/Gain2'
         */
        rtb_Gain3_idx_0 *= datalogger_target_P.Gain2_Gain;
        if (rtb_Gain3_idx_0 < 65536.0F) {
          if (rtb_Gain3_idx_0 >= 0.0F) {
            rtb_DataTypeConversion[1] = (uint16_T)rtb_Gain3_idx_0;
          } else {
            rtb_DataTypeConversion[1] = 0U;
          }
        } else {
          rtb_DataTypeConversion[1] = MAX_uint16_T;
        }

        /* Bias: '<S29>/Bias' incorporates:
         *  Product: '<S29>/Divide'
         */
        rtb_Gain3_idx_0 = rtb_Gain1_idx_0 / rtb_AvoidDivisionByZero +
          datalogger_target_P.Bias_Bias_a;

        /* Saturate: '<S29>/Saturation' */
        if (rtb_Gain3_idx_0 > datalogger_target_P.Saturation_UpperSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_UpperSat;
        } else if (rtb_Gain3_idx_0 < datalogger_target_P.Saturation_LowerSat) {
          rtb_Gain3_idx_0 = datalogger_target_P.Saturation_LowerSat;
        }

        /* DataTypeConversion: '<S29>/Data Type Conversion' incorporates:
         *  Gain: '<S29>/Gain2'
         */
        rtb_Gain3_idx_0 *= datalogger_target_P.Gain2_Gain;
        if (rtb_Gain3_idx_0 < 65536.0F) {
          if (rtb_Gain3_idx_0 >= 0.0F) {
            rtb_DataTypeConversion[2] = (uint16_T)rtb_Gain3_idx_0;
          } else {
            rtb_DataTypeConversion[2] = 0U;
          }
        } else {
          rtb_DataTypeConversion[2] = MAX_uint16_T;
        }

        /* S-Function (c2802xpwm): '<S37>/ReplicaOfSource' */

        /*-- Update CMPA value for ePWM1 --*/
        {
          EPwm1Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataTypeConversion[0]);
        }

        /* S-Function (c2802xpwm): '<S38>/ReplicaOfSource' */

        /*-- Update CMPA value for ePWM4 --*/
        {
          EPwm4Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataTypeConversion[1]);
        }

        /* S-Function (c2802xpwm): '<S39>/ReplicaOfSource' */

        /*-- Update CMPA value for ePWM2 --*/
        {
          EPwm2Regs.CMPA.bit.CMPA = (uint16_T)(rtb_DataTypeConversion[2]);
        }

        /* Switch: '<S25>/FixPt Switch' */
        if (datalogger_target_DW.Output_DSTATE >
            datalogger_target_P.CounterLimited_uplimit) {
          /* Sum: '<S24>/FixPt Sum1' incorporates:
           *  Constant: '<S25>/Constant'
           *  UnitDelay: '<S20>/Output'
           */
          datalogger_target_DW.Output_DSTATE =
            datalogger_target_P.Constant_Value_m;
        }

        /* End of Switch: '<S25>/FixPt Switch' */
      }

      /* End of Outputs for S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' */
    }
  }
}

/* Hardware Interrupt Block: '<Root>/ReplicaOfSource' */
void isr_int9pie1_task_fcn(void)
{
  if (1 == runModel) {
    /* Call the system: <Root>/SCI Receive Interrupt Callback */
    {
      /* S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' */

      /* Output and update for function-call system: '<Root>/SCI Receive Interrupt Callback' */

      /* S-Function (c28xsci_rx): '<S40>/ReplicaOfSource' */
      {
        int i;
        int errFlg = NOERROR;
        unsigned int recbuff[6];
        for (i = 0; i < 6; i++)
          recbuff[i] = 0;

        /* Getting Data Head */
        {
          unsigned int recHead;
          int cnt = 0;
          int i = 0;
          char *expHead = "S";
          while (i < 1) {
            scia_rcv(&recHead, 1, SHORTLOOP, 1);
            if (recHead == expHead[i]) {
              i++;
            } else {
              i = 0;
            }

            if (cnt++ > 16) {
              errFlg = TIMEOUT;
              goto RXERRA;
            }
          }
        }

        /* End of Getting Data Head */

        /* Receiving data */
        errFlg = scia_rcv(recbuff, 12, LONGLOOP, 4);
        if (errFlg != NOERROR)
          goto RXERRA;

        /* Getting Data Tail */
        {
          int i;
          char *expTail = "E";
          unsigned int recTail[1];
          scia_rcv(recTail, 1, LONGLOOP, 1);
          for (i = 0; i< 1; i++) {
            if (expTail[i] != recTail[i]) {
              errFlg = DATAERR;
              goto RXERRA;
            }
          }
        }

        /* End of Getting Data Tail */
        memcpy( &datalogger_target_B.ReplicaOfSource[0], recbuff, 6);
       RXERRA:
        asm(" NOP");
      }

      /* DataTypeConversion: '<S40>/DTC_output_1' */
      datalogger_target_B.DTC_output_1[0] = datalogger_target_B.ReplicaOfSource
        [0];
      datalogger_target_B.DTC_output_1[1] = datalogger_target_B.ReplicaOfSource
        [1];
      datalogger_target_B.DTC_output_1[2] = datalogger_target_B.ReplicaOfSource
        [2];

      /* End of Outputs for S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' */

      /* RateTransition: '<Root>/Rate Transition' */
      datalogger_target_DW.RateTransition_Buffer
        [(datalogger_target_DW.RateTransition_ActiveBufIdx == 0) * 3] =
        datalogger_target_B.DTC_output_1[0];
      datalogger_target_DW.RateTransition_Buffer[1 +
        (datalogger_target_DW.RateTransition_ActiveBufIdx == 0) * 3] =
        datalogger_target_B.DTC_output_1[1];
      datalogger_target_DW.RateTransition_Buffer[2 +
        (datalogger_target_DW.RateTransition_ActiveBufIdx == 0) * 3] =
        datalogger_target_B.DTC_output_1[2];
      datalogger_target_DW.RateTransition_ActiveBufIdx =
        (datalogger_target_DW.RateTransition_ActiveBufIdx == 0);
    }
  }
}

/*
 * Set which subrates need to run this base step (base rate always runs).
 * This function must be called prior to calling the model step function
 * in order to "remember" which rates need to run this base step.  The
 * buffering of events allows for overlapping preemption.
 */
void datalogger_target_SetEventsForThisBaseStep(boolean_T *eventFlags)
{
  /* Task runs when its counter is zero, computed via rtmStepTask macro */
  eventFlags[1] = ((boolean_T)rtmStepTask(datalogger_target_M, 1));
}

/*
 *   This function updates active task flag for each subrate
 * and rate transition flags for tasks that exchange data.
 * The function assumes rate-monotonic multitasking scheduler.
 * The function must be called at model base rate so that
 * the generated code self-manages all its subrates and rate
 * transition flags.
 */
static void rate_monotonic_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (datalogger_target_M->Timing.TaskCounters.TID[1])++;
  if ((datalogger_target_M->Timing.TaskCounters.TID[1]) > 19999) {/* Sample time: [1.0s, 0.0s] */
    datalogger_target_M->Timing.TaskCounters.TID[1] = 0;
  }
}

/*
 * Output and update for action system:
 *    '<S22>/If Action Subsystem'
 *    '<S22>/If Action Subsystem1'
 */
void datalogge_IfActionSubsystem(uint16_T *rty_Out1,
  P_IfActionSubsystem_datalogge_T *localP)
{
  /* SignalConversion generated from: '<S26>/Out1' incorporates:
   *  Constant: '<S26>/Constant'
   */
  *rty_Out1 = localP->Constant_Value;
}

/* Model step function for TID0 */
void datalogger_target_step0(void)     /* Sample time: [5.0E-5s, 0.0s] */
{
  {                                    /* Sample time: [5.0E-5s, 0.0s] */
    rate_monotonic_scheduler();
  }
}

/* Model step function for TID1 */
void datalogger_target_step1(void)     /* Sample time: [1.0s, 0.0s] */
{
  /* S-Function (c280xgpio_do): '<Root>/ReplicaOfSource1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  {
    GpioDataRegs.GPATOGGLE.bit.GPIO23 = (datalogger_target_P.Constant_Value != 0);
  }
}

/* Model initialize function */
void datalogger_target_initialize(void)
{
  /* Start for S-Function (c280xgpio_do): '<Root>/ReplicaOfSource1' incorporates:
   *  Constant: '<Root>/Constant'
   */
  EALLOW;
  GpioCtrlRegs.GPAMUX2.all &= 0xFFFF3FFF;
  GpioCtrlRegs.GPADIR.all |= 0x800000;
  EDIS;

  /* InitializeConditions for RateTransition: '<Root>/Rate Transition' */
  datalogger_target_DW.RateTransition_Buffer[0] =
    datalogger_target_P.RateTransition_InitialCondition;
  datalogger_target_DW.RateTransition_Buffer[1] =
    datalogger_target_P.RateTransition_InitialCondition;
  datalogger_target_DW.RateTransition_Buffer[2] =
    datalogger_target_P.RateTransition_InitialCondition;

  /* SystemInitialize for S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' incorporates:
   *  SubSystem: '<Root>/ADC Interrupt Callback'
   */
  /* System initialize for function-call system: '<Root>/ADC Interrupt Callback' */

  /* Start for S-Function (c2802xadc): '<S15>/ReplicaOfSource' */
  if (MW_adcBInitFlag == 0) {
    InitAdcB();
    MW_adcBInitFlag = 1;
  }

  config_ADCB_SOC0 ();

  /* Start for S-Function (c2802xadc): '<S16>/ReplicaOfSource' */
  if (MW_adcCInitFlag == 0) {
    InitAdcC();
    MW_adcCInitFlag = 1;
  }

  config_ADCC_SOC1 ();

  /* Start for S-Function (c2802xadc): '<S17>/ReplicaOfSource' */
  if (MW_adcCInitFlag == 0) {
    InitAdcC();
    MW_adcCInitFlag = 1;
  }

  config_ADCC_SOC2 ();

  /* Start for S-Function (c2802xadc): '<S12>/ReplicaOfSource' */
  if (MW_adcCInitFlag == 0) {
    InitAdcC();
    MW_adcCInitFlag = 1;
  }

  config_ADCC_SOC3 ();

  /* Start for S-Function (c2802xadc): '<S13>/ReplicaOfSource' */
  if (MW_adcCInitFlag == 0) {
    InitAdcC();
    MW_adcCInitFlag = 1;
  }

  config_ADCC_SOC4 ();

  /* Start for S-Function (c2802xadc): '<S14>/ReplicaOfSource' */
  if (MW_adcAInitFlag == 0) {
    InitAdcA();
    MW_adcAInitFlag = 1;
  }

  config_ADCA_SOC5 ();

  /* Start for S-Function (c2802xadc): '<S9>/ReplicaOfSource' */
  if (MW_adcAInitFlag == 0) {
    InitAdcA();
    MW_adcAInitFlag = 1;
  }

  config_ADCA_SOC6 ();

  /* Start for S-Function (c280xgpio_do): '<S6>/ReplicaOfSource' */
  EALLOW;
  GpioCtrlRegs.GPBMUX1.all &= 0xFFFFFFF3;
  GpioCtrlRegs.GPBDIR.all |= 0x2;
  EDIS;

  /* Start for S-Function (c2802xpwm): '<S37>/ReplicaOfSource' */

  /*** Initialize ePWM1 modules ***/
  {
    /*  // Time Base Control Register
       EPwm1Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm1Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select
       EPwm1Regs.TBCTL2.bit.SYNCOSELX           = 0;          // Sync Output Select - additional options

       EPwm1Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select

       EPwm1Regs.TBCTL2.bit.PRDLDSYNC           = 0;          // Shadow select

       EPwm1Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm1Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm1Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm1Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm1Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm1Regs.TBCTL.all = (EPwm1Regs.TBCTL.all & ~0x3FFF) | 0x32;
    EPwm1Regs.TBCTL2.all = (EPwm1Regs.TBCTL2.all & ~0xF000) | 0x0;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm1Regs.TBPRD = 5000;            // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm1Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm1Regs.TBPHS.all = (EPwm1Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm1Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm1Regs.CMPCTL.bit.LOADASYNC           = 0U;          // Active Compare A Load SYNC Option
       EPwm1Regs.CMPCTL.bit.LOADBSYNC           = 0U;          // Active Compare B Load SYNC Option
       EPwm1Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm1Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm1Regs.CMPCTL.bit.SHDWAMODE           = 0;          // Compare A Register Block Operating Mode
       EPwm1Regs.CMPCTL.bit.SHDWBMODE           = 0;          // Compare B Register Block Operating Mode
     */
    EPwm1Regs.CMPCTL.all = (EPwm1Regs.CMPCTL.all & ~0x3C5F) | 0x0;

    /* EPwm1Regs.CMPCTL2.bit.SHDWCMODE           = 0;          // Compare C Register Block Operating Mode
       EPwm1Regs.CMPCTL2.bit.SHDWDMODE           = 0;          // Compare D Register Block Operating Mode
       EPwm1Regs.CMPCTL2.bit.LOADCSYNC           = 0U;          // Active Compare C Load SYNC Option
       EPwm1Regs.CMPCTL2.bit.LOADDSYNC           = 0U;          // Active Compare D Load SYNC Option
       EPwm1Regs.CMPCTL2.bit.LOADCMODE           = 0U;          // Active Compare C Load
       EPwm1Regs.CMPCTL2.bit.LOADDMODE           = 0U;          // Active Compare D Load
     */
    EPwm1Regs.CMPCTL2.all = (EPwm1Regs.CMPCTL2.all & ~0x3C5F) | 0x0;
    EPwm1Regs.CMPA.bit.CMPA = 0;       // Counter Compare A Register
    EPwm1Regs.CMPB.bit.CMPB = 32000;   // Counter Compare B Register
    EPwm1Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm1Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm1Regs.AQCTLA.all = 150;// Action Qualifier Control Register For Output A
    EPwm1Regs.AQCTLB.all = 2310;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm1Regs.AQSFRC.bit.RLDCSF              = 0;          // Reload from Shadow Options
     */
    EPwm1Regs.AQSFRC.all = (EPwm1Regs.AQSFRC.all & ~0xC0) | 0x0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm1Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm1Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm1Regs.AQCSFRC.all = (EPwm1Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm1Regs.DBCTL.bit.OUT_MODE             = 0;          // Dead Band Output Mode Control
       EPwm1Regs.DBCTL.bit.IN_MODE              = 0;          // Dead Band Input Select Mode Control
       EPwm1Regs.DBCTL.bit.POLSEL               = 0;          // Polarity Select Control
       EPwm1Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
       EPwm1Regs.DBCTL.bit.SHDWDBREDMODE        = 0;          // DBRED shadow mode
       EPwm1Regs.DBCTL.bit.SHDWDBFEDMODE        = 0;          // DBFED shadow mode
       EPwm1Regs.DBCTL.bit.LOADREDMODE          = 4U;        // DBRED load
       EPwm1Regs.DBCTL.bit.LOADFEDMODE          = 4U;        // DBFED load
     */
    EPwm1Regs.DBCTL.all = (EPwm1Regs.DBCTL.all & ~0x8FFF) | 0x0;
    EPwm1Regs.DBRED.bit.DBRED = (uint16_T)(0);
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm1Regs.DBFED.bit.DBFED = (uint16_T)(0);
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm1Regs.ETSEL.bit.SOCAEN               = 1;          // Start of Conversion A Enable
       EPwm1Regs.ETSEL.bit.SOCASELCMP           = 0;
       EPwm1Regs.ETSEL.bit.SOCASEL              = 2;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM1SOC Period Select
       EPwm1Regs.ETSOCPS.bit.SOCAPRD2           = 1;
       EPwm1Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable
       EPwm1Regs.ETSEL.bit.SOCBSELCMP           = 0;
       EPwm1Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM1SOCB Period Select
       EPwm1Regs.ETSOCPS.bit.SOCBPRD2           = 1;
       EPwm1Regs.ETSEL.bit.INTEN                = 0;          // EPWM1INTn Enable
       EPwm1Regs.ETSEL.bit.INTSELCMP            = 0;
       EPwm1Regs.ETSEL.bit.INTSEL               = 1;          // Start of Conversion A Select
       EPwm1Regs.ETPS.bit.INTPSSEL              = 1;          // EPWM1INTn Period Select
       EPwm1Regs.ETINTPS.bit.INTPRD2            = 1;
     */
    EPwm1Regs.ETSEL.all = (EPwm1Regs.ETSEL.all & ~0xFF7F) | 0x1A01;
    EPwm1Regs.ETPS.all = (EPwm1Regs.ETPS.all & ~0x30) | 0x30;
    EPwm1Regs.ETSOCPS.all = (EPwm1Regs.ETSOCPS.all & ~0xF0F) | 0x101;
    EPwm1Regs.ETINTPS.all = (EPwm1Regs.ETINTPS.all & ~0xF) | 0x1;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm1Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm1Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm1Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm1Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm1Regs.PCCTL.all = (EPwm1Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm1Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm1Regs.TZCTL.bit.TZA                  = 3;          // TZ1 to TZ6 Trip Action On EPWM1A
       EPwm1Regs.TZCTL.bit.TZB                  = 3;          // TZ1 to TZ6 Trip Action On EPWM1B
       EPwm1Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM1A action on DCAEVT1
       EPwm1Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM1A action on DCAEVT2
       EPwm1Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM1B action on DCBEVT1
       EPwm1Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM1B action on DCBEVT2
     */
    EPwm1Regs.TZCTL.all = (EPwm1Regs.TZCTL.all & ~0xFFF) | 0xFFF;

    /*	// Trip Zone Enable Interrupt Register
       EPwm1Regs.TZEINT.bit.OST                 = 0;          // Trip Zones One Shot Int Enable
       EPwm1Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm1Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm1Regs.TZEINT.all = (EPwm1Regs.TZEINT.all & ~0x7E) | 0x0;

    /*	// Digital Compare A Control Register
       EPwm1Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm1Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm1Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm1Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm1Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm1Regs.DCACTL.all = (EPwm1Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm1Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm1Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm1Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm1Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm1Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm1Regs.DCBCTL.all = (EPwm1Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm1Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm1Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 0;          // Digital Compare A Low COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm1Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 0;          // Digital Compare B Low COMP Input Select

     */
    EPwm1Regs.DCTRIPSEL.all = (EPwm1Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x0;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm1Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm1Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm1Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm1Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm1Regs.TZDCSEL.all = (EPwm1Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm1Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm1Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm1Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm1Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm1Regs.DCFCTL.all = (EPwm1Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm1Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm1Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm1Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm1Regs.DCCAPCTL.all = (EPwm1Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm1Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm1Regs.HRCNFG.bit.SELOUTB             = 1;          // EPWMB Output Selection Bit
     */
    EPwm1Regs.HRCNFG.all = (EPwm1Regs.HRCNFG.all & ~0xA0) | 0x20;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm1Regs.EPWMXLINK.bit.TBPRDLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPALINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPBLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPCLINK = 0;
    EPwm1Regs.EPWMXLINK.bit.CMPDLINK = 0;

    /* SYNCPER - Peripheral synchronization output event
       EPwm1Regs.HRPCTL.bit.PWMSYNCSEL            = 0;          // EPWMSYNCPER selection
       EPwm1Regs.HRPCTL.bit.PWMSYNCSELX           = 0;          //  EPWMSYNCPER selection
     */
    EPwm1Regs.HRPCTL.all = (EPwm1Regs.HRPCTL.all & ~0x72) | 0x0;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S38>/ReplicaOfSource' */

  /*** Initialize ePWM4 modules ***/
  {
    /*  // Time Base Control Register
       EPwm4Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm4Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select
       EPwm4Regs.TBCTL2.bit.SYNCOSELX           = 0;          // Sync Output Select - additional options

       EPwm4Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select

       EPwm4Regs.TBCTL2.bit.PRDLDSYNC           = 0;          // Shadow select

       EPwm4Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm4Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm4Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm4Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm4Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm4Regs.TBCTL.all = (EPwm4Regs.TBCTL.all & ~0x3FFF) | 0x32;
    EPwm4Regs.TBCTL2.all = (EPwm4Regs.TBCTL2.all & ~0xF000) | 0x0;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm4Regs.TBPRD = 5000;            // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm4Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm4Regs.TBPHS.all = (EPwm4Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm4Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm4Regs.CMPCTL.bit.LOADASYNC           = 0U;          // Active Compare A Load SYNC Option
       EPwm4Regs.CMPCTL.bit.LOADBSYNC           = 0U;          // Active Compare B Load SYNC Option
       EPwm4Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm4Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm4Regs.CMPCTL.bit.SHDWAMODE           = 0;          // Compare A Register Block Operating Mode
       EPwm4Regs.CMPCTL.bit.SHDWBMODE           = 0;          // Compare B Register Block Operating Mode
     */
    EPwm4Regs.CMPCTL.all = (EPwm4Regs.CMPCTL.all & ~0x3C5F) | 0x0;

    /* EPwm4Regs.CMPCTL2.bit.SHDWCMODE           = 0;          // Compare C Register Block Operating Mode
       EPwm4Regs.CMPCTL2.bit.SHDWDMODE           = 0;          // Compare D Register Block Operating Mode
       EPwm4Regs.CMPCTL2.bit.LOADCSYNC           = 0U;          // Active Compare C Load SYNC Option
       EPwm4Regs.CMPCTL2.bit.LOADDSYNC           = 0U;          // Active Compare D Load SYNC Option
       EPwm4Regs.CMPCTL2.bit.LOADCMODE           = 0U;          // Active Compare C Load
       EPwm4Regs.CMPCTL2.bit.LOADDMODE           = 0U;          // Active Compare D Load
     */
    EPwm4Regs.CMPCTL2.all = (EPwm4Regs.CMPCTL2.all & ~0x3C5F) | 0x0;
    EPwm4Regs.CMPA.bit.CMPA = 0;       // Counter Compare A Register
    EPwm4Regs.CMPB.bit.CMPB = 32000;   // Counter Compare B Register
    EPwm4Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm4Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm4Regs.AQCTLA.all = 150;// Action Qualifier Control Register For Output A
    EPwm4Regs.AQCTLB.all = 2310;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm4Regs.AQSFRC.bit.RLDCSF              = 0;          // Reload from Shadow Options
     */
    EPwm4Regs.AQSFRC.all = (EPwm4Regs.AQSFRC.all & ~0xC0) | 0x0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm4Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm4Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm4Regs.AQCSFRC.all = (EPwm4Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm4Regs.DBCTL.bit.OUT_MODE             = 0;          // Dead Band Output Mode Control
       EPwm4Regs.DBCTL.bit.IN_MODE              = 0;          // Dead Band Input Select Mode Control
       EPwm4Regs.DBCTL.bit.POLSEL               = 0;          // Polarity Select Control
       EPwm4Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
       EPwm4Regs.DBCTL.bit.SHDWDBREDMODE        = 0;          // DBRED shadow mode
       EPwm4Regs.DBCTL.bit.SHDWDBFEDMODE        = 0;          // DBFED shadow mode
       EPwm4Regs.DBCTL.bit.LOADREDMODE          = 4U;        // DBRED load
       EPwm4Regs.DBCTL.bit.LOADFEDMODE          = 4U;        // DBFED load
     */
    EPwm4Regs.DBCTL.all = (EPwm4Regs.DBCTL.all & ~0x8FFF) | 0x0;
    EPwm4Regs.DBRED.bit.DBRED = (uint16_T)(0);
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm4Regs.DBFED.bit.DBFED = (uint16_T)(0);
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm4Regs.ETSEL.bit.SOCAEN               = 1;          // Start of Conversion A Enable
       EPwm4Regs.ETSEL.bit.SOCASELCMP           = 0;
       EPwm4Regs.ETSEL.bit.SOCASEL              = 2;          // Start of Conversion A Select
       EPwm4Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM4SOC Period Select
       EPwm4Regs.ETSOCPS.bit.SOCAPRD2           = 1;
       EPwm4Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable
       EPwm4Regs.ETSEL.bit.SOCBSELCMP           = 0;
       EPwm4Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm4Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM4SOCB Period Select
       EPwm4Regs.ETSOCPS.bit.SOCBPRD2           = 1;
       EPwm4Regs.ETSEL.bit.INTEN                = 0;          // EPWM4INTn Enable
       EPwm4Regs.ETSEL.bit.INTSELCMP            = 0;
       EPwm4Regs.ETSEL.bit.INTSEL               = 1;          // Start of Conversion A Select
       EPwm4Regs.ETPS.bit.INTPSSEL              = 1;          // EPWM4INTn Period Select
       EPwm4Regs.ETINTPS.bit.INTPRD2            = 1;
     */
    EPwm4Regs.ETSEL.all = (EPwm4Regs.ETSEL.all & ~0xFF7F) | 0x1A01;
    EPwm4Regs.ETPS.all = (EPwm4Regs.ETPS.all & ~0x30) | 0x30;
    EPwm4Regs.ETSOCPS.all = (EPwm4Regs.ETSOCPS.all & ~0xF0F) | 0x101;
    EPwm4Regs.ETINTPS.all = (EPwm4Regs.ETINTPS.all & ~0xF) | 0x1;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm4Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm4Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm4Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm4Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm4Regs.PCCTL.all = (EPwm4Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm4Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm4Regs.TZCTL.bit.TZA                  = 3;          // TZ1 to TZ6 Trip Action On EPWM4A
       EPwm4Regs.TZCTL.bit.TZB                  = 3;          // TZ1 to TZ6 Trip Action On EPWM4B
       EPwm4Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM4A action on DCAEVT1
       EPwm4Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM4A action on DCAEVT2
       EPwm4Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM4B action on DCBEVT1
       EPwm4Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM4B action on DCBEVT2
     */
    EPwm4Regs.TZCTL.all = (EPwm4Regs.TZCTL.all & ~0xFFF) | 0xFFF;

    /*	// Trip Zone Enable Interrupt Register
       EPwm4Regs.TZEINT.bit.OST                 = 0;          // Trip Zones One Shot Int Enable
       EPwm4Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm4Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm4Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm4Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm4Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm4Regs.TZEINT.all = (EPwm4Regs.TZEINT.all & ~0x7E) | 0x0;

    /*	// Digital Compare A Control Register
       EPwm4Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm4Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm4Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm4Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm4Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm4Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm4Regs.DCACTL.all = (EPwm4Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm4Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm4Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm4Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm4Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm4Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm4Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm4Regs.DCBCTL.all = (EPwm4Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm4Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm4Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 0;          // Digital Compare A Low COMP Input Select
       EPwm4Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm4Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 0;          // Digital Compare B Low COMP Input Select

     */
    EPwm4Regs.DCTRIPSEL.all = (EPwm4Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x0;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm4Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm4Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm4Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm4Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm4Regs.TZDCSEL.all = (EPwm4Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm4Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm4Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm4Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm4Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm4Regs.DCFCTL.all = (EPwm4Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm4Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm4Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm4Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm4Regs.DCCAPCTL.all = (EPwm4Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm4Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm4Regs.HRCNFG.bit.SELOUTB             = 1;          // EPWMB Output Selection Bit
     */
    EPwm4Regs.HRCNFG.all = (EPwm4Regs.HRCNFG.all & ~0xA0) | 0x20;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm4Regs.EPWMXLINK.bit.TBPRDLINK = 0;
    EPwm4Regs.EPWMXLINK.bit.CMPALINK = 3;
    EPwm4Regs.EPWMXLINK.bit.CMPBLINK = 3;
    EPwm4Regs.EPWMXLINK.bit.CMPCLINK = 3;
    EPwm4Regs.EPWMXLINK.bit.CMPDLINK = 3;

    /* SYNCPER - Peripheral synchronization output event
       EPwm4Regs.HRPCTL.bit.PWMSYNCSEL            = 0;          // EPWMSYNCPER selection
       EPwm4Regs.HRPCTL.bit.PWMSYNCSELX           = 0;          //  EPWMSYNCPER selection
     */
    EPwm4Regs.HRPCTL.all = (EPwm4Regs.HRPCTL.all & ~0x72) | 0x0;
    EDIS;
  }

  /* Start for S-Function (c2802xpwm): '<S39>/ReplicaOfSource' */

  /*** Initialize ePWM2 modules ***/
  {
    /*  // Time Base Control Register
       EPwm2Regs.TBCTL.bit.CTRMODE              = 2;          // Counter Mode
       EPwm2Regs.TBCTL.bit.SYNCOSEL             = 3;          // Sync Output Select
       EPwm2Regs.TBCTL2.bit.SYNCOSELX           = 0;          // Sync Output Select - additional options

       EPwm2Regs.TBCTL.bit.PRDLD                = 0;          // Shadow select

       EPwm2Regs.TBCTL2.bit.PRDLDSYNC           = 0;          // Shadow select

       EPwm2Regs.TBCTL.bit.PHSEN                = 0;          // Phase Load Enable
       EPwm2Regs.TBCTL.bit.PHSDIR               = 0;          // Phase Direction Bit
       EPwm2Regs.TBCTL.bit.HSPCLKDIV            = 0;          // High Speed TBCLK Pre-scaler
       EPwm2Regs.TBCTL.bit.CLKDIV               = 0;          // Time Base Clock Pre-scaler
       EPwm2Regs.TBCTL.bit.SWFSYNC              = 0;          // Software Force Sync Pulse
     */
    EPwm2Regs.TBCTL.all = (EPwm2Regs.TBCTL.all & ~0x3FFF) | 0x32;
    EPwm2Regs.TBCTL2.all = (EPwm2Regs.TBCTL2.all & ~0xF000) | 0x0;

    /*-- Setup Time-Base (TB) Submodule --*/
    EPwm2Regs.TBPRD = 5000;            // Time Base Period Register

    /* // Time-Base Phase Register
       EPwm2Regs.TBPHS.bit.TBPHS               = 0;          // Phase offset register
     */
    EPwm2Regs.TBPHS.all = (EPwm2Regs.TBPHS.all & ~0xFFFF0000) | 0x0;

    // Time Base Counter Register
    EPwm2Regs.TBCTR = 0x0000;          /* Clear counter*/

    /*-- Setup Counter_Compare (CC) Submodule --*/
    /*	// Counter Compare Control Register

       EPwm2Regs.CMPCTL.bit.LOADASYNC           = 0U;          // Active Compare A Load SYNC Option
       EPwm2Regs.CMPCTL.bit.LOADBSYNC           = 0U;          // Active Compare B Load SYNC Option
       EPwm2Regs.CMPCTL.bit.LOADAMODE           = 0U;          // Active Compare A Load
       EPwm2Regs.CMPCTL.bit.LOADBMODE           = 0U;          // Active Compare B Load
       EPwm2Regs.CMPCTL.bit.SHDWAMODE           = 0;          // Compare A Register Block Operating Mode
       EPwm2Regs.CMPCTL.bit.SHDWBMODE           = 0;          // Compare B Register Block Operating Mode
     */
    EPwm2Regs.CMPCTL.all = (EPwm2Regs.CMPCTL.all & ~0x3C5F) | 0x0;

    /* EPwm2Regs.CMPCTL2.bit.SHDWCMODE           = 0;          // Compare C Register Block Operating Mode
       EPwm2Regs.CMPCTL2.bit.SHDWDMODE           = 0;          // Compare D Register Block Operating Mode
       EPwm2Regs.CMPCTL2.bit.LOADCSYNC           = 0U;          // Active Compare C Load SYNC Option
       EPwm2Regs.CMPCTL2.bit.LOADDSYNC           = 0U;          // Active Compare D Load SYNC Option
       EPwm2Regs.CMPCTL2.bit.LOADCMODE           = 0U;          // Active Compare C Load
       EPwm2Regs.CMPCTL2.bit.LOADDMODE           = 0U;          // Active Compare D Load
     */
    EPwm2Regs.CMPCTL2.all = (EPwm2Regs.CMPCTL2.all & ~0x3C5F) | 0x0;
    EPwm2Regs.CMPA.bit.CMPA = 0;       // Counter Compare A Register
    EPwm2Regs.CMPB.bit.CMPB = 32000;   // Counter Compare B Register
    EPwm2Regs.CMPC = 32000;            // Counter Compare C Register
    EPwm2Regs.CMPD = 32000;            // Counter Compare D Register

    /*-- Setup Action-Qualifier (AQ) Submodule --*/
    EPwm2Regs.AQCTLA.all = 150;// Action Qualifier Control Register For Output A
    EPwm2Regs.AQCTLB.all = 2310;
                               // Action Qualifier Control Register For Output B

    /*	// Action Qualifier Software Force Register
       EPwm2Regs.AQSFRC.bit.RLDCSF              = 0;          // Reload from Shadow Options
     */
    EPwm2Regs.AQSFRC.all = (EPwm2Regs.AQSFRC.all & ~0xC0) | 0x0;

    /*	// Action Qualifier Continuous S/W Force Register
       EPwm2Regs.AQCSFRC.bit.CSFA               = 0;          // Continuous Software Force on output A
       EPwm2Regs.AQCSFRC.bit.CSFB               = 0;          // Continuous Software Force on output B
     */
    EPwm2Regs.AQCSFRC.all = (EPwm2Regs.AQCSFRC.all & ~0xF) | 0x0;

    /*-- Setup Dead-Band Generator (DB) Submodule --*/
    /*	// Dead-Band Generator Control Register
       EPwm2Regs.DBCTL.bit.OUT_MODE             = 0;          // Dead Band Output Mode Control
       EPwm2Regs.DBCTL.bit.IN_MODE              = 0;          // Dead Band Input Select Mode Control
       EPwm2Regs.DBCTL.bit.POLSEL               = 0;          // Polarity Select Control
       EPwm2Regs.DBCTL.bit.HALFCYCLE            = 0;          // Half Cycle Clocking Enable
       EPwm2Regs.DBCTL.bit.SHDWDBREDMODE        = 0;          // DBRED shadow mode
       EPwm2Regs.DBCTL.bit.SHDWDBFEDMODE        = 0;          // DBFED shadow mode
       EPwm2Regs.DBCTL.bit.LOADREDMODE          = 4U;        // DBRED load
       EPwm2Regs.DBCTL.bit.LOADFEDMODE          = 4U;        // DBFED load
     */
    EPwm2Regs.DBCTL.all = (EPwm2Regs.DBCTL.all & ~0x8FFF) | 0x0;
    EPwm2Regs.DBRED.bit.DBRED = (uint16_T)(0);
                         // Dead-Band Generator Rising Edge Delay Count Register
    EPwm2Regs.DBFED.bit.DBFED = (uint16_T)(0);
                        // Dead-Band Generator Falling Edge Delay Count Register

    /*-- Setup Event-Trigger (ET) Submodule --*/
    /*	// Event Trigger Selection and Pre-Scale Register
       EPwm2Regs.ETSEL.bit.SOCAEN               = 1;          // Start of Conversion A Enable
       EPwm2Regs.ETSEL.bit.SOCASELCMP           = 0;
       EPwm2Regs.ETSEL.bit.SOCASEL              = 2;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM2SOC Period Select
       EPwm2Regs.ETSOCPS.bit.SOCAPRD2           = 1;
       EPwm2Regs.ETSEL.bit.SOCBEN               = 0;          // Start of Conversion B Enable
       EPwm2Regs.ETSEL.bit.SOCBSELCMP           = 0;
       EPwm2Regs.ETSEL.bit.SOCBSEL              = 1;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.SOCPSSEL              = 1;          // EPWM2SOCB Period Select
       EPwm2Regs.ETSOCPS.bit.SOCBPRD2           = 1;
       EPwm2Regs.ETSEL.bit.INTEN                = 0;          // EPWM2INTn Enable
       EPwm2Regs.ETSEL.bit.INTSELCMP            = 0;
       EPwm2Regs.ETSEL.bit.INTSEL               = 1;          // Start of Conversion A Select
       EPwm2Regs.ETPS.bit.INTPSSEL              = 1;          // EPWM2INTn Period Select
       EPwm2Regs.ETINTPS.bit.INTPRD2            = 1;
     */
    EPwm2Regs.ETSEL.all = (EPwm2Regs.ETSEL.all & ~0xFF7F) | 0x1A01;
    EPwm2Regs.ETPS.all = (EPwm2Regs.ETPS.all & ~0x30) | 0x30;
    EPwm2Regs.ETSOCPS.all = (EPwm2Regs.ETSOCPS.all & ~0xF0F) | 0x101;
    EPwm2Regs.ETINTPS.all = (EPwm2Regs.ETINTPS.all & ~0xF) | 0x1;

    /*-- Setup PWM-Chopper (PC) Submodule --*/
    /*	// PWM Chopper Control Register
       EPwm2Regs.PCCTL.bit.CHPEN                = 0;          // PWM chopping enable
       EPwm2Regs.PCCTL.bit.CHPFREQ              = 0;          // Chopping clock frequency
       EPwm2Regs.PCCTL.bit.OSHTWTH              = 0;          // One-shot pulse width
       EPwm2Regs.PCCTL.bit.CHPDUTY              = 0;          // Chopping clock Duty cycle
     */
    EPwm2Regs.PCCTL.all = (EPwm2Regs.PCCTL.all & ~0x7FF) | 0x0;

    /*-- Set up Trip-Zone (TZ) Submodule --*/
    EALLOW;
    EPwm2Regs.TZSEL.all = 0;           // Trip Zone Select Register

    /*	// Trip Zone Control Register
       EPwm2Regs.TZCTL.bit.TZA                  = 3;          // TZ1 to TZ6 Trip Action On EPWM2A
       EPwm2Regs.TZCTL.bit.TZB                  = 3;          // TZ1 to TZ6 Trip Action On EPWM2B
       EPwm2Regs.TZCTL.bit.DCAEVT1              = 3;          // EPWM2A action on DCAEVT1
       EPwm2Regs.TZCTL.bit.DCAEVT2              = 3;          // EPWM2A action on DCAEVT2
       EPwm2Regs.TZCTL.bit.DCBEVT1              = 3;          // EPWM2B action on DCBEVT1
       EPwm2Regs.TZCTL.bit.DCBEVT2              = 3;          // EPWM2B action on DCBEVT2
     */
    EPwm2Regs.TZCTL.all = (EPwm2Regs.TZCTL.all & ~0xFFF) | 0xFFF;

    /*	// Trip Zone Enable Interrupt Register
       EPwm2Regs.TZEINT.bit.OST                 = 0;          // Trip Zones One Shot Int Enable
       EPwm2Regs.TZEINT.bit.CBC                 = 0;          // Trip Zones Cycle By Cycle Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT1             = 0;          // Digital Compare A Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCAEVT2             = 0;          // Digital Compare A Event 2 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT1             = 0;          // Digital Compare B Event 1 Int Enable
       EPwm2Regs.TZEINT.bit.DCBEVT2             = 0;          // Digital Compare B Event 2 Int Enable
     */
    EPwm2Regs.TZEINT.all = (EPwm2Regs.TZEINT.all & ~0x7E) | 0x0;

    /*	// Digital Compare A Control Register
       EPwm2Regs.DCACTL.bit.EVT1SYNCE           = 0;          // DCAEVT1 SYNC Enable
       EPwm2Regs.DCACTL.bit.EVT1SOCE            = 1;          // DCAEVT1 SOC Enable
       EPwm2Regs.DCACTL.bit.EVT1FRCSYNCSEL      = 0;          // DCAEVT1 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT1SRCSEL          = 0;          // DCAEVT1 Source Signal
       EPwm2Regs.DCACTL.bit.EVT2FRCSYNCSEL      = 0;          // DCAEVT2 Force Sync Signal
       EPwm2Regs.DCACTL.bit.EVT2SRCSEL          = 0;          // DCAEVT2 Source Signal
     */
    EPwm2Regs.DCACTL.all = (EPwm2Regs.DCACTL.all & ~0x30F) | 0x4;

    /*	// Digital Compare B Control Register
       EPwm2Regs.DCBCTL.bit.EVT1SYNCE           = 0;          // DCBEVT1 SYNC Enable
       EPwm2Regs.DCBCTL.bit.EVT1SOCE            = 0;          // DCBEVT1 SOC Enable
       EPwm2Regs.DCBCTL.bit.EVT1FRCSYNCSEL      = 0;          // DCBEVT1 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT1SRCSEL          = 0;          // DCBEVT1 Source Signal
       EPwm2Regs.DCBCTL.bit.EVT2FRCSYNCSEL      = 0;          // DCBEVT2 Force Sync Signal
       EPwm2Regs.DCBCTL.bit.EVT2SRCSEL          = 0;          // DCBEVT2 Source Signal
     */
    EPwm2Regs.DCBCTL.all = (EPwm2Regs.DCBCTL.all & ~0x30F) | 0x0;

    /*	// Digital Compare Trip Select Register
       EPwm2Regs.DCTRIPSEL.bit.DCAHCOMPSEL      = 0;          // Digital Compare A High COMP Input Select

       EPwm2Regs.DCTRIPSEL.bit.DCALCOMPSEL      = 0;          // Digital Compare A Low COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBHCOMPSEL      = 0;          // Digital Compare B High COMP Input Select
       EPwm2Regs.DCTRIPSEL.bit.DCBLCOMPSEL      = 0;          // Digital Compare B Low COMP Input Select

     */
    EPwm2Regs.DCTRIPSEL.all = (EPwm2Regs.DCTRIPSEL.all & ~ 0xFFFF) | 0x0;

    /*	// Trip Zone Digital Comparator Select Register
       EPwm2Regs.TZDCSEL.bit.DCAEVT1            = 0;          // Digital Compare Output A Event 1
       EPwm2Regs.TZDCSEL.bit.DCAEVT2            = 0;          // Digital Compare Output A Event 2
       EPwm2Regs.TZDCSEL.bit.DCBEVT1            = 0;          // Digital Compare Output B Event 1
       EPwm2Regs.TZDCSEL.bit.DCBEVT2            = 0;          // Digital Compare Output B Event 2
     */
    EPwm2Regs.TZDCSEL.all = (EPwm2Regs.TZDCSEL.all & ~0xFFF) | 0x0;

    /*	// Digital Compare Filter Control Register
       EPwm2Regs.DCFCTL.bit.BLANKE              = 0;          // Blanking Enable/Disable
       EPwm2Regs.DCFCTL.bit.PULSESEL            = 1;          // Pulse Select for Blanking & Capture Alignment
       EPwm2Regs.DCFCTL.bit.BLANKINV            = 0;          // Blanking Window Inversion
       EPwm2Regs.DCFCTL.bit.SRCSEL              = 0;          // Filter Block Signal Source Select
     */
    EPwm2Regs.DCFCTL.all = (EPwm2Regs.DCFCTL.all & ~0x3F) | 0x10;
    EPwm2Regs.DCFOFFSET = 0;           // Digital Compare Filter Offset Register
    EPwm2Regs.DCFWINDOW = 0;           // Digital Compare Filter Window Register

    /*	// Digital Compare Capture Control Register
       EPwm2Regs.DCCAPCTL.bit.CAPE              = 0;          // Counter Capture Enable
     */
    EPwm2Regs.DCCAPCTL.all = (EPwm2Regs.DCCAPCTL.all & ~0x1) | 0x0;

    /*	// HRPWM Configuration Register
       EPwm2Regs.HRCNFG.bit.SWAPAB              = 0;          // Swap EPWMA and EPWMB Outputs Bit
       EPwm2Regs.HRCNFG.bit.SELOUTB             = 1;          // EPWMB Output Selection Bit
     */
    EPwm2Regs.HRCNFG.all = (EPwm2Regs.HRCNFG.all & ~0xA0) | 0x20;

    /* Update the Link Registers with the link value for all the Compare values and TBPRD */
    /* No error is thrown if the ePWM register exists in the model or not */
    EPwm2Regs.EPWMXLINK.bit.TBPRDLINK = 0;
    EPwm2Regs.EPWMXLINK.bit.CMPALINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPBLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPCLINK = 1;
    EPwm2Regs.EPWMXLINK.bit.CMPDLINK = 1;

    /* SYNCPER - Peripheral synchronization output event
       EPwm2Regs.HRPCTL.bit.PWMSYNCSEL            = 0;          // EPWMSYNCPER selection
       EPwm2Regs.HRPCTL.bit.PWMSYNCSELX           = 0;          //  EPWMSYNCPER selection
     */
    EPwm2Regs.HRPCTL.all = (EPwm2Regs.HRPCTL.all & ~0x72) | 0x0;
    EDIS;
    EALLOW;

    /* Enable TBCLK within the EPWM*/
    CpuSysRegs.PCLKCR0.bit.TBCLKSYNC = 1;
    EDIS;
  }

  /* InitializeConditions for Sum: '<S24>/FixPt Sum1' incorporates:
   *  UnitDelay: '<S20>/Output'
   */
  datalogger_target_DW.Output_DSTATE =
    datalogger_target_P.Output_InitialCondition;

  /* SystemInitialize for S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' incorporates:
   *  SubSystem: '<Root>/SCI Receive Interrupt Callback'
   */

  /* System initialize for function-call system: '<Root>/SCI Receive Interrupt Callback' */

  /* Start for S-Function (c28xsci_rx): '<S40>/ReplicaOfSource' */

  /* Initialize datalogger_target_B.ReplicaOfSource[0] */
  {
    datalogger_target_B.ReplicaOfSource[0] = (real32_T)0.0;
    datalogger_target_B.ReplicaOfSource[1] = (real32_T)0.0;
    datalogger_target_B.ReplicaOfSource[2] = (real32_T)0.0;
  }

  /* SystemInitialize for DataTypeConversion: '<S40>/DTC_output_1' incorporates:
   *  Outport: '<S2>/Commanded Value'
   */
  datalogger_target_B.DTC_output_1[0] = datalogger_target_P.CommandedValue_Y0;
  datalogger_target_B.DTC_output_1[1] = datalogger_target_P.CommandedValue_Y0;
  datalogger_target_B.DTC_output_1[2] = datalogger_target_P.CommandedValue_Y0;

  /* End of SystemInitialize for S-Function (c28xisr_c2000): '<Root>/ReplicaOfSource' */
}

/* Model terminate function */
void datalogger_target_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */