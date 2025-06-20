/**************************************************************************************************\
 *** Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
 *** All rights reserved
 ***
 *** Generated by: Thachethu Anilkumar Praveen (MS/EPP10-AS)
 ***
 *** Generated with:
 *** MathWorks MATLAB                            9.9 (R2020b)
 *** dSPACE TargetLink Production Code Generator 5.1p2
 *** AS --- MBSD environment                     R2301-hotfix2
 *** AS --- DataDictionary structure level       5
 *** AS --- MBSD repository
 *** AS ---    sourcecode02.de.bosch.com/projects/MBSD/repos/mbsd/browse?at=537712056067caf70571199527af8b914a901532
 *** AS --- Train repository
 *** AS ---    sourcecode02.de.bosch.com/projects/ASMPAPP/repos/app-train/browse?at=af177b3fa99f7fc68559711641311f95b7cad523
\**************************************************************************************************/
/**************************************************************************************************\
 *** 
 *** Simulink model       : ActiveReturn_sm
 *** TargetLink subsystem : ActiveReturn_sm/ActiveReturn
 *** Codefile             : IActRet_Main_gg.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2023-05-24 16:36:02
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Classic AUTOSAR
 *** AUTOSAR version                          : 4.3.0
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
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 5.1\Matlab\Tl\Con
 ***                                            fig\codegen\cconfig.xml
 *** Root style sheet                         : C:\Program Files\dSPACE TargetLink 5.1\Matlab\Tl\XML
 ***                                            \CodeGen\Stylesheets\TL_CSourceCodeSS.xsl
 ***
 *** TargetLink version      : 5.1p2 from 24-Jan-2022
 *** Code generator version  : Build Id 5.1.0.30 from 2022-01-24 15:16:38
\**************************************************************************************************/

#ifndef IACTRET_MAIN_GG_H
#define IACTRET_MAIN_GG_H

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
#define ActiveReturn_START_SEC_CODE
#include "ActiveReturn_MemMap.h"
/**************************************************************************************************\
   ARRunnable4: Default function class for AUTOSAR runnables
\**************************************************************************************************/
FUNC(void, ActiveReturn_CODE) ActRetI_CalcActiveReturnTorque(void);

FUNC(void, ActiveReturn_CODE) ActRetI_InterpolCharacteristics(void);

/* end of memory section 'CODE' */
#define ActiveReturn_STOP_SEC_CODE
#include "ActiveReturn_MemMap.h"

#endif /* IACTRET_MAIN_GG_H */
/*------------------------------------------------------------------------------------------------*\
  END OF FILE
\*------------------------------------------------------------------------------------------------*/

