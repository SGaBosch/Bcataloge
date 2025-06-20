/**************************************************************************************************\
 *** Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
 *** All rights reserved
 ***
 *** Generated by: Rajasridevi Vasupal (RBEI/EPS1)
 ***
 *** Generated with:
 *** MathWorks MATLAB                            8.6 (R2015b)
 *** dSPACE TargetLink Production Code Generator 4.2p4
 *** AS --- MBSD environment                     R1801p1
 *** AS --- DataDictionary structure level       3
 *** AS --- Environment base                     \sgdcc_mbsd\DevEnv\R1801\TargetLink
 *** AS ---    AS_BaseTypeRename.dd              27-Apr-2018 13:34:30
 *** AS ---    AS_FunctionClasses.dd             27-Apr-2018 13:34:30
 *** AS ---    AS_Templates.dd                   27-Apr-2018 13:34:31
 *** AS ---    AS_VariableClasses.dd             27-Apr-2018 13:34:32
 *** AS --- Environment configuration SDK        \sgdcc_eps_sdk\EpsDriveSW\EnvironmentSet\MBSD\R1801\TargetLinkSdkConf
 *** AS ---    asFunctionLib.slx                 05-Aug-2019 16:48:54
 *** AS ---    AS_Defines.dd                     28-Apr-2020 17:09:01
 *** AS ---    AS_DefinesDataFlow.dd             16-Mar-2020 16:39:48
 *** AS ---    AS_GlobalModuleOwn.dd             24-Feb-2020 11:58:51
 *** AS ---    AS_GlobalModules.dd               28-Apr-2020 17:09:02
 *** AS ---    AS_GlobalTypes.dd                 21-Feb-2020 15:18:53
 *** AS --- Environment configuration CPR        \sgdcc_eps_sdk_dev\EpsDriveSW\EnvironmentSet\MBSD\R1801\TargetLinkCprConf
 *** AS ---    AS_ProjModuleOwn.dd               03-May-2018 20:53:34
 *** AS ---    AS_ProjModules.dd                 03-May-2018 20:53:42
 *** AS ---    AS_ProjVariables.dd               03-May-2018 20:53:47
\**************************************************************************************************/
/**************************************************************************************************\
 *** 
 *** Simulink model       : ActiveReturn_sm
 *** TargetLink subsystem : ActiveReturn_sm/ActiveReturn
 *** Codefile             : ActiveReturn_lut_gg.h
 ***
 *** Generated by TargetLink, the dSPACE production quality code generator
 *** Generation date: 2020-06-08 15:55:28
 ***
 *** CODE GENERATOR OPTIONS:
 *** Code generation mode                     : Standard
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
 *** Shift mode                               : automatic
 *** Handle unscaled SF expr. with TL type    : enabled
 *** Assignment of conditions                 : None
 *** Scope reduction only to function level   : disabled
 *** Exploit ranges if not erasable           : disabled
 *** Exploit Compute Through Overflow         : optimized
 *** Linker sections                          : disabled
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
 *** Style definition file                    : C:\Program Files\dSPACE TargetLink 4.2\Matlab\Tl\Con
 ***                                            fig\codegen\cconfig.xml
 *** Root style sheet                         : O:\sgdcc_mbsd\DevEnv\R1801\TargetLink\Stylesheets\TL
 ***                                            _CSourceCodeSS_AS.xsl
 ***
 *** TargetLink version      : 4.2p4 from 17-Jan-2019
 *** Code generator version  : Build Id 4.2.0.35 from 2019-01-16 19:04:11

\**************************************************************************************************/

/* The following MISRA warnings are ignored for autogenerated code. */
/* It has been checked that their removal is safe for autocode. */
/* PRQA S 272, 295, 502, 614, 715, 3101, 3102, 3201, 3344 ++ */
/* PRQA S 3358, 3359, 3757, 3784, 4131, 7000, 7001 ++ */

#ifndef ACTIVERETURN_LUT_GG_H
#define ACTIVERETURN_LUT_GG_H

/*----------------------------------------------------------------------------*\
  DEFINES (OPT)
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  INCLUDES
\*----------------------------------------------------------------------------*/

#include "types_aehcc_hh.h"

/*----------------------------------------------------------------------------*\
  ENUMS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  DEFINES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  TYPEDEFS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  VARIABLES
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  PARAMETERIZED MACROS
\*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*\
  FUNCTION PROTOTYPES
\*----------------------------------------------------------------------------*/

/******************************************************************************\
   GlobalLookup1D_ActRet: Derived TL_CG default function class.
\******************************************************************************/
extern tUI16 Tab1DIntp2I1T65_ActRet(const tUI16 * z_table, tUI8 irx, tUI16 fractionX);

extern tUI16 Tab2DIntp2I1T33281_ActRet(const tUI16 * z_table, tUI8 N, tUI8 irx, tUI16 fractionX,
    tUI8 iry, tUI16 fractionY);

/******************************************************************************\
   GlobalLookup1D_ActRet: Derived TL_CG default function class.
\******************************************************************************/
extern void TabIdxS48T513_ActRet(const tUI16 * x_table, tUI8 N, tUI16 x, tUI8 * irx, tUI16 *
    fraction);

#endif /* ACTIVERETURN_LUT_GG_H */
/*----------------------------------------------------------------------------*\
  END OF FILE
\*----------------------------------------------------------------------------*/
