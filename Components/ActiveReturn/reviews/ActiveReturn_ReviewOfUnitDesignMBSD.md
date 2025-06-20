# Software Unit Design Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitDesignMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [BlackboxView](../design/ActiveReturn_blackbox.xmi) Blackboxview of the component
3. [CompArxml](../design/ActiveReturn.arxml) ActiveReturn.arxml
4. [TLModelDD](../design/ActiveReturn_dd.dd) DD of TL-Model
5. [TLModel](../design/ActiveReturn_sm.slx) ActiveReturn_sm.slx
8. [KgtFileList](../design/kgt_filelist.kgl) kgt_filelist.kgl
9. [CalMan](../doc/ActiveReturn_CalMan.rst) Calibration manual file
10. [CalManHtml](https://sites.inside-share4.bosch.com/sites/153674/Documents/Software%20Process/SW%20unit%20design%20(mbd)/Application/SteeringFunctions/ActiveReturn/ActiveReturn_CalMan.zip) CalMan generated html
11. [HtmlModel](https://sites.inside-share4.bosch.com/sites/153674/Documents/Software%20Process/SW%20unit%20design%20(mbd)/Application/SteeringFunctions/ActiveReturn/ActiveReturn_md.zip) html-Model export
12. [MXAMReport](../design/ActiveReturn_mx.mxmr) MXAM-report
13. [MXAMAnnot](../design/MXAM_Annotation_ActiveReturn_sm.mxmad) MXAM Annotation
14. [ZfSetEnv](h../design/zf_set_environment.m) zf_set_environment.m
--- 

## CL1: Is the unit design covered by and compliant with the SW architecture, the requirements and the hardware-software-interface?

- DoorsDesReq: Ok, No findings

- BlackboxView: Not affected by this change, NA

- CompArxml: Not affected by this change, NA

- TLModel: Ok, No findings

- IKgtFile: IKgt intentionally missing. The component is already designed as an AUTOSAR component

- KgtFile: Kgt intentionally missing. The component is already designed as an AUTOSAR component

<span style="color:green">Passed</span> 

## CL2: Are the design / modeling guidelines fulfilled? Including naming rules, design for testability, maintainability and robustness.

- MXAMReport: ok, No findings

<span style="color:green">Passed</span> 

## CL3: Are the responsibilities of the component described?

- DoorsDesReq: Ok, no findings

- TLModel: Ok, no findings

<span style="color:green">Passed</span> 

## CL4: Are the dependencies to other units described?

- TLModel: Ok, No findings

- KgtFileList: Not affected by this change, NA

<span style="color:green">Passed</span> 

## CL5: Are the interfaces of the unit described?

- TLModel: ok, no findings

- IKgtFile: Interfaces are defined in the ARXML model

<span style="color:green">Passed</span> 

## CL6: Is the dynamic behavior described?

- BlackboxView: NA

- TLModel: ok, no finding

- IKgtFile: Corresponding data stored in ARXML 

- KgtFile: Corresponding data stored in ARXML

<span style="color:green">Passed</span> 

## CL7: Is the unit design comprehensible?

- TLModel: ok, no findings

<span style="color:green">Passed</span> 

## CL8: Are measurement values and application values described and are safety relevant data stored redundant?

- TLModelDD: Ok, No findings

- TLModel: Not affected by this change, NA

- IKgtFile: Corresponding data stored in ARXML

- KgtFile: Corresponding data stored in ARXML

- KgtFileList: Not affected by this change, NA

<span style="color:green">Passed</span> 

## CL9: Are rules defined to check the application values?

- TLModel: Ok, no findings

- CalMan: Not affected by this change, NA

- CalManHtml: Not affected by this change, NA

- HtmlModel: Not uptodate

<span style="color:green">Passed</span> 

## CL10: Are configuration data described completely?

- TLModel: Not affected by this change, NA

<span style="color:green">Passed</span> 

## CL11: Are integration hints given?

- TLModel: Not affected by this change, NA

<span style="color:green">Passed</span> 

## CL12: Is the TL-model under version control?

- TLModel: Ok, no findings

- ZfSetEnv: Ok, no findings

<span style="color:green">Passed</span> 

## CL13: If there is a diverse software design calculating the output data diversely: Is it ensured, that the input data of both calculations are consistent?

- TLModel: Not affected by this change, NA

- BlackboxView: Not affected by this change, NA

<span style="color:green">Passed</span> 
