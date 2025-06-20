# Software Unit Design Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitDesignMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [53.0]
2. [BlackboxView](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/c99a0a2be4a10a4585f42bd57e664f117999ab1e#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck_blackbox.xmi) Blackboxview of the component
3. [CompArxml](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/d6cd5013d6715f3ee8ed335af52e075bb1484e83#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck.arxml) ActiveReturnCheck.arxml
4. [TLModelDD](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck_dd.dd) DD of TL-Model
5. [TLModel](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck_sm.slx) ActiveReturnCheck_sm.slx
6. [IKgtFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/709dcfe6080e8ee2c025b5551b1e2bf3a0cd7805#/comps_repo/ActiveReturn/components/ActiveReturnCheck/src/IActiveReturnCheck_pp.kgt) IActiveReturnCheck_pp.kgt
7. [KgtFile](add the html path of ActiveReturnCheck_pp.kgt) ActiveReturnCheck_pp.kgt
8. [KgtFileList](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/709dcfe6080e8ee2c025b5551b1e2bf3a0cd7805#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/kgt_filelist.kgl) kgt_filelist.kgl
9. [CalMan](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/37abdaa20bac6e714fce303f1d00ea784c275846#/comps_repo/ActiveReturn/components/ActiveReturnCheck/doc/ActiveReturnCheck_CalMan.rst) Calibration manual file
10. [CalManHtml](https://sites.inside-share4.bosch.com/sites/153674/Documents/Software%20Process/SW%20unit%20design%20(mbd)/Application/SteeringFunctions/ActiveReturnCheck/ActiveReturnCheck_CalMan.zip) CalMan generated html
11. [HtmlModel](https://sites.inside-share4.bosch.com/sites/153674/Documents/Software%20Process/SW%20unit%20design%20(mbd)/Application/SteeringFunctions/ActiveReturnCheck/ActiveReturnCheck_md.zip) html-Model export
12. [MXAMReport](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck_mx.mxmr) MXAM-report
13. [ZfSetEnv](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/709dcfe6080e8ee2c025b5551b1e2bf3a0cd7805#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/zf_set_environment.m) zf_set_environment.m
--- 

## CL1: Is the unit design covered by and compliant with the SW architecture, the requirements and the hardware-software-interface?

- DoorsDesReq: OK, no finding

- BlackboxView: OK, no finding

- CompArxml: OK, no finding

- TLModel: OK, no finding

- IKgtFile: The component is designed in a way to be AUTOSAR compatible. Interface data stored in ARXML

- KgtFile: The component is designed in a way to be AUTOSAR compatible

<span style="color:green">Passed</span> 

## CL2: Are the design / modeling guidelines fulfilled? Including naming rules, design for testability, maintainability and robustness.

- MXAMReport: OK, no finding

<span style="color:green">Passed</span> 

## CL3: Are the responsibilities of the component described?

- DoorsDesReq: OK, no finding

- TLModel: OK, no finding

<span style="color:green">Passed</span> 

## CL4: Are the dependencies to other units described?

- TLModel: OK, no finding

- KgtFileList: OK, no finding

<span style="color:green">Passed</span> 

## CL5: Are the interfaces of the unit described?

- TLModel: OK, no finding

- IKgtFile: OK, no finding

<span style="color:green">Passed</span> 

## CL6: Is the dynamic behavior described?

- BlackboxView: OK, no finding

- TLModel: OK, no finding

- IKgtFile: OK, no finding

- KgtFile: The component is designed according to AUTOSAR expectation. Corresponding data stored in ARXML

<span style="color:green">Passed</span> 

## CL7: Is the unit design comprehensible?

- TLModel: OK, no finding

<span style="color:green">Passed</span> 

## CL8: Are measurement values and application values described and are safety relevant data stored redundant?

- TLModelDD: OK, no finding

- TLModel: OK, no finding

- IKgtFile: OK, no finding

- KgtFile: The component is designed according to AUTOSAR expectation. Corresponding data stored in ARXML

- KgtFileList: OK, no finding

<span style="color:green">Passed</span> 

## CL9: Are rules defined to check the application values?

- TLModel: OK, no finding

- CalMan: OK, no finding

- CalManHtml: OK, no finding

- HtmlModel: OK, no finding

<span style="color:green">Passed</span> 

## CL10: Are configuration data described completely?

- TLModel: OK, no finding

<span style="color:green">Passed</span> 

## CL11: Are integration hints given?

- TLModel: OK, no finding

<span style="color:green">Passed</span> 

## CL12: Is the TL-model under version control?

- TLModel: OK, no finding

- ZfSetEnv: OK, no finding

<span style="color:green">Passed</span> 

## CL13: If there is a diverse software design calculating the output data diversely: Is it ensured, that the input data of both calculations are consistent?

- TLModel: OK, no finding

- BlackboxView: OK, no finding

<span style="color:green">Passed</span> 
