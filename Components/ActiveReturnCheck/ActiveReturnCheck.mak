# -----------------------------------------------------------------------------
#  Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
#                All rights reserved
# -----------------------------------------------------------------------------

FEAT = FEAT_ACTIVERETURNCHECK
$(FEAT)_INCLUDE_DIR    += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\include
$(FEAT)_C_FILES        += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\src\IActRet_Check_gg.c
#$(FEAT)_C_FILES        += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\src\ActiveReturnCheck_lut_gg.c
#$(FEAT)_KGT_FILES      += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\src\ActRet_Check_pp.kgt
$(FEAT)_APPL_MAN_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\test\ActiveReturnCheck_am.xml
$(FEAT)_CALMAN_FILES   += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\doc\ActiveReturnCheck_CalMan.rst
$(FEAT)_EHANDBOOK_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\design\ActiveReturnCheck_sm.slx

# compiler switch required for DiagnosticConnector
#$(FEAT)_CDEFINES       += -DFEAT_ACTIVERETURNCHECK
$(FEAT)_CDEFINES       += -DFEAT_ACTIVERETURN_L_ADAPTER

$(FEAT)_MONDESC_FILES  += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCheck\design\ActiveReturnCheck_MonitorDescription_base.xml
$(FEAT)_MONDESC_FILES_CONF += $(CPR_MONDESC_CONF_FILES)\ActiveReturnCheck_MonitorDescription_prj.xml
