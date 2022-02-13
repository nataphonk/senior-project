#ifndef PORTABLE_WORDSIZES
#ifdef __MW_TARGET_USE_HARDWARE_RESOURCES_H__
#ifndef __MW_TARGET_HARDWARE_RESOURCES_H__
#define __MW_TARGET_HARDWARE_RESOURCES_H__

#define MW_MULTI_TASKING_MODE 1
#include "c2000BoardSupport.h"
#include "f28004x_device.h"
#include "f28004x_examples.h"
#include "f28004x_globalprototypes.h"
#include "f28004x_cputimer.h"
#include "c2000SchedulerTimer.h"

#define MW_USECODERTARGET 1
#define MW_TARGETHARDWARE TI Piccolo F280049C LaunchPad
#define MW_CONNECTIONINFO_SERIAL_IPADDRESS codertarget.registry.getLoopbackIP;
#define MW_CONNECTIONINFO_SERIAL_PORT 17725
#define MW_CONNECTIONINFO_SERIAL_VERBOSE 0
#define MW_CONNECTIONINFO_XCPONSERIAL_BAUDRATE codertarget.registry.getExtModeHostBaud(hCS);
#define MW_CONNECTIONINFO_XCPONSERIAL_COMPORT codertarget.registry.serialPortValueCallback(hCS, 'ExtModeCOMPort');
#define MW_CONNECTIONINFO_XCPONSERIAL_VERBOSE 1
#define MW_CONNECTIONINFO_CAN_MEXARGS  
#define MW_CONNECTIONINFO_XCPONCAN_MEXARGS  
#define MW_EXTMODE_CONFIGURATION serial
#define MW_EXTMODE_HOSTINTERFACE 0
#define MW_EXTMODE_CANMODULE 0
#define MW_EXTMODE_CANIDTYPE 0
#define MW_EXTMODE_CANMASTERID 0x02
#define MW_EXTMODE_CANSLAVEID 0x03
#define MW_EXTMODE_CANRXMAILBOXNUMBER 0
#define MW_EXTMODE_CANTXMAILBOXNUMBER 1
#define MW_EXTMODE_SCIMODULE 0
#define MW_EXTMODE_SIGNALBUFFERSIZE 5000.000000
#define MW_RTOS Baremetal
#define MW_SCHEDULER_INTERRUPT_SOURCE 0
#define MW_RUNTIME_BUILDACTION 1
#define MW_RUNTIME_DISABLEPARALLELBUILD 0
#define MW_RUNTIME_DEVICEID 1
#define MW_RUNTIME_FLASHLOAD 1
#define MW_RUNTIME_ENABLETMU 1
#define MW_RUNTIME_LOADCOMMANDARG $(TARGET_ROOT)/CCS_Config/F280049C_LaunchPad.ccxml
#define MW_TARGETLINKOBJ_USECUSTOMLINKER 0
#define MW_TARGETLINKOBJ_NAME $(TARGET_ROOT)/src/c280049M.cmd
#define MW_CLOCKING_CPUCLOCKRATEMHZ 100
#define MW_CLOCKING_USEINTERNALOSC 0
#define MW_CLOCKING_OSCCLK 20
#define MW_CLOCKING_AUTOSETPLLSETTINGS 1
#define MW_CLOCKING_PLLCR 10
#define MW_CLOCKING_PLLDIV 0
#define MW_CLOCKING_DIVSEL 2
#define MW_CLOCKING_CLOSESTCPUCLOCK 100
#define MW_CLOCKING_LSPCLKDIV 0
#define MW_CLOCKING_LSPCLK 100
#define MW_IXBAR_FLAG 49
#define MW_IXBAR_I1 None
#define MW_IXBAR_I2 None
#define MW_IXBAR_I3 None
#define MW_IXBAR_I4 None
#define MW_IXBAR_I5 None
#define MW_IXBAR_I6 None
#define MW_IXBAR_I7 35
#define MW_IXBAR_I8 37
#define MW_IXBAR_I9 59
#define MW_IXBAR_I10 14
#define MW_IXBAR_I11 15
#define MW_IXBAR_I12 26
#define MW_IXBAR_I13 58
#define MW_IXBAR_I14 None
#define MW_IXBAR_I15 None
#define MW_IXBAR_I16 None
#define MW_IXBAR_ONE_TIME 0.000000
#define MW_OUTPUTXBAR_OXBAR1 0
#define MW_OUTPUTXBAR_OXBAR_MUX1 -1
#define MW_OUTPUTXBAR_OXBAR1_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR1_GPIO 0
#define MW_OUTPUTXBAR_OXBAR1_LATCH 0
#define MW_OUTPUTXBAR_OXBAR1_INVERT 0
#define MW_OUTPUTXBAR_OXBAR2 0
#define MW_OUTPUTXBAR_OXBAR_MUX2 -1
#define MW_OUTPUTXBAR_OXBAR2_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR2_GPIO 0
#define MW_OUTPUTXBAR_OXBAR2_LATCH 0
#define MW_OUTPUTXBAR_OXBAR2_INVERT 0
#define MW_OUTPUTXBAR_OXBAR3 0
#define MW_OUTPUTXBAR_OXBAR_MUX3 -1
#define MW_OUTPUTXBAR_OXBAR3_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR3_GPIO 0
#define MW_OUTPUTXBAR_OXBAR3_LATCH 0
#define MW_OUTPUTXBAR_OXBAR3_INVERT 0
#define MW_OUTPUTXBAR_OXBAR4 0
#define MW_OUTPUTXBAR_OXBAR_MUX4 -1
#define MW_OUTPUTXBAR_OXBAR4_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR4_GPIO 0
#define MW_OUTPUTXBAR_OXBAR4_LATCH 0
#define MW_OUTPUTXBAR_OXBAR4_INVERT 0
#define MW_OUTPUTXBAR_OXBAR5 0
#define MW_OUTPUTXBAR_OXBAR_MUX5 -1
#define MW_OUTPUTXBAR_OXBAR5_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR5_GPIO 0
#define MW_OUTPUTXBAR_OXBAR5_LATCH 0
#define MW_OUTPUTXBAR_OXBAR5_INVERT 0
#define MW_OUTPUTXBAR_OXBAR6 0
#define MW_OUTPUTXBAR_OXBAR_MUX6 -1
#define MW_OUTPUTXBAR_OXBAR6_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR6_GPIO 0
#define MW_OUTPUTXBAR_OXBAR6_LATCH 0
#define MW_OUTPUTXBAR_OXBAR6_INVERT 0
#define MW_OUTPUTXBAR_OXBAR7 0
#define MW_OUTPUTXBAR_OXBAR_MUX7 -1
#define MW_OUTPUTXBAR_OXBAR7_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR7_GPIO 0
#define MW_OUTPUTXBAR_OXBAR7_LATCH 0
#define MW_OUTPUTXBAR_OXBAR7_INVERT 0
#define MW_OUTPUTXBAR_OXBAR8 0
#define MW_OUTPUTXBAR_OXBAR_MUX8 -1
#define MW_OUTPUTXBAR_OXBAR8_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_OUTPUTXBAR_OXBAR8_GPIO 0
#define MW_OUTPUTXBAR_OXBAR8_LATCH 0
#define MW_OUTPUTXBAR_OXBAR8_INVERT 0
#define MW_ADCA_EXTERNALREFERENCESELECTOR 0
#define MW_ADCA_EXTERNALREFERENCEVREFHI 0
#define MW_ADCA_CLOCKDIV 1
#define MW_ADCA_CLOCKFREQUENCY 50.000000
#define MW_ADCA_OFFSETCORRECTIONVALUE AdcaRegs.ADCOFFTRIM.bit.OFFTRIM
#define MW_ADCA_EXTERNALREFERENCEVREFLO 0
#define MW_ADCA_INTPULSEGENERATION 0
#define MW_ADCA_SOCPRIORITY 0
#define MW_ADCA_XINT2GPIO_IXBAR 0
#define MW_ADCA_XINT2GPIO None
#define MW_ADCB_EXTERNALREFERENCESELECTOR 0
#define MW_ADCB_EXTERNALREFERENCEVREFHI 0
#define MW_ADCB_CLOCKDIV 1
#define MW_ADCB_CLOCKFREQUENCY 50.000000
#define MW_ADCB_OFFSETCORRECTIONVALUE AdcbRegs.ADCOFFTRIM.bit.OFFTRIM
#define MW_ADCB_EXTERNALREFERENCEVREFLO 0
#define MW_ADCB_INTPULSEGENERATION 0
#define MW_ADCB_SOCPRIORITY 0
#define MW_ADCB_XINT2GPIO_IXBAR 0
#define MW_ADCB_XINT2GPIO None
#define MW_ADCC_EXTERNALREFERENCESELECTOR 0
#define MW_ADCC_EXTERNALREFERENCEVREFHI 0
#define MW_ADCC_CLOCKDIV 1
#define MW_ADCC_CLOCKFREQUENCY 50.000000
#define MW_ADCC_OFFSETCORRECTIONVALUE AdccRegs.ADCOFFTRIM.bit.OFFTRIM
#define MW_ADCC_EXTERNALREFERENCEVREFLO 0
#define MW_ADCC_INTPULSEGENERATION 0
#define MW_ADCC_SOCPRIORITY 0
#define MW_ADCC_XINT2GPIO_IXBAR 0
#define MW_ADCC_XINT2GPIO None
#define MW_DACA_VOLTAGE 0
#define MW_DACA_LOADMODE 0
#define MW_DACB_VOLTAGE 0
#define MW_DACB_LOADMODE 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS1 0
#define MW_CMPSS_CMPSS1_COMPH 0
#define MW_CMPSS_CMPSS1_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS1_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS1_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS1_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS1_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS1_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS1_COMPH_THRESH 0
#define MW_CMPSS_CMPSS1_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS1_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS1_COMPL 0
#define MW_CMPSS_CMPSS1_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS1_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS1_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS1_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS1_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS1_COMPL_THRESH 0
#define MW_CMPSS_CMPSS1_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS1_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS1_COMP_SELREF 0
#define MW_CMPSS_CMPSS1_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS1_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS1_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS1_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS2 0
#define MW_CMPSS_CMPSS2_COMPH 0
#define MW_CMPSS_CMPSS2_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS2_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS2_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS2_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS2_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS2_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS2_COMPH_THRESH 0
#define MW_CMPSS_CMPSS2_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS2_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS2_COMPL 0
#define MW_CMPSS_CMPSS2_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS2_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS2_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS2_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS2_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS2_COMPL_THRESH 0
#define MW_CMPSS_CMPSS2_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS2_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS2_COMP_SELREF 0
#define MW_CMPSS_CMPSS2_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS2_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS2_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS2_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS3 0
#define MW_CMPSS_CMPSS3_COMPH 0
#define MW_CMPSS_CMPSS3_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS3_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS3_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS3_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS3_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS3_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS3_COMPH_THRESH 0
#define MW_CMPSS_CMPSS3_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS3_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS3_COMPL 0
#define MW_CMPSS_CMPSS3_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS3_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS3_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS3_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS3_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS3_COMPL_THRESH 0
#define MW_CMPSS_CMPSS3_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS3_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS3_COMP_SELREF 0
#define MW_CMPSS_CMPSS3_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS3_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS3_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS3_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS4 0
#define MW_CMPSS_CMPSS4_COMPH 0
#define MW_CMPSS_CMPSS4_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS4_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS4_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS4_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS4_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS4_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS4_COMPH_THRESH 0
#define MW_CMPSS_CMPSS4_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS4_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS4_COMPL 0
#define MW_CMPSS_CMPSS4_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS4_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS4_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS4_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS4_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS4_COMPL_THRESH 0
#define MW_CMPSS_CMPSS4_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS4_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS4_COMP_SELREF 0
#define MW_CMPSS_CMPSS4_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS4_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS4_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS4_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS5 0
#define MW_CMPSS_CMPSS5_COMPH 0
#define MW_CMPSS_CMPSS5_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS5_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS5_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS5_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS5_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS5_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS5_COMPH_THRESH 0
#define MW_CMPSS_CMPSS5_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS5_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS5_COMPL 0
#define MW_CMPSS_CMPSS5_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS5_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS5_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS5_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS5_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS5_COMPL_THRESH 0
#define MW_CMPSS_CMPSS5_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS5_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS5_COMP_SELREF 0
#define MW_CMPSS_CMPSS5_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS5_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS5_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS5_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS6 0
#define MW_CMPSS_CMPSS6_COMPH 0
#define MW_CMPSS_CMPSS6_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS6_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS6_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS6_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS6_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS6_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS6_COMPH_THRESH 0
#define MW_CMPSS_CMPSS6_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS6_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS6_COMPL 0
#define MW_CMPSS_CMPSS6_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS6_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS6_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS6_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS6_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS6_COMPL_THRESH 0
#define MW_CMPSS_CMPSS6_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS6_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS6_COMP_SELREF 0
#define MW_CMPSS_CMPSS6_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS6_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS6_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS6_COMP_COMPHYS 0
#define MW_CMPSS_ENABLE_MODULE_CMPSS7 0
#define MW_CMPSS_CMPSS7_COMPH 0
#define MW_CMPSS_CMPSS7_COMPH_RAMPLOADSEL 0
#define MW_CMPSS_CMPSS7_COMPH_COMPHINV 0
#define MW_CMPSS_CMPSS7_COMPH_HSYNCCLREN 0
#define MW_CMPSS_CMPSS7_COMPH_DIGITALFILTER 0
#define MW_CMPSS_CMPSS7_COMPH_CLKPRESCALE 0
#define MW_CMPSS_CMPSS7_COMPH_SAMPWIN 0
#define MW_CMPSS_CMPSS7_COMPH_THRESH 0
#define MW_CMPSS_CMPSS7_COMPH_CTRIPH 0
#define MW_CMPSS_CMPSS7_COMPH_CTRIPOUTH 0
#define MW_CMPSS_CMPSS7_COMPL 0
#define MW_CMPSS_CMPSS7_COMPL_COMPLINV 0
#define MW_CMPSS_CMPSS7_COMPL_LSYNCCLREN 0
#define MW_CMPSS_CMPSS7_COMPL_DIGITALFILTER 0
#define MW_CMPSS_CMPSS7_COMPL_CLKPRESCALE 0
#define MW_CMPSS_CMPSS7_COMPL_SAMPWIN 0
#define MW_CMPSS_CMPSS7_COMPL_THRESH 0
#define MW_CMPSS_CMPSS7_COMPL_CTRIPL 0
#define MW_CMPSS_CMPSS7_COMPL_CTRIPOUTL 0
#define MW_CMPSS_CMPSS7_COMP_SELREF 0
#define MW_CMPSS_CMPSS7_COMP_SWLOADSEL 0
#define MW_CMPSS_CMPSS7_COMP_RAMPSOURCE 0
#define MW_CMPSS_CMPSS7_COMP_BLANKSOURCE 0
#define MW_CMPSS_CMPSS7_COMP_COMPHYS 0
#define MW_EPWM_CLOCKDIV 0
#define MW_EPWM_PINASSIGNMENT_TZ1_IXBAR 0
#define MW_EPWM_PINASSIGNMENT_TZ2_IXBAR 0
#define MW_EPWM_PINASSIGNMENT_TZ3_IXBAR 0
#define MW_EPWM_PINASSIGNMENT_TZ1 None
#define MW_EPWM_PINASSIGNMENT_TZ2 None
#define MW_EPWM_PINASSIGNMENT_TZ3 None
#define MW_EPWM_EXBAR_TRIP4 0
#define MW_EPWM_EXBAR_MUX_TRIP4 -1
#define MW_EPWM_EXBAR_TRIP4_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP4_INVERT 0
#define MW_EPWM_EXBAR_TRIP5 0
#define MW_EPWM_EXBAR_MUX_TRIP5 -1
#define MW_EPWM_EXBAR_TRIP5_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP5_INVERT 0
#define MW_EPWM_EXBAR_TRIP7 0
#define MW_EPWM_EXBAR_MUX_TRIP7 -1
#define MW_EPWM_EXBAR_TRIP7_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP7_INVERT 0
#define MW_EPWM_EXBAR_TRIP8 0
#define MW_EPWM_EXBAR_MUX_TRIP8 -1
#define MW_EPWM_EXBAR_TRIP8_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP8_INVERT 0
#define MW_EPWM_EXBAR_TRIP9 0
#define MW_EPWM_EXBAR_MUX_TRIP9 -1
#define MW_EPWM_EXBAR_TRIP9_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP9_INVERT 0
#define MW_EPWM_EXBAR_TRIP10 0
#define MW_EPWM_EXBAR_MUX_TRIP10 -1
#define MW_EPWM_EXBAR_TRIP10_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP10_INVERT 0
#define MW_EPWM_EXBAR_TRIP11 0
#define MW_EPWM_EXBAR_MUX_TRIP11 -1
#define MW_EPWM_EXBAR_TRIP11_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP11_INVERT 0
#define MW_EPWM_EXBAR_TRIP12 0
#define MW_EPWM_EXBAR_MUX_TRIP12 -1
#define MW_EPWM_EXBAR_TRIP12_MUXSELECT XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
#define MW_EPWM_EXBAR_TRIP12_INVERT 0
#define MW_EPWM_PINASSIGNMENT_SYNCI_IXBAR 0
#define MW_EPWM_PINASSIGNMENT_SYNCI None
#define MW_EPWM_PINASSIGNMENT_SYNCO None
#define MW_EPWM_PINASSIGNMENT_PWM1A 1
#define MW_EPWM_PINASSIGNMENT_PWM1B 1
#define MW_EPWM_PINASSIGNMENT_PWM2A 1
#define MW_EPWM_PINASSIGNMENT_PWM2B 1
#define MW_EPWM_PINASSIGNMENT_PWM3A 1
#define MW_EPWM_PINASSIGNMENT_PWM3B 1
#define MW_EPWM_PINASSIGNMENT_PWM4A 1
#define MW_EPWM_PINASSIGNMENT_PWM4B 1
#define MW_EPWM_PINASSIGNMENT_PWM5A 1
#define MW_EPWM_PINASSIGNMENT_PWM5B 1
#define MW_EPWM_PINASSIGNMENT_PWM6A 1
#define MW_EPWM_PINASSIGNMENT_PWM6B 1
#define MW_EPWM_PINASSIGNMENT_PWM7A 1
#define MW_EPWM_PINASSIGNMENT_PWM7B 1
#define MW_EPWM_PINASSIGNMENT_PWM8A 1
#define MW_EPWM_PINASSIGNMENT_PWM8B 2
#define MW_ECAP_PINASSIGNMENT_ECAP1_IXBAR 6
#define MW_ECAP_PINASSIGNMENT_ECAP2_IXBAR 7
#define MW_ECAP_PINASSIGNMENT_ECAP3_IXBAR 8
#define MW_ECAP_PINASSIGNMENT_ECAP4_IXBAR 9
#define MW_ECAP_PINASSIGNMENT_ECAP5_IXBAR 10
#define MW_ECAP_PINASSIGNMENT_ECAP6_IXBAR 11
#define MW_ECAP_PINASSIGNMENT_ECAP7_IXBAR 12
#define MW_ECAP_PINASSIGNMENT_ECAP1 GPIO35
#define MW_ECAP_PINASSIGNMENT_ECAP2 GPIO37
#define MW_ECAP_PINASSIGNMENT_ECAP3 GPIO59
#define MW_ECAP_PINASSIGNMENT_ECAP4 GPIO14
#define MW_ECAP_PINASSIGNMENT_ECAP5 GPIO15
#define MW_ECAP_PINASSIGNMENT_ECAP6 GPIO26
#define MW_ECAP_PINASSIGNMENT_ECAP7 GPIO58
#define MW_ECAP_PINASSIGNMENT_APWM1 13
#define MW_ECAP_PINASSIGNMENT_APWM2 23
#define MW_ECAP_PINASSIGNMENT_APWM3 25
#define MW_ECAP_PINASSIGNMENT_APWM4 9
#define MW_ECAP_PINASSIGNMENT_APWM5 10
#define MW_ECAP_PINASSIGNMENT_APWM6 15
#define MW_ECAP_PINASSIGNMENT_APWM7 24
#define MW_EQEP_PINASSIGNMENT_EQEP1A 4
#define MW_EQEP_PINASSIGNMENT_EQEP1B 4
#define MW_EQEP_PINASSIGNMENT_EQEP1S 0
#define MW_EQEP_PINASSIGNMENT_EQEP1I 5
#define MW_EQEP_PINASSIGNMENT_EQEP2A 1
#define MW_EQEP_PINASSIGNMENT_EQEP2B 1
#define MW_EQEP_PINASSIGNMENT_EQEP2S 0
#define MW_EQEP_PINASSIGNMENT_EQEP2I 1
#define MW_I2C_MODE 0
#define MW_I2C_ADDRDATAFORMAT 0
#define MW_I2C_OWNADDRESS 1
#define MW_I2C_BITCOUNT 0
#define MW_I2C_MODULECLOCKPRESCALER 9
#define MW_I2C_MODULECLOCKFREQUENCY 10000000.000000
#define MW_I2C_MASTERCLKLOWTIME 10
#define MW_I2C_MASTERCLKHIGHTIME 10
#define MW_I2C_MASTERCLOCKFREQUENCY 333333.333333
#define MW_I2C_MASTERCLOCKFREQUENCY_1 333333.333333
#define MW_I2C_MASTERCLOCKFREQUENCY_2 333333.333333
#define MW_I2C_ENABLELOOPBACK 0
#define MW_I2C_PINASSIGNMENT_SDAA 4
#define MW_I2C_PINASSIGNMENT_SCLA 5
#define MW_I2C_ENABLETXINT 0
#define MW_I2C_TXFIFOLEVEL 16
#define MW_I2C_ENABLERXINT 0
#define MW_I2C_RXFIFOLEVEL 16
#define MW_I2C_ENABLESYSINT 0
#define MW_I2C_AAS 0
#define MW_I2C_SCD 0
#define MW_I2C_ARDY 0
#define MW_I2C_NACK 0
#define MW_I2C_AL 0
#define MW_SCI_A_ENABLELOOPBACK 0
#define MW_SCI_A_SUSPENSIONMODE 2
#define MW_SCI_A_NUMBEROFSTOPBITS 0
#define MW_SCI_A_PARITYMODE 0
#define MW_SCI_A_CHARACTERLENGTHBITS 0
#define MW_SCI_A_USERBAUDRATE 6250000
#define MW_SCI_A_BAUDRATEPRESCALER 1.000000
#define MW_SCI_A_BAUDRATE 6250000.000000
#define MW_SCI_A_COMMUNICATIONMODE 0
#define MW_SCI_A_BLOCKINGMODE 0
#define MW_SCI_A_DATABYTEORDER 0
#define MW_SCI_A_DATASWAPWIDTH 0
#define MW_SCI_A_PINASSIGNMENT_TX 5
#define MW_SCI_A_PINASSIGNMENT_RX 5
#define MW_SCI_B_ENABLELOOPBACK 0
#define MW_SCI_B_SUSPENSIONMODE 2
#define MW_SCI_B_NUMBEROFSTOPBITS 0
#define MW_SCI_B_PARITYMODE 0
#define MW_SCI_B_CHARACTERLENGTHBITS 0
#define MW_SCI_B_USERBAUDRATE 115200
#define MW_SCI_B_BAUDRATEPRESCALER 108.000000
#define MW_SCI_B_BAUDRATE 114679.000000
#define MW_SCI_B_COMMUNICATIONMODE 0
#define MW_SCI_B_BLOCKINGMODE 0
#define MW_SCI_B_DATABYTEORDER 0
#define MW_SCI_B_DATASWAPWIDTH 0
#define MW_SCI_B_PINASSIGNMENT_TX 7
#define MW_SCI_B_PINASSIGNMENT_RX 2
#define MW_SPI_A_MODE 0
#define MW_SPI_A_USERBAUDRATE 1843200
#define MW_SPI_A_BAUDRATEFACTOR 53.000000
#define MW_SPI_A_BAUDRATE 1851852.000000
#define MW_SPI_A_DATABITS 15
#define MW_SPI_A_CLOCKPOLARITY 
#define MW_SPI_A_CLOCKPHASE 
#define MW_SPI_A_SUSPENSIONMODE 2
#define MW_SPI_A_ENABLELOOPBACK 0
#define MW_SPI_A_ENABLETHREEWIRE 0
#define MW_SPI_A_TXINTERRUPTENABLE 0
#define MW_SPI_A_FIFOINTERRUPTLEVEL_TX 0
#define MW_SPI_A_RXINTERRUPTENABLE 0
#define MW_SPI_A_FIFOINTERRUPTLEVEL_RX 16
#define MW_SPI_A_ENABLEHIGHSPEEDMODE 1
#define MW_SPI_A_FIFOENABLE 1
#define MW_SPI_A_FIFOTRANSMITDELAY 0
#define MW_SPI_A_PINASSIGNMENT_SIMO 2
#define MW_SPI_A_PINASSIGNMENT_SOMI 2
#define MW_SPI_A_PINASSIGNMENT_CLK 4
#define MW_SPI_A_PINASSIGNMENT_STE 3
#define MW_SPI_A_PINVALUE_SIMO 16
#define MW_SPI_A_PINVALUE_SOMI 17
#define MW_SPI_A_PINVALUE_CLK 56
#define MW_SPI_A_PINVALUE_STE 57
#define MW_SPI_A_PINMUX_SIMO 1
#define MW_SPI_A_PINMUX_SOMI 1
#define MW_SPI_A_PINMUX_CLK 1
#define MW_SPI_A_PINMUX_STE 1
#define MW_SPI_A_FIFO_LEVEL 16.000000
#define MW_SPI_B_MODE 0
#define MW_SPI_B_USERBAUDRATE 1843200
#define MW_SPI_B_BAUDRATEFACTOR 53.000000
#define MW_SPI_B_BAUDRATE 1851852.000000
#define MW_SPI_B_DATABITS 15
#define MW_SPI_B_CLOCKPOLARITY 0
#define MW_SPI_B_CLOCKPHASE 0
#define MW_SPI_B_SUSPENSIONMODE 2
#define MW_SPI_B_ENABLELOOPBACK 0
#define MW_SPI_B_ENABLETHREEWIRE 0
#define MW_SPI_B_TXINTERRUPTENABLE 0
#define MW_SPI_B_FIFOINTERRUPTLEVEL_TX 0
#define MW_SPI_B_RXINTERRUPTENABLE 0
#define MW_SPI_B_FIFOINTERRUPTLEVEL_RX 16
#define MW_SPI_B_ENABLEHIGHSPEEDMODE 1
#define MW_SPI_B_FIFOENABLE 1
#define MW_SPI_B_FIFOTRANSMITDELAY 0
#define MW_SPI_B_PINASSIGNMENT_SIMO 2
#define MW_SPI_B_PINASSIGNMENT_SOMI 3
#define MW_SPI_B_PINASSIGNMENT_CLK 2
#define MW_SPI_B_PINASSIGNMENT_STE 2
#define MW_SPI_B_PINVALUE_SIMO 24
#define MW_SPI_B_PINVALUE_SOMI 31
#define MW_SPI_B_PINVALUE_CLK 22
#define MW_SPI_B_PINVALUE_STE 27
#define MW_SPI_B_PINMUX_SIMO 6
#define MW_SPI_B_PINMUX_SOMI 3
#define MW_SPI_B_PINMUX_CLK 6
#define MW_SPI_B_PINMUX_STE 6
#define MW_SPI_B_FIFO_LEVEL 16.000000
#define MW_ECAN_A_MODULECLOCKFREQUENCY 100
#define MW_ECAN_A_BAUDRATEPRESCALER 10.000000
#define MW_ECAN_A_TSEG1 4
#define MW_ECAN_A_TSEG2 3
#define MW_ECAN_A_BAUDRATE 1000000
#define MW_ECAN_A_SBG 0
#define MW_ECAN_A_SJW 1
#define MW_ECAN_A_SAM 0
#define MW_ECAN_A_ENHANCEDCANMODE 1
#define MW_ECAN_A_SELFTESTMODE 0
#define MW_ECAN_A_PINASSIGNMENT_TX 3
#define MW_ECAN_A_PINASSIGNMENT_RX 4
#define MW_ECAN_B_MODULECLOCKFREQUENCY 100
#define MW_ECAN_B_BAUDRATEPRESCALER 10.000000
#define MW_ECAN_B_TSEG1 4
#define MW_ECAN_B_TSEG2 3
#define MW_ECAN_B_BAUDRATE 1000000
#define MW_ECAN_B_SBG 0
#define MW_ECAN_B_SJW 1
#define MW_ECAN_B_SAM 0
#define MW_ECAN_B_ENHANCEDCANMODE 1
#define MW_ECAN_B_SELFTESTMODE 0
#define MW_ECAN_B_PINASSIGNMENT_TX 5
#define MW_ECAN_B_PINASSIGNMENT_RX 6
#define MW_SDFM1_F1 0
#define MW_SDFM1_D1 0
#define MW_SDFM1_C1 0
#define MW_SDFM1_F1_MODE 0
#define MW_SDFM1_F1_C_FILTERTYPE 1
#define MW_SDFM1_F1_COSR 0
#define MW_SDFM1_F1_HLT 0
#define MW_SDFM1_F1_LLT 0
#define MW_SDFM1_F1_HLTZ 0
#define MW_SDFM1_F1_D_FILTERTYPE 1
#define MW_SDFM1_F1_DOSR 0
#define MW_SDFM1_F1_FIFO 0
#define MW_SDFM1_F1_EXTPWM 0
#define MW_SDFM1_F1_EXTPWM_MOD 0
#define MW_SDFM1_F1_IEL 0
#define MW_SDFM1_F1_IEH 0
#define MW_SDFM1_F1_IEHZ 0
#define MW_SDFM1_F1_MFIE 0
#define MW_SDFM1_F1_AE 0
#define MW_SDFM1_F2 0
#define MW_SDFM1_D2 0
#define MW_SDFM1_C2 0
#define MW_SDFM1_F2_MODE 0
#define MW_SDFM1_F2_C_FILTERTYPE 1
#define MW_SDFM1_F2_COSR 0
#define MW_SDFM1_F2_HLT 0
#define MW_SDFM1_F2_LLT 0
#define MW_SDFM1_F2_HLTZ 0
#define MW_SDFM1_F2_D_FILTERTYPE 1
#define MW_SDFM1_F2_DOSR 0
#define MW_SDFM1_F2_FIFO 0
#define MW_SDFM1_F2_EXTPWM 0
#define MW_SDFM1_F2_EXTPWM_MOD 0
#define MW_SDFM1_F2_IEL 0
#define MW_SDFM1_F2_IEH 0
#define MW_SDFM1_F2_IEHZ 0
#define MW_SDFM1_F2_MFIE 0
#define MW_SDFM1_F2_AE 0
#define MW_SDFM1_F3 0
#define MW_SDFM1_D3 0
#define MW_SDFM1_C3 0
#define MW_SDFM1_F3_MODE 0
#define MW_SDFM1_F3_C_FILTERTYPE 1
#define MW_SDFM1_F3_COSR 0
#define MW_SDFM1_F3_HLT 0
#define MW_SDFM1_F3_LLT 0
#define MW_SDFM1_F3_HLTZ 0
#define MW_SDFM1_F3_D_FILTERTYPE 1
#define MW_SDFM1_F3_DOSR 0
#define MW_SDFM1_F3_FIFO 0
#define MW_SDFM1_F3_EXTPWM 0
#define MW_SDFM1_F3_EXTPWM_MOD 0
#define MW_SDFM1_F3_IEL 0
#define MW_SDFM1_F3_IEH 0
#define MW_SDFM1_F3_IEHZ 0
#define MW_SDFM1_F3_MFIE 0
#define MW_SDFM1_F3_AE 0
#define MW_SDFM1_F4 0
#define MW_SDFM1_D4 0
#define MW_SDFM1_C4 0
#define MW_SDFM1_F4_MODE 0
#define MW_SDFM1_F4_C_FILTERTYPE 1
#define MW_SDFM1_F4_COSR 0
#define MW_SDFM1_F4_HLT 0
#define MW_SDFM1_F4_LLT 0
#define MW_SDFM1_F4_HLTZ 0
#define MW_SDFM1_F4_D_FILTERTYPE 1
#define MW_SDFM1_F4_DOSR 0
#define MW_SDFM1_F4_FIFO 0
#define MW_SDFM1_F4_EXTPWM 0
#define MW_SDFM1_F4_EXTPWM_MOD 0
#define MW_SDFM1_F4_IEL 0
#define MW_SDFM1_F4_IEH 0
#define MW_SDFM1_F4_IEHZ 0
#define MW_SDFM1_F4_MFIE 0
#define MW_SDFM1_F4_AE 0
#define MW_SDFM1_PINVALUE_D1 16
#define MW_SDFM1_PINVALUE_C1 17
#define MW_SDFM1_PINVALUE_D2 18
#define MW_SDFM1_PINVALUE_C2 27
#define MW_SDFM1_PINVALUE_D3 28
#define MW_SDFM1_PINVALUE_C3 29
#define MW_SDFM1_PINVALUE_D4 22
#define MW_SDFM1_PINVALUE_C4 31
#define MW_SDFM1_PINMUX_D1 7
#define MW_SDFM1_PINMUX_C1 7
#define MW_SDFM1_PINMUX_D2 7
#define MW_SDFM1_PINMUX_C2 7
#define MW_SDFM1_PINMUX_D3 7
#define MW_SDFM1_PINMUX_C3 7
#define MW_SDFM1_PINMUX_D4 7
#define MW_SDFM1_PINMUX_C4 7
#define MW_WATCHDOG_ENABLE_WATCHDOG 0
#define MW_WATCHDOG_WATCHDOGCLOCKPREDIVIDER 8
#define MW_WATCHDOG_WATCHDOGCLOCKPRESCALER 0
#define MW_WATCHDOG_WATCHDOGCLOCK OSCCLK/512/1
#define MW_WATCHDOG_TIME_PERIOD 0.013107
#define MW_WATCHDOG_WATCHDOGEVENT 0
#define MW_GPIO0_7_GPIOQUALSEL0 0
#define MW_GPIO0_7_GPIOQUALSEL1 0
#define MW_GPIO0_7_GPIOQUALSEL2 0
#define MW_GPIO0_7_GPIOQUALSEL3 0
#define MW_GPIO0_7_GPIOQUALSEL4 0
#define MW_GPIO0_7_GPIOQUALSEL5 0
#define MW_GPIO0_7_GPIOQUALSEL6 0
#define MW_GPIO0_7_GPIOQUALSEL7 0
#define MW_GPIO0_7_QUALPRD 0
#define MW_GPIO8_15_GPIOQUALSEL8 0
#define MW_GPIO8_15_GPIOQUALSEL9 0
#define MW_GPIO8_15_GPIOQUALSEL10 0
#define MW_GPIO8_15_GPIOQUALSEL11 0
#define MW_GPIO8_15_GPIOQUALSEL12 0
#define MW_GPIO8_15_GPIOQUALSEL13 0
#define MW_GPIO8_15_GPIOQUALSEL14 0
#define MW_GPIO8_15_GPIOQUALSEL15 0
#define MW_GPIO8_15_QUALPRD 0
#define MW_GPIO16_23_GPIOQUALSEL16 0
#define MW_GPIO16_23_GPIOQUALSEL17 0
#define MW_GPIO16_23_GPIOQUALSEL18 0
#define MW_GPIO16_23_GPIOQUALSEL19 0
#define MW_GPIO16_23_GPIOQUALSEL20 0
#define MW_GPIO16_23_GPIOQUALSEL21 0
#define MW_GPIO16_23_GPIOQUALSEL22 0
#define MW_GPIO16_23_GPIOQUALSEL23 0
#define MW_GPIO16_23_QUALPRD 0
#define MW_GPIO24_31_GPIOQUALSEL24 0
#define MW_GPIO24_31_GPIOQUALSEL25 0
#define MW_GPIO24_31_GPIOQUALSEL26 0
#define MW_GPIO24_31_GPIOQUALSEL27 0
#define MW_GPIO24_31_GPIOQUALSEL28 0
#define MW_GPIO24_31_GPIOQUALSEL29 0
#define MW_GPIO24_31_GPIOQUALSEL30 0
#define MW_GPIO24_31_GPIOQUALSEL31 0
#define MW_GPIO24_31_QUALPRD 0
#define MW_GPIO32_39_GPIOQUALSEL32 0
#define MW_GPIO32_39_GPIOQUALSEL33 0
#define MW_GPIO32_39_GPIOQUALSEL34 0
#define MW_GPIO32_39_GPIOQUALSEL35 0
#define MW_GPIO32_39_GPIOQUALSEL37 0
#define MW_GPIO32_39_GPIOQUALSEL39 0
#define MW_GPIO32_39_QUALPRD 0
#define MW_GPIO40_47_GPIOQUALSEL40 0
#define MW_GPIO40_47_GPIOQUALSEL41 0
#define MW_GPIO40_47_GPIOQUALSEL42 0
#define MW_GPIO40_47_GPIOQUALSEL43 0
#define MW_GPIO40_47_GPIOQUALSEL44 0
#define MW_GPIO40_47_GPIOQUALSEL45 0
#define MW_GPIO40_47_GPIOQUALSEL46 0
#define MW_GPIO40_47_GPIOQUALSEL47 0
#define MW_GPIO40_47_QUALPRD 0
#define MW_GPIO48_55_GPIOQUALSEL48 0
#define MW_GPIO48_55_GPIOQUALSEL49 0
#define MW_GPIO48_55_GPIOQUALSEL50 0
#define MW_GPIO48_55_GPIOQUALSEL51 0
#define MW_GPIO48_55_GPIOQUALSEL52 0
#define MW_GPIO48_55_GPIOQUALSEL53 0
#define MW_GPIO48_55_GPIOQUALSEL54 0
#define MW_GPIO48_55_GPIOQUALSEL55 0
#define MW_GPIO48_55_QUALPRD 0
#define MW_GPIO56_63_GPIOQUALSEL56 0
#define MW_GPIO56_63_GPIOQUALSEL57 0
#define MW_GPIO56_63_GPIOQUALSEL58 0
#define MW_GPIO56_63_GPIOQUALSEL59 0
#define MW_GPIO56_63_QUALPRD 0
#define MW_DMA_CH1_ENABLEDMACHANNEL 0
#define MW_DMA_CH1_DATASIZE 0
#define MW_DMA_CH1_INTERRUPTSRC 0
#define MW_DMA_CH1_BURSTSIZE 0
#define MW_DMA_CH1_TRANSFERSIZE 1
#define MW_DMA_CH1_SRCBEGINADD 0xC000
#define MW_DMA_CH1_DSTBEGINADD 0xD000
#define MW_DMA_CH1_SRCBURSTSTEP 0
#define MW_DMA_CH1_DSTBURSTSTEP 0
#define MW_DMA_CH1_SRCTRANSSTEP 0
#define MW_DMA_CH1_DSTTRANSSTEP 0
#define MW_DMA_CH1_WRAPSRCSIZE 65536
#define MW_DMA_CH1_WRAPDSTSIZE 65536
#define MW_DMA_CH1_SRCWRAPSTEP 0
#define MW_DMA_CH1_DSTWRAPSTEP 0
#define MW_DMA_CH1_SETCH1TOHIGH 0
#define MW_DMA_CH1_ENABLEONESHOT 0
#define MW_DMA_CH1_ENABLECONTINUOUS 1
#define MW_DMA_CH1_GENINTERRUPT 0
#define MW_DMA_CH1_ENABLEOVERFLOW 0
#define MW_DMA_CH2_ENABLEDMACHANNEL 0
#define MW_DMA_CH2_DATASIZE 0
#define MW_DMA_CH2_INTERRUPTSRC 0
#define MW_DMA_CH2_BURSTSIZE 0
#define MW_DMA_CH2_TRANSFERSIZE 1
#define MW_DMA_CH2_SRCBEGINADD 0xC000
#define MW_DMA_CH2_DSTBEGINADD 0xD000
#define MW_DMA_CH2_SRCBURSTSTEP 0
#define MW_DMA_CH2_DSTBURSTSTEP 0
#define MW_DMA_CH2_SRCTRANSSTEP 0
#define MW_DMA_CH2_DSTTRANSSTEP 0
#define MW_DMA_CH2_WRAPSRCSIZE 65536
#define MW_DMA_CH2_WRAPDSTSIZE 65536
#define MW_DMA_CH2_SRCWRAPSTEP 0
#define MW_DMA_CH2_DSTWRAPSTEP 0
#define MW_DMA_CH2_ENABLEONESHOT 0
#define MW_DMA_CH2_ENABLECONTINUOUS 1
#define MW_DMA_CH2_GENINTERRUPT 0
#define MW_DMA_CH2_ENABLEOVERFLOW 0
#define MW_DMA_CH3_ENABLEDMACHANNEL 0
#define MW_DMA_CH3_DATASIZE 0
#define MW_DMA_CH3_INTERRUPTSRC 0
#define MW_DMA_CH3_BURSTSIZE 0
#define MW_DMA_CH3_TRANSFERSIZE 1
#define MW_DMA_CH3_SRCBEGINADD 0xC000
#define MW_DMA_CH3_DSTBEGINADD 0xD000
#define MW_DMA_CH3_SRCBURSTSTEP 0
#define MW_DMA_CH3_DSTBURSTSTEP 0
#define MW_DMA_CH3_SRCTRANSSTEP 0
#define MW_DMA_CH3_DSTTRANSSTEP 0
#define MW_DMA_CH3_WRAPSRCSIZE 65536
#define MW_DMA_CH3_WRAPDSTSIZE 65536
#define MW_DMA_CH3_SRCWRAPSTEP 0
#define MW_DMA_CH3_DSTWRAPSTEP 0
#define MW_DMA_CH3_ENABLEONESHOT 0
#define MW_DMA_CH3_ENABLECONTINUOUS 1
#define MW_DMA_CH3_GENINTERRUPT 0
#define MW_DMA_CH3_ENABLEOVERFLOW 0
#define MW_DMA_CH4_ENABLEDMACHANNEL 0
#define MW_DMA_CH4_DATASIZE 0
#define MW_DMA_CH4_INTERRUPTSRC 0
#define MW_DMA_CH4_BURSTSIZE 0
#define MW_DMA_CH4_TRANSFERSIZE 1
#define MW_DMA_CH4_SRCBEGINADD 0xC000
#define MW_DMA_CH4_DSTBEGINADD 0xD000
#define MW_DMA_CH4_SRCBURSTSTEP 0
#define MW_DMA_CH4_DSTBURSTSTEP 0
#define MW_DMA_CH4_SRCTRANSSTEP 0
#define MW_DMA_CH4_DSTTRANSSTEP 0
#define MW_DMA_CH4_WRAPSRCSIZE 65536
#define MW_DMA_CH4_WRAPDSTSIZE 65536
#define MW_DMA_CH4_SRCWRAPSTEP 0
#define MW_DMA_CH4_DSTWRAPSTEP 0
#define MW_DMA_CH4_ENABLEONESHOT 0
#define MW_DMA_CH4_ENABLECONTINUOUS 1
#define MW_DMA_CH4_GENINTERRUPT 0
#define MW_DMA_CH4_ENABLEOVERFLOW 0
#define MW_DMA_CH5_ENABLEDMACHANNEL 0
#define MW_DMA_CH5_DATASIZE 0
#define MW_DMA_CH5_INTERRUPTSRC 0
#define MW_DMA_CH5_BURSTSIZE 0
#define MW_DMA_CH5_TRANSFERSIZE 1
#define MW_DMA_CH5_SRCBEGINADD 0xC000
#define MW_DMA_CH5_DSTBEGINADD 0xD000
#define MW_DMA_CH5_SRCBURSTSTEP 0
#define MW_DMA_CH5_DSTBURSTSTEP 0
#define MW_DMA_CH5_SRCTRANSSTEP 0
#define MW_DMA_CH5_DSTTRANSSTEP 0
#define MW_DMA_CH5_WRAPSRCSIZE 65536
#define MW_DMA_CH5_WRAPDSTSIZE 65536
#define MW_DMA_CH5_SRCWRAPSTEP 0
#define MW_DMA_CH5_DSTWRAPSTEP 0
#define MW_DMA_CH5_ENABLEONESHOT 0
#define MW_DMA_CH5_ENABLECONTINUOUS 1
#define MW_DMA_CH5_GENINTERRUPT 0
#define MW_DMA_CH5_ENABLEOVERFLOW 0
#define MW_DMA_CH6_ENABLEDMACHANNEL 0
#define MW_DMA_CH6_DATASIZE 0
#define MW_DMA_CH6_INTERRUPTSRC 0
#define MW_DMA_CH6_BURSTSIZE 0
#define MW_DMA_CH6_TRANSFERSIZE 1
#define MW_DMA_CH6_SRCBEGINADD 0xC000
#define MW_DMA_CH6_DSTBEGINADD 0xD000
#define MW_DMA_CH6_SRCBURSTSTEP 0
#define MW_DMA_CH6_DSTBURSTSTEP 0
#define MW_DMA_CH6_SRCTRANSSTEP 0
#define MW_DMA_CH6_DSTTRANSSTEP 0
#define MW_DMA_CH6_WRAPSRCSIZE 65536
#define MW_DMA_CH6_WRAPDSTSIZE 65536
#define MW_DMA_CH6_SRCWRAPSTEP 0
#define MW_DMA_CH6_DSTWRAPSTEP 0
#define MW_DMA_CH6_ENABLEONESHOT 0
#define MW_DMA_CH6_ENABLECONTINUOUS 1
#define MW_DMA_CH6_GENINTERRUPT 0
#define MW_DMA_CH6_ENABLEOVERFLOW 0
#define MW_XINT_GPIOXINT1SEL_IXBAR 0
#define MW_XINT_GPIOXINT2SEL_IXBAR 0
#define MW_XINT_GPIOXINT3SEL_IXBAR 0
#define MW_XINT_GPIOXINT4SEL_IXBAR 0
#define MW_XINT_GPIOXINT5SEL_IXBAR 0
#define MW_XINT_GPIOXINT1SEL 58
#define MW_XINT_GPIOXINT2SEL 58
#define MW_XINT_GPIOXINT3SEL 58
#define MW_XINT_GPIOXINT4SEL 56
#define MW_XINT_GPIOXINT5SEL 58
#define MW_XINT_POLARITY1 0
#define MW_XINT_POLARITY2 0
#define MW_XINT_POLARITY3 0
#define MW_XINT_POLARITY4 0
#define MW_XINT_POLARITY5 0
#define MW_PIL_COMMUNICATIONINTERFACE 0
#define MW_PIL_SCIMODULE 0
#define MW_PIL_COMPORT COM6
#define MW_EXTMODECOMPORT -1
#define MW_EXECUTIONPROFILEBUFFERLEN 50.000000
#define MW_SDCARD_ENABLE 0
#define MW_SDCARD_SPIMODULE 0
#define MW_SDCARD_SPIBAUDRATE 1
#define MW_OVERRUNDETECTION_ENABLE_OVERRUN_DETECTION 0
#define MW_OVERRUNDETECTION_CHECK_GPIO_STATUS 1
#define MW_OVERRUNDETECTION_DIGITAL_OUTPUT_TO_SET_ON_OVERRUN 34
#define MW_OVERRUNDETECTION_GPIOMODE 0
#define MW_OVERRUNDETECTION_CUSTOM_LOGIC 0
#define MW_OVERRUNDETECTION_PIE_NUMBER 0
#define MW_OVERRUNDETECTION_CPU_NUMBER 0
#define MW_OVERRUNDETECTION_CUSTOM_FUNCTION c2000_OverrunFunction
#define MW_DATAVERSION 2016.02

#endif /* __MW_TARGET_HARDWARE_RESOURCES_H__ */

#endif

#endif
