#include "Rte_ActiveReturn_Type.h"
#include "Rte_ActiveReturn.h"
#include "IActRet_Main_gg.h"

typedef unsigned short  uint16;

typedef uint16 IDT_MotTrqGain;

#define FUNC(rettype, memclass)  rettype
#define VAR(type, memclass)  type
#define RTE_CODE
#define RTE_DATA
#define AUTOMATIC

IDT_ActvRetRetSpdDiff Rte_ArPim_ActiveReturn_PIM_ActvRetRetSpdDiff = 0;
IDT_ActvRetSpdFacFilt Rte_ArPim_ActiveReturn_PIM_ActvRetSpdFacFilt = 1048576;
IDT_ActvRetTrqFacFilt Rte_ArPim_ActiveReturn_PIM_ActvRetTrqFacFilt = 1048576;

const struct Rte_CDS_ActiveReturn Rte_Inst_ActiveReturn = {

   &Rte_ArPim_ActiveReturn_PIM_ActvRetRetSpdDiff,
   &Rte_ArPim_ActiveReturn_PIM_ActvRetSpdFacFilt,
   &Rte_ArPim_ActiveReturn_PIM_ActvRetTrqFacFilt
};

VAR(IDT_MotTrqGain, RTE_DATA) Rte_Irv_ActiveReturn_IRV_MotTrqGain = 0;

/* Direct API 'Rte_IrvRead_ActRetI_CalcActvRetTrq_IRV_MotTrqGain' for 'flatInstance_ActiveReturn' optimized to direct data read. */
/* Function body emitted - SW-C is delivered as object-code. */
FUNC(IDT_MotTrqGain, RTE_CODE)
Rte_IrvRead_ActiveReturn_ActRetI_CalcActvRetTrq_IRV_MotTrqGain(void) /* 1 */
{
   VAR(IDT_MotTrqGain, AUTOMATIC) rtn;

   __ASTREE_modify((Rte_Irv_ActiveReturn_IRV_MotTrqGain; [0, 3072]));
   rtn = Rte_Irv_ActiveReturn_IRV_MotTrqGain;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Read_ActiveReturn_RP_DrvrTrq_DrvrTrq(P2VAR(IDT_DrvrTrq, AUTOMATIC, RTE_APPL_DATA) data)
{
	     Std_ReturnType  rtn=0;
		IDT_DrvrTrq temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_VehSpd_AbsAvgVehSpd(P2VAR(IDT_AbsAvgVehSpd, AUTOMATIC, RTE_APPL_DATA) data)
{
	    Std_ReturnType  rtn=0;
		IDT_AbsAvgVehSpd temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_ActvRetFactors_ActvRetFuncFac(P2VAR(IDT_ActvRetFuncFac, AUTOMATIC, RTE_APPL_DATA) data) 
{
	    Std_ReturnType  rtn=0;
		IDT_ActvRetFuncFac temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_GearSign_GearSign(P2VAR(IDT_GearSign, AUTOMATIC, RTE_APPL_DATA) data) 
{
	    Std_ReturnType  rtn=0;
		IDT_GearSign temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_SteerAng_SteerAng(P2VAR(IDT_SteerAng, AUTOMATIC, RTE_APPL_DATA) data) 
{
	    Std_ReturnType  rtn=0;
		IDT_SteerAng temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_SteerAngSpd_SteerAngSpd(P2VAR(IDT_SteerAngSpd, AUTOMATIC, RTE_APPL_DATA) data) 
{
	    Std_ReturnType  rtn=0;
		IDT_SteerAngSpd temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;	
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetFilFac(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) FilFac_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter FilFac_Val has direction OUT */
   (*(FilFac_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetSteerSpdFact(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) SteerSpdFact_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint8 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter SteerSpdFact_Val has direction OUT */
   (*(SteerSpdFact_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetSteerSpdGradAftInvld(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) SteerSpdGradAftInvld_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter SteerSpdGradAftInvld_Val has direction OUT */
   (*(SteerSpdGradAftInvld_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetSteerSpdFactDepOnDrvr(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) SteerSpdFactDepOnDrvr_Val,VAR(IDT_AbsDrvrTrq, AUTOMATIC) AbsDrvrTrq, VAR(IDT_AbsAvgVehSpd, AUTOMATIC) AbsAvgVehSpd)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter SteerSpdFactDepOnDrvr_Val has direction OUT */
   (*(SteerSpdFactDepOnDrvr_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_ActvRetFactors_ActvRetSpdFac(P2VAR(IDT_ActvRetSpdFac, AUTOMATIC, RTE_APPL_DATA) data)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   IDT_ActvRetSpdFac temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   (*(data)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetMaxMotTrq(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) MaxMotTrq_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint8 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MaxMotTrq_Val has direction OUT */
   (*(MaxMotTrq_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_LoadFacRat_LoadFacRat(P2VAR(IDT_LoadFacRat, AUTOMATIC, RTE_APPL_DATA) data)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   IDT_LoadFacRat temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   (*(data)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetMotTrqGain(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) MotTrqGain_Val,VAR(IDT_AbsAvgVehSpd, AUTOMATIC) AbsAvgVehSpd)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MotTrqGain_Val has direction OUT */
   (*(MotTrqGain_Val)) = temp;
   return rtn;
}
																	 
FUNC(Std_ReturnType, RTE_CODE) 
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetNomSteerSpd(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) NomSteerSpd_Val,VAR(IDT_AbsAvgVehSpd, AUTOMATIC) AbsAvgVehSpd, VAR(IDT_AbsSteerAng, AUTOMATIC) AbsSteerAng)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter NomSteerSpd_Val has direction OUT */
   (*(NomSteerSpd_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetSteerSpdAmp(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) SteerSpdAmp_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter SteerSpdAmp_Val has direction OUT */
   (*(SteerSpdAmp_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetRetTrqFactDepOnDrvr(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) RetTrqFactDepOnDrvr_Val,VAR(IDT_AbsDrvrTrq, AUTOMATIC) AbsDrvrTrq,VAR(IDT_AbsAvgVehSpd, AUTOMATIC) AbsAvgVehSpd)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint16 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter RetTrqFactDepOnDrvr_Val has direction OUT */
   (*(RetTrqFactDepOnDrvr_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Read_ActiveReturn_RP_SteerAng_SteerAngSt(P2VAR(IDT_SteerAngSt, AUTOMATIC, RTE_APPL_DATA) data)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   IDT_SteerAngSt temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   (*(data)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturn_RP_ActvRetProvParameters_Get_ActvRetMaxMotTrqAftLoadFac(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) MaxMotTrqAftLoadFac_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint8 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MaxMotTrqAftLoadFac_Val has direction OUT */
   (*(MaxMotTrqAftLoadFac_Val)) = temp;
   return rtn;
}