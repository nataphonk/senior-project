#include "c2000BoardSupport.h"
#include "f28004x_device.h"
#include "f28004x_examples.h"
#include "f28004x_globalprototypes.h"
#include "rtwtypes.h"
#include "datalogger_target.h"
#include "datalogger_target_private.h"
#include "MW_c28xAnalogSubsystem.h"

void config_ADCA_SOC6()
{
  EALLOW;
  AdcaRegs.ADCSOC6CTL.bit.CHSEL = 6;   /* Set SOC6 channel select to ADCIN6*/
  AdcaRegs.ADCSOC6CTL.bit.TRIGSEL = 5;
  AdcaRegs.ADCSOC6CTL.bit.ACQPS = 7.0;
                                /* Set SOC6 S/H Window to 8.0 ADC Clock Cycles*/
  AdcaRegs.ADCINTSEL1N2.bit.INT1E = 1; /* Enabled/Disable ADCINT1 interrupt*/
  AdcaRegs.ADCINTSEL1N2.bit.INT1SEL = 6;/* Setup EOC6 to trigger ADCINT1*/
  AdcaRegs.ADCINTSEL1N2.bit.INT1CONT = 1;
                                     /* Enable/Disable ADCINT1 Continuous mode*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC6 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCC_SOC3()
{
  EALLOW;
  AdccRegs.ADCSOC3CTL.bit.CHSEL = 3;   /* Set SOC3 channel select to ADCIN3*/
  AdccRegs.ADCSOC3CTL.bit.TRIGSEL = 5;
  AdccRegs.ADCSOC3CTL.bit.ACQPS = 7.0;
                                /* Set SOC3 S/H Window to 8.0 ADC Clock Cycles*/
  AdccRegs.ADCINTSOCSEL1.bit.SOC3 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdccRegs.ADCOFFTRIM.bit.OFFTRIM = AdccRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdccRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCC_SOC4()
{
  EALLOW;
  AdccRegs.ADCSOC4CTL.bit.CHSEL = 5;   /* Set SOC4 channel select to ADCIN5*/
  AdccRegs.ADCSOC4CTL.bit.TRIGSEL = 5;
  AdccRegs.ADCSOC4CTL.bit.ACQPS = 7.0;
                                /* Set SOC4 S/H Window to 8.0 ADC Clock Cycles*/
  AdccRegs.ADCINTSOCSEL1.bit.SOC4 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdccRegs.ADCOFFTRIM.bit.OFFTRIM = AdccRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdccRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCA_SOC5()
{
  EALLOW;
  AdcaRegs.ADCSOC5CTL.bit.CHSEL = 3;   /* Set SOC5 channel select to ADCIN3*/
  AdcaRegs.ADCSOC5CTL.bit.TRIGSEL = 5;
  AdcaRegs.ADCSOC5CTL.bit.ACQPS = 7.0;
                                /* Set SOC5 S/H Window to 8.0 ADC Clock Cycles*/
  AdcaRegs.ADCINTSOCSEL1.bit.SOC5 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcaRegs.ADCOFFTRIM.bit.OFFTRIM = AdcaRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcaRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcaRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCB_SOC0()
{
  EALLOW;
  AdcbRegs.ADCSOC0CTL.bit.CHSEL = 6;   /* Set SOC0 channel select to ADCIN6*/
  AdcbRegs.ADCSOC0CTL.bit.TRIGSEL = 5;
  AdcbRegs.ADCSOC0CTL.bit.ACQPS = 7.0;
                                /* Set SOC0 S/H Window to 8.0 ADC Clock Cycles*/
  AdcbRegs.ADCINTSOCSEL1.bit.SOC0 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdcbRegs.ADCOFFTRIM.bit.OFFTRIM = AdcbRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdcbRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdcbRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCC_SOC1()
{
  EALLOW;
  AdccRegs.ADCSOC1CTL.bit.CHSEL = 14;  /* Set SOC1 channel select to ADCIN14*/
  AdccRegs.ADCSOC1CTL.bit.TRIGSEL = 5;
  AdccRegs.ADCSOC1CTL.bit.ACQPS = 7.0;
                                /* Set SOC1 S/H Window to 8.0 ADC Clock Cycles*/
  AdccRegs.ADCINTSOCSEL1.bit.SOC1 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdccRegs.ADCOFFTRIM.bit.OFFTRIM = AdccRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdccRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void config_ADCC_SOC2()
{
  EALLOW;
  AdccRegs.ADCSOC2CTL.bit.CHSEL = 1;   /* Set SOC2 channel select to ADCIN1*/
  AdccRegs.ADCSOC2CTL.bit.TRIGSEL = 5;
  AdccRegs.ADCSOC2CTL.bit.ACQPS = 7.0;
                                /* Set SOC2 S/H Window to 8.0 ADC Clock Cycles*/
  AdccRegs.ADCINTSOCSEL1.bit.SOC2 = 0;
                                   /* SOCx No ADCINT Interrupt Trigger Select.*/
  AdccRegs.ADCOFFTRIM.bit.OFFTRIM = AdccRegs.ADCOFFTRIM.bit.OFFTRIM;/* Set Offset Error Correctino Value*/
  AdccRegs.ADCCTL1.bit.INTPULSEPOS = 1;
                                /* Late interrupt pulse trips AdcResults latch*/
  AdccRegs.ADCSOCPRICTL.bit.SOCPRIORITY = 0;/* All in round robin mode SOC Priority*/
  EDIS;
}

void InitAdcA()
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_A = 1;
  AdcaRegs.ADCCTL2.bit.PRESCALE = 2;
  MW_SetVREF();
  EALLOW;

  //power up the ADC
  AdcaRegs.ADCCTL1.bit.ADCPWDNZ = 1;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}

void InitAdcB()
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_B = 1;
  AdcbRegs.ADCCTL2.bit.PRESCALE = 2;
  MW_SetVREF();
  EALLOW;

  //power up the ADC
  AdcbRegs.ADCCTL1.bit.ADCPWDNZ = 1;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}

void InitAdcC()
{
  EALLOW;
  CpuSysRegs.PCLKCR13.bit.ADC_C = 1;
  AdccRegs.ADCCTL2.bit.PRESCALE = 2;
  MW_SetVREF();
  EALLOW;

  //power up the ADC
  AdccRegs.ADCCTL1.bit.ADCPWDNZ = 1;

  //delay for 1ms to allow ADC time to power up
  DELAY_US(1000);
  EDIS;
}
