#include "Rte_ActiveReturnCheck_Type.h"
#include "Rte_ActiveReturnCheck.h"
#include "IEventHistory_hh.h"
#include "IActRet_Check_gg.h"

IDT_ActvRetDi Pim_PIM_ActvRetDi;
IDT_AbsMaxSafeVehSpd AbsMaxSafeVehSpd = 0;
IDT_SteerAng SteerAng = 0;
IDT_TorsBarTrq TorsBarTrq =0;
IDT_ActvRetMotTrq4Chk ActvRetMotTrq4Chk = 0;
IDT_ActvRetMotTrq ActvRetMotTrq=0;
const struct Rte_CDS_ActiveReturnCheck Rte_Inst_ActiveReturnCheck ={
   &Pim_PIM_ActvRetDi
};

extern void ai_stubs_init( void );
void ai_stubs_init( void )
 {
        IDT_ActvRetDi temp;
        __ASTREE_modify((temp; full_range));
        Pim_PIM_ActvRetDi= temp;
         __ASTREE_modify((AbsMaxSafeVehSpd,full_range));
 }

Std_ReturnType  Rte_Read_ActiveReturnCheck_RP_VehSpd_AbsMaxSafeVehSpd(IDT_AbsMaxSafeVehSpd * data)/* For Resolving, use of Uninitialized variable */
{
      Std_ReturnType  rtn=0;
		IDT_AbsMaxSafeVehSpd temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;
}

Std_ReturnType  Rte_Read_ActiveReturnCheck_RP_SteerAng_SteerAng(IDT_SteerAng * data)/* For Resolving, use of Uninitialized variable */
{
      Std_ReturnType  rtn=0;
		IDT_SteerAng temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;
}

Std_ReturnType  Rte_Read_ActiveReturnCheck_RP_TorsBarTrq_TorsBarTrq(IDT_TorsBarTrq * data)/* For Resolving, use of Uninitialized variable */
{
      Std_ReturnType  rtn=0;
		IDT_TorsBarTrq temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;
}

Std_ReturnType  Rte_Read_ActiveReturnCheck_RP_ActvRetMotTrq4Chk_ActvRetMotTrq4Chk(IDT_ActvRetMotTrq4Chk * data)/* For Resolving, use of Uninitialized variable */
{
      Std_ReturnType  rtn=0;
		IDT_ActvRetMotTrq4Chk temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;
}

FUNC(Std_ReturnType, RTE_CODE)
Rte_Call_ActiveReturnCheck_RP_ActvRetProvParameters_Get_ActvRetMaxMotTrqDepOnVehSpd(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) MaxMotTrqDepOnVehSpd_Val,VAR(IDT_AbsMaxSafeVehSpd, AUTOMATIC) AbsMaxSafeVehSpd)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   IDT_AbsMaxSafeVehSpd temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MaxMotTrqDepOnVehSpd_Val has direction OUT */
   (*(MaxMotTrqDepOnVehSpd_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ActiveReturnCheck_RP_ActvRetProvParameters_Get_ActvRetMaxTBT4ShtDwn(P2VAR(uint8, AUTOMATIC, RTE_APPL_DATA) MaxTBT4ShtDwn_Val)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   uint8 temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MaxTBT4ShtDwn_Val has direction OUT */
   (*(MaxTBT4ShtDwn_Val)) = temp;
   return rtn;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_ActiveReturnCheck_RP_ActvRetProvParameters_Get_ActvRetMaxMotTrqDepOnSteerAng(P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) MaxMotTrqDepOnSteerAng_Val, VAR(IDT_AbsSteerAng, AUTOMATIC) AbsSteerAng)
{
   VAR(Std_ReturnType, AUTOMATIC) rtn = E_OK;
   IDT_AbsSteerAng temp = 0;
   __ASTREE_modify((temp; full_range));
   __ASTREE_modify((rtn; full_range));
   /* Parameter MaxMotTrqDepOnSteerAng_Val has direction OUT */
   (*(MaxMotTrqDepOnSteerAng_Val)) = temp;
   return rtn;
}
