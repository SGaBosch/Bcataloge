# -----------------------------------------------------------------------------
#  Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
#                All rights reserved
# -----------------------------------------------------------------------------

#I_KGT_FILES             += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\src\IActiveReturn_L_Adapter_pp.kgt

FEAT = FEAT_ACTIVERETURN_L_ADAPTER
$(FEAT)_INCLUDE_DIR     += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\include
$(FEAT)_C_FILES         += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\src\IActiveReturn_L_Adapter_gg.c
$(FEAT)_KGT_FILES       += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\src\IActiveReturn_L_Adapter_pp.kgt
$(FEAT)_KGT_FILES       += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\src\ActiveReturn_L_Adapter_pp.kgt
$(FEAT)_EHANDBOOK_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturn_L_Adapter\design\ActiveReturn_L_Adapter_sm.slx
