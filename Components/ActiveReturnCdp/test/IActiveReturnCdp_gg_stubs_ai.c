#include "Rte_ActiveReturnCdp.h"
#include "IActiveReturnCdp_gg.h"

typedef unsigned short  uint16;
typedef signed short  sint16;
typedef unsigned long uint32;
typedef signed long sint32;
typedef unsigned char uint8;
typedef signed char sint8;
typedef _Bool boolean;

uint16  FilFac_Val;

uint8 MaxMotTrq_Val;

uint16  MaxMotTrqDepOnSteerAng_Val;

uint16  MaxMotTrqDepOnVehSpd_Val;

IDT_AbsMaxSafeVehSpd AbsMaxSafeVehSpd;

uint8  MaxTBT4ShtDwn_Val;

uint16  MotTrqGain_Val;

IDT_AbsAvgVehSpd AbsAvgVehSpd;

uint16  NomSteerSpd_Val;

IDT_AbsSteerAng AbsSteerAng;

uint16  RetTrqFactDepOnDrvr_Val;

IDT_AbsDrvrTrq AbsDrvrTrq;

uint16  SteerSpdFactDepOnDrvr_Val;

uint16  SteerSpdGradAftInvld_Val;

uint16  SteerSpdAmp_Val;

uint8  SteerSpdFact_Val;

IDT_MaxMotTrqAftLoadFac  MaxMotTrqAftLoadFac_Val;


typedef sint16 IDT_ActvRetMotTrq4Chk;
typedef sint16 IDT_ActvRetRetSpdDiff;
typedef uint16 IDT_MotTrqGain;
typedef sint32 IDT_ActvRetSpdFacFilt;
typedef sint32 IDT_ActvRetTrqFacFilt;
typedef uint16 IDT_MaxMotTrqDepOnSteerAng[5];
typedef uint16 IDT_MaxMotTrqDepOnSteerAng_AxisX[5];
typedef uint16 IDT_MaxMotTrqDepOnVehSpd[5];
typedef uint16 IDT_MaxMotTrqDepOnVehSpd_AxisX[5];
typedef uint8 IDT_MaxMotTrq;
typedef uint8 IDT_MaxTBT4ShtDwn;
typedef uint16 IDT_NomSteerSpd_Row[13];
typedef IDT_NomSteerSpd_Row IDT_NomSteerSpd[6];
typedef uint16 IDT_NomSteerSpd_AxisX[6];
typedef uint16 IDT_NomSteerSpd_AxisY[13];
typedef uint16 IDT_FilFac;
typedef uint16 IDT_MotTrqGain_Crv[6];
typedef uint16 IDT_MotTrqGain_AxisX[6];
typedef uint16 IDT_RetTrqFactDepOnDrvr[6];
typedef uint16 IDT_RetTrqFactDepOnDrvr_AxisX[6];
typedef uint16 IDT_RetTrqFactDepOnDrvr_AxisY[3];
typedef uint16 IDT_SteerSpdFactDepOnDrvr[6];
typedef uint16 IDT_SteerSpdFactDepOnDrvr_AxisX[6];
typedef uint16 IDT_SteerSpdFactDepOnDrvr_AxisY[3];
typedef uint16 IDT_SteerSpdGradAftInvld;
typedef uint16 IDT_SteerSpdAmp;
typedef uint8 IDT_SteerSpdFact;
typedef boolean IDT_ActvRetDi;
typedef sint16 IDT_ActvRetMotTrq;
typedef sint16 IDT_MotTrqSatn;
typedef uint16 IDT_AbsDrvrTrq;
typedef sint16 IDT_DrvrTrq;
typedef sint16 IDT_TorsBarTrq;
typedef uint8 IDT_SteerAngSt;
typedef sint16 IDT_SteeringAngSpd;
typedef uint16 IDT_AbsAvgVehSpd;
typedef uint16 IDT_AbsMaxSafeVehSpd;
typedef uint16 IDT_AbsSteerAng;
typedef sint16 IDT_SteerAngle;
typedef sint8 IDT_GearSign;
typedef uint16 IDT_ActvRetFuncFac;
typedef uint16 IDT_ActvRetSpdFac;

#define FUNC_P2CONST(rettype, ptrclass, memclass)  const rettype *
#define P2CONST(ptrtype, memclass, ptrclass)  const ptrtype *
#define FUNC(rettype, memclass)  rettype
#define VAR(type, memclass)  type
#define CONST(type, memclass)  const type
#define RTE_CALIB
#define RTE_CODE
#define AUTOMATIC

volatile CONST(IDT_MaxMotTrq, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqA = { 64 };
volatile CONST(IDT_MaxMotTrq, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqB = { 64 };
volatile CONST(IDT_MaxMotTrq, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqC = { 64 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngA = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngA_AxisX = { 0, 1000, 2000, 3000, 5000 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngB = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngB_AxisX = { 0, 1000, 2000, 3000, 5000 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngC = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnSteerAng_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngC_AxisX = { 0, 1000, 2000, 3000, 5000 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdA = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdA_AxisX = { 0, 640, 2560, 5760, 6400 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdB = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdB_AxisX = { 0, 640, 2560, 5760, 6400 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdC = { 512, 512, 512, 512, 512 };
volatile CONST(IDT_MaxMotTrqDepOnVehSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdC_AxisX = { 0, 640, 2560, 5760, 6400 };
volatile CONST(IDT_MaxTBT4ShtDwn, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnA = { 128 };
volatile CONST(IDT_MaxTBT4ShtDwn, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnB = { 128 };
volatile CONST(IDT_MaxTBT4ShtDwn, RTE_CALIB) ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnC = { 128 };
volatile CONST(IDT_NomSteerSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdA = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 1308.1600000000001, 2059.52, 2728.3200000000002, 3321.5999999999999, 3747.8400000000001, 4074.2399999999998, 4354.5600000000004, 4634.8800000000001, 4915.1999999999998, 5068.8000000000002, 5222.3999999999996, 5376 }, { 0, 1344.498, 2116.7289999999998, 2804.1060000000002, 3413.866, 3851.9459999999999, 4187.4139999999998, 4475.5200000000004, 4763.6260000000002, 5051.7340000000004, 5209.6000000000004, 5367.4660000000003, 5525.3339999999998 }, { 0, 1199.146, 1887.894, 2500.96, 3044.8000000000002, 3435.52, 3734.7199999999998, 3991.6799999999998, 4248.6400000000003, 4505.6000000000004, 4646.3999999999996, 4787.1999999999998, 4928 }, { 0, 1008.374, 1587.546, 2103.0799999999999, 2560.4000000000001, 2888.96, 3140.5599999999999, 3356.6399999999999, 3572.7199999999998, 3788.8000000000002, 3907.1999999999998, 4025.5999999999999, 4144 }, { 0, 681.33360000000005, 1072.6659999999999, 1421, 1730, 1952, 2122, 2268, 2414.0500000000002, 2560, 2640, 2720, 2800 } };
volatile CONST(IDT_NomSteerSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdA_AxisX = { 0, 1024, 2048, 3072, 4096, 5120 };
volatile CONST(IDT_NomSteerSpd_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdA_AxisY = { 0, 166.667, 333.33300000000003, 500, 666.66700000000003, 833.33299999999997, 1000, 1166.6669999999999, 1333.3330000000001, 1500, 1666.6669999999999, 1833.3330000000001, 2000 };
volatile CONST(IDT_NomSteerSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdB = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 1308.1600000000001, 2059.52, 2728.3200000000002, 3321.5999999999999, 3747.8400000000001, 4074.2399999999998, 4354.5600000000004, 4634.8800000000001, 4915.1999999999998, 5068.8000000000002, 5222.3999999999996, 5376 }, { 0, 1344.498, 2116.7289999999998, 2804.1060000000002, 3413.866, 3851.9459999999999, 4187.4139999999998, 4475.5200000000004, 4763.6260000000002, 5051.7340000000004, 5209.6000000000004, 5367.4660000000003, 5525.3339999999998 }, { 0, 1199.146, 1887.894, 2500.96, 3044.8000000000002, 3435.52, 3734.7199999999998, 3991.6799999999998, 4248.6400000000003, 4505.6000000000004, 4646.3999999999996, 4787.1999999999998, 4928 }, { 0, 1008.374, 1587.546, 2103.0799999999999, 2560.4000000000001, 2888.96, 3140.5599999999999, 3356.6399999999999, 3572.7199999999998, 3788.8000000000002, 3907.1999999999998, 4025.5999999999999, 4144 }, { 0, 681.33360000000005, 1072.6659999999999, 1421, 1730, 1952, 2122, 2268, 2414.0500000000002, 2560, 2640, 2720, 2800 } };
volatile CONST(IDT_NomSteerSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdB_AxisX = { 0, 1024, 2048, 3072, 4096, 5120 };
volatile CONST(IDT_NomSteerSpd_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdB_AxisY = { 0, 166.667, 333.33300000000003, 500, 666.66700000000003, 833.33299999999997, 1000, 1166.6669999999999, 1333.3330000000001, 1500, 1666.6669999999999, 1833.3330000000001, 2000 };
volatile CONST(IDT_NomSteerSpd, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdC = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, { 0, 1308.1600000000001, 2059.52, 2728.3200000000002, 3321.5999999999999, 3747.8400000000001, 4074.2399999999998, 4354.5600000000004, 4634.8800000000001, 4915.1999999999998, 5068.8000000000002, 5222.3999999999996, 5376 }, { 0, 1344.498, 2116.7289999999998, 2804.1060000000002, 3413.866, 3851.9459999999999, 4187.4139999999998, 4475.5200000000004, 4763.6260000000002, 5051.7340000000004, 5209.6000000000004, 5367.4660000000003, 5525.3339999999998 }, { 0, 1199.146, 1887.894, 2500.96, 3044.8000000000002, 3435.52, 3734.7199999999998, 3991.6799999999998, 4248.6400000000003, 4505.6000000000004, 4646.3999999999996, 4787.1999999999998, 4928 }, { 0, 1008.374, 1587.546, 2103.0799999999999, 2560.4000000000001, 2888.96, 3140.5599999999999, 3356.6399999999999, 3572.7199999999998, 3788.8000000000002, 3907.1999999999998, 4025.5999999999999, 4144 }, { 0, 681.33360000000005, 1072.6659999999999, 1421, 1730, 1952, 2122, 2268, 2414.0500000000002, 2560, 2640, 2720, 2800 } };
volatile CONST(IDT_NomSteerSpd_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdC_AxisX = { 0, 1024, 2048, 3072, 4096, 5120 };
volatile CONST(IDT_NomSteerSpd_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_NomSteerSpdC_AxisY = { 0, 166.667, 333.33300000000003, 500, 666.66700000000003, 833.33299999999997, 1000, 1166.6669999999999, 1333.3330000000001, 1500, 1666.6669999999999, 1833.3330000000001, 2000 };
volatile CONST(IDT_FilFac, RTE_CALIB) ActiveReturnCdp_CalPrm_FilFacA = { 102.40000000000001 };
volatile CONST(IDT_FilFac, RTE_CALIB) ActiveReturnCdp_CalPrm_FilFacB = { 102.40000000000001 };
volatile CONST(IDT_FilFac, RTE_CALIB) ActiveReturnCdp_CalPrm_FilFacC = { 102.40000000000001 };
volatile CONST(IDT_MotTrqGain_Crv, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainA = { 819.20000000000005, 890.88, 1054.72, 1249.28, 1341.4400000000001, 1536 };
volatile CONST(IDT_MotTrqGain_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainA_AxisX = { 0, 640, 3200, 7680, 9600, 14720 };
volatile CONST(IDT_MotTrqGain_Crv, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainB = { 819.20000000000005, 890.88, 1054.72, 1249.28, 1341.4400000000001, 1536 };
volatile CONST(IDT_MotTrqGain_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainB_AxisX = { 0, 640, 3200, 7680, 9600, 14720 };
volatile CONST(IDT_MotTrqGain_Crv, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainC = { 819.20000000000005, 890.88, 1054.72, 1249.28, 1341.4400000000001, 1536 };
volatile CONST(IDT_MotTrqGain_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_MotTrqGainC_AxisX = { 0, 640, 3200, 7680, 9600, 14720 };
volatile CONST(IDT_RetTrqFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_RetTrqFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_RetTrqFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_RetTrqFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC = { { 1024, 1024, 1024 }, { 921.60000000000002, 921.60000000000002, 921.60000000000002 }, { 819.20000000000005, 819.20000000000005, 819.20000000000005 }, { 614.39999999999998, 614.39999999999998, 614.39999999999998 }, { 409.60000000000002, 409.60000000000002, 409.60000000000002 }, { 225.28, 225.28, 225.28 } };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisX, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC_AxisX = { 0, 512, 1024, 2048, 3072, 4096 };
volatile CONST(IDT_SteerSpdFactDepOnDrvr_AxisY, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC_AxisY = { 0, 3840, 7680 };
volatile CONST(IDT_SteerSpdGradAftInvld, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldA = { 163.84 };
volatile CONST(IDT_SteerSpdGradAftInvld, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldB = { 163.84 };
volatile CONST(IDT_SteerSpdGradAftInvld, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldC = { 163.84 };
volatile CONST(IDT_SteerSpdAmp, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdAmpA = { 49.152000000000001 };
volatile CONST(IDT_SteerSpdAmp, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdAmpB = { 49.152000000000001 };
volatile CONST(IDT_SteerSpdAmp, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdAmpC = { 49.152000000000001 };
volatile CONST(IDT_SteerSpdFact, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactA = { 128 };
volatile CONST(IDT_SteerSpdFact, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactB = { 128 };
volatile CONST(IDT_SteerSpdFact, RTE_CALIB) ActiveReturnCdp_CalPrm_SteerSpdFactC = { 128 };

/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxMotTrq, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqA(void) /* 1 */
{
   VAR(IDT_MaxMotTrq, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxMotTrq, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxMotTrqA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxMotTrq, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqB(void) /* 1 */
{
   VAR(IDT_MaxMotTrq, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxMotTrq, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxMotTrqB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxMotTrq, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqC(void) /* 1 */
{
   VAR(IDT_MaxMotTrq, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxMotTrq, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxMotTrqC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnSteerAngC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnSteerAngC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxMotTrqDepOnVehSpdC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MaxMotTrqDepOnVehSpdC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxTBT4ShtDwn, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxTBT4ShtDwnA(void) /* 1 */
{
   VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxTBT4ShtDwn, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxTBT4ShtDwnB(void) /* 1 */
{
   VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MaxTBT4ShtDwn, RTE_CODE)
Rte_CData_ActiveReturnCdp_MaxTBT4ShtDwnC(void) /* 1 */
{
   VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_MaxTBT4ShtDwn, AUTOMATIC))ActiveReturnCdp_CalPrm_MaxTBT4ShtDwnC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdA_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdA_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdB_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdB_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_NomSteerSpdC_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_NomSteerSpdC_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_FilFac, RTE_CODE)
Rte_CData_ActiveReturnCdp_FilFacA(void) /* 1 */
{
   VAR(IDT_FilFac, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_FilFac, AUTOMATIC))ActiveReturnCdp_CalPrm_FilFacA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_FilFac, RTE_CODE)
Rte_CData_ActiveReturnCdp_FilFacB(void) /* 1 */
{
   VAR(IDT_FilFac, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_FilFac, AUTOMATIC))ActiveReturnCdp_CalPrm_FilFacB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_FilFac, RTE_CODE)
Rte_CData_ActiveReturnCdp_FilFacC(void) /* 1 */
{
   VAR(IDT_FilFac, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_FilFac, AUTOMATIC))ActiveReturnCdp_CalPrm_FilFacC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_MotTrqGainC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_MotTrqGainC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrA_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrA_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrB_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrB_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_RetTrqFactDepOnDrvrC_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_RetTrqFactDepOnDrvrC_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrA(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrA_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrA_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrA_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrB(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrB_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrB_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrB_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrC(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrC_AxisX(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC_AxisX);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC_P2CONST(volatile uint16, RTE_CALIB, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactDepOnDrvrC_AxisY(void) /* 1 */
{
   volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB) rtn;

   rtn = ((volatile P2CONST(uint16, AUTOMATIC, RTE_CALIB))ActiveReturnCdp_CalPrm_SteerSpdFactDepOnDrvrC_AxisY);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdGradAftInvld, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdGradAftInvldA(void) /* 1 */
{
   VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdGradAftInvld, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdGradAftInvldB(void) /* 1 */
{
   VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdGradAftInvld, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdGradAftInvldC(void) /* 1 */
{
   VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdGradAftInvld, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdGradAftInvldC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdAmp, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdAmpA(void) /* 1 */
{
   VAR(IDT_SteerSpdAmp, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdAmp, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdAmpA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdAmp, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdAmpB(void) /* 1 */
{
   VAR(IDT_SteerSpdAmp, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdAmp, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdAmpB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdAmp, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdAmpC(void) /* 1 */
{
   VAR(IDT_SteerSpdAmp, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdAmp, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdAmpC);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdFact, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactA(void) /* 1 */
{
   VAR(IDT_SteerSpdFact, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdFact, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdFactA);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdFact, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactB(void) /* 1 */
{
   VAR(IDT_SteerSpdFact, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdFact, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdFactB);
   return rtn;
}
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_SteerSpdFact, RTE_CODE)
Rte_CData_ActiveReturnCdp_SteerSpdFactC(void) /* 1 */
{
   VAR(IDT_SteerSpdFact, AUTOMATIC) rtn;

   rtn = ((VAR(IDT_SteerSpdFact, AUTOMATIC))ActiveReturnCdp_CalPrm_SteerSpdFactC);
   return rtn;
}

void ai_stubs_init( void )
 {
        __ASTREE_modify((AbsAvgVehSpd; full_range));
        __ASTREE_modify((AbsSteerAng; full_range));
		__ASTREE_modify((AbsDrvrTrq; full_range));
		__ASTREE_modify((AbsMaxSafeVehSpd; full_range));
 }

 Std_ReturnType Rte_Read_ActiveReturnCdp_RP_ActChar_ActChar(IDT_ActChar * data)
 {
        IDT_ActChar temp;
        __ASTREE_modify((temp; full_range));
        *data= temp;
 }
