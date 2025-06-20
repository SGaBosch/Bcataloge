/**************************************************************************************************\
 *** Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
 *** All rights reserved
 ***
 *** Generated by: Raghul Gnanaseelan (MS/ESP3-VM)
 ***
 *** Generated with:
 *** MathWorks MATLAB                            23.2.0.2668659 (R2023b) Update 9
 *** dSPACE TargetLink Production Code Generator 23.1p2 (Release 2023-B)
 *** AS --- MBSD environment                     R2402
 *** AS --- MBSD version (tag or branch:commit)  R2402-RC2:dca08e23
 *** AS --- Train project/repo                   ASMPAPP/asmp-dev
 *** AS --- Train version (tag or branch:commit) develop:901d3eaf
\**************************************************************************************************/
/**************************************************************************************************\
 *** 
 *** Simulink model       : ActiveReturnCheck_sm
 *** TargetLink subsystem : ActiveReturnCheck_sm/ActiveReturnCheck
 *** Codefile             : IActRet_Check_gg.h
 *** Language             : C
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2024-09-04 17:30:21
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Classic AUTOSAR
 *** AUTOSAR version                          : 22-11
 *** Compiler                                 : <unknown>
 *** Target                                   : Generic
 *** ANSI-C compatible code                   : yes
 *** Code Optimization                        : enabled
 *** Constant style                           : decimal
 *** Clean code option                        : enabled
 *** Logging mode                             : Do not log anything
 *** Code Coverage                            : disabled
 *** Generate empty conditional branches      : disabled
 *** Loop unroll threshold                    : 5
 *** Utilize bitwise shift operations         : AvoidPotentiallyUndefinedShiftsBasedOnWorstCaseRange
 s
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : AllBooleanOutputs 
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : enabled
 *** Enable Assembler                         : disabled
 *** Variable name length                     : unlimited
 *** Use global bitfields                     : disabled
 *** Stateflow: use of bitfields              : disabled
 *** State activity encoding limit            : 1
 *** Omit zero inits in restart function      : disabled
 *** Share functions between TL subsystems    : disabled
 *** Generate 64bit functions                 : enabled
 *** Inlining Threshold                       : 100
 *** Line break limit                         : 100
 *** Target optimized boolean data type       : enabled
 *** Keep saturation elements                 : disabled
 *** Extended variable sharing                : disabled
 *** Extended lifetime optimization           : enabled
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 2023-B\Matlab\Tl\
 ***                                            config\codegen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 2023-B\Matlab\Tl\
 ***                                            XML\CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 23.1p2 from 23-May-2024
 *** Code generator version  : Build Id 23.1.0.24 from 2024-05-16 17:28:10
\**************************************************************************************************/

#ifndef IACTRET_CHECK_GG_H
#define IACTRET_CHECK_GG_H

/*------------------------------------------------------------------------------------------------*\
  DEFINES (OPT)
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  INCLUDES
\*------------------------------------------------------------------------------------------------*/

#include "Rte_Type.h"

/*------------------------------------------------------------------------------------------------*\
  ENUMS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  DEFINES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  TYPEDEFS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  VARIABLES
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*------------------------------------------------------------------------------------------------*/
/*------------------------------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*------------------------------------------------------------------------------------------------*/

/* start of memory section 'CODE' */
#define ActiveReturnCheck_START_SEC_CODE
#include "ActiveReturnCheck_MemMap.h"
/**************************************************************************************************\
   ARRunnable4: Default function class for AUTOSAR runnables
\**************************************************************************************************/
FUNC(void, ActiveReturnCheck_CODE) ActRetI_DisableSwitch(void);

FUNC(void, ActiveReturnCheck_CODE) ActRetI_Monitoring(void);

FUNC(void, ActiveReturnCheck_CODE) ActRetI_Saturation(void);

/* end of memory section 'CODE' */
#define ActiveReturnCheck_STOP_SEC_CODE
#include "ActiveReturnCheck_MemMap.h"

#endif /* IACTRET_CHECK_GG_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/

