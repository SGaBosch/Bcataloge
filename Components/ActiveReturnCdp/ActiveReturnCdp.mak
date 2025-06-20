# -----------------------------------------------------------------------------
#  Copyright (c) Robert Bosch Automotive Steering GmbH, Germany
#                All rights reserved
# -----------------------------------------------------------------------------

FEAT = FEAT_ACTIVERETURN_CDP
$(FEAT)_INCLUDE_DIR        += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\include
$(FEAT)_C_FILES            += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\src\IActiveReturnCdp_gg.c
$(FEAT)_C_FILES            += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\src\ActiveReturnCdp_lut_gg.c
$(FEAT)_CALMAN_FILES       += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\doc\ActiveReturnCdp_CalMan.rst
$(FEAT)_VCDM_RULESET_FILES += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\test\IActiveReturnCdp_pvr.xml
$(FEAT)_EHANDBOOK_FILES    += $(ASMP_APP_COMPS_BASE)\ActiveReturn\components\ActiveReturnCdp\design\ActiveReturnCdp_sm.slx
