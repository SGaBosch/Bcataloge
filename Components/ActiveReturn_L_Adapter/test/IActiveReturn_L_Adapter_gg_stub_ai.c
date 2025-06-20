#include "Rte_ActiveReturn_L_Adapter_Type.h"
#include "Rte.h"
#include "IActiveReturn_L_Adapter_gg.h"

IDT_ActvRetMotTrq ActvRetMotTrq = 0;

void ai_stubs_init(void){
   __ASTREE_modify((ActvRetMotTrq,full_range));
}

Std_ReturnType Rte_Read_ActiveReturn_L_Adapter_RP_ActvRetMotTrq_ActvRetMotTrq(IDT_ActvRetMotTrq * data)/* For Resolving, use of Uninitialized variable */
{
      Std_ReturnType  rtn=0;
		IDT_ActvRetMotTrq temp=0; // initializes pointer var
		__ASTREE_modify((rtn;full_range)); // modifies Return range
		__ASTREE_modify((temp;full_range)); // modifies Pointer range
		/* Optimizer: User-specified removal of resource lock */
		(*(data)) = temp;
		return rtn;
}
