# Software Unit Design Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitDesignMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [BlackboxView](../design/ActiveReturnCdp_blackbox.xmi) Blackboxview of the component
3. [CompArxml](../design/ActiveReturnCdp.arxml) ActiveReturnCdp.arxml
4. [TLModelDD](../design/ActiveReturnCdp_dd.dd) DD of TL-Model
5. [TLModel](../design/ActiveReturnCdp_sm.slx) ActiveReturnCdp_sm.slx
6. [KgtFileList](../design/kgt_filelist.kgl) kgt_filelist.kgl
7. [CalMan](../doc/ActiveReturnCdp_CalMan.rst) Calibration manual file
8. [CalManHtml](../ActiveReturnCdp_CalMan.zip) CalMan generated html
9. [HtmlModel](https://sites.inside-share4.bosch.com/sites/153674/Documents/Software%20Process/SW%20unit%20design%20(mbd)/Application/SteeringFunctions/ActiveReturnCdp/ActiveReturnCdp_md.zip) html-Model export
10. [MXAMReport](../design/ActiveReturnCdp_mx.mxmr) MXAM-report
11. [ZfSetEnv](../design/zf_set_environment.m) zf_set_environment.m
--- 

## CL1: Is the unit design covered by and compliant with the SW architecture, the requirements and the hardware-software-interface?

- DoorsDesReq: ok, no findings

- BlackboxView: Not affected by this change, NA

- CompArxml: Not affected by this change, NA

- TLModel: No findings

<span style="color:green">Passed</span> 

## CL2: Are the design / modeling guidelines fulfilled? Including naming rules, design for testability, maintainability and robustness.

- MXAMReport: No findings

<span style="color:green">Passed</span> 

## CL3: Are the responsibilities of the component described?

- DoorsDesReq: No findings

- TLModel: No findings

<span style="color:green">Passed</span> 

## CL4: Are the dependencies to other units described?

- TLModel: Not affected by this change, NA

- KgtFileList:  Not affected by this change, NA

<span style="color:green">Passed</span> 

## CL5: Are the interfaces of the unit described?

- TLModel: No findings

<span style="color:green">Passed</span> 
## CL6: Is the dynamic behavior described?

- BlackboxView: Not affected by this change, NA

- TLModel: No findings

<span style="color:green">Passed</span> 
## CL7: Is the unit design comprehensible?

- TLModel: No findings

<span style="color:green">Passed</span> 
## CL8: Are measurement values and application values described and are safety relevant data stored redundant?

- TLModelDD: No findings

- TLModel: No findings

- KgtFileList: Not affected by this change, NA

<span style="color:green">Passed</span> 
## CL9: Are rules defined to check the application values?

- TLModel: No findings

- CalMan: No findings

- CalManHtml: No findings

- HtmlModel: NA

<span style="color:green">Passed</span> 

## CL10: Are configuration data described completely?

- TLModel: No findings

<span style="color:green">Passed</span> 
## CL11: Are integration hints given?

- TLModel: NA, not affected by this change

<span style="color:green">Passed</span> 
## CL12: Is the TL-model under version control?

- TLModel: No findings

- ZfSetEnv: No findings

<span style="color:green">Passed</span> 
## CL13: If there is a diverse software design calculating the output data diversely: Is it ensured, that the input data of both calculations are consistent?

- TLModel: No findings

- BlackboxView: No findings

<span style="color:green">Passed</span> 
