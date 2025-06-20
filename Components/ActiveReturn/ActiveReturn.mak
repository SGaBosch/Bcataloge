# -----------------------------------------------------------------------------
#  Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
#                All rights reserved
# -----------------------------------------------------------------------------

FEAT = FEAT_ACTIVERETURN

$(FEAT)_INCLUDE_DIR    += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\include
#$(FEAT)_C_FILES        += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\src\ActiveReturn_lut_gg.c
#$(FEAT)_SIL_FILES      += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\src\ActiveReturn_lut_gg.c
$(FEAT)_C_FILES        += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\src\IActRet_Main_gg.c
$(FEAT)_SIL_FILES      += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\src\IActRet_Main_gg.c
#$(FEAT)_KGT_FILES      += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\src\ActRet_Main_pp.kgt
$(FEAT)_APPL_MAN_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\test\ActiveReturn_am.xml
$(FEAT)_CALMAN_FILES   += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\doc\ActiveReturn_CalMan.rst
$(FEAT)_EHANDBOOK_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn\design\ActiveReturn_sm.slx
