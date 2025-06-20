# Software Unit Implementation Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitImplementationMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [53.0]
2. [TLModel](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturn/design/ActiveReturn_sm.slx) ActiveReturn_sm.slx
3. [AstreeAnnot](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/ceb2fae3a92520fabbd7978e85efd1ac6042db6d/#comps_repo/ActiveReturn/components/ActiveReturn/test/IActRet_Main_gg.aal) IActRet_Main_gg.aal - Astree annotations
4. [ICFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708/#comps_repo/ActiveReturn/components/ActiveReturn/src/IActRet_Main_gg.c) IActRet_Main_gg.c
5. [IHFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708/#comps_repo/ActiveReturn/components/ActiveReturn/include/IActRet_Main_gg.h) IActRet_Main_gg.h
6. [MakeFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/46c553e4707893f55b522e8686f9590044086847#/comps_repo/ActiveReturn/components/ActiveReturn/ActiveReturn.mak) Make File
--- 

## CL1: Is the code testable and low complexity?


- ICFile: No findings

## CL2: Static code analysis (MISRA)

- AstreeAnnot: No findings

<span style="color:green">Passed</span> 

### CL2.1: Are there no violations of mandatory guidelines (vendor-confirmed false positives are OK)?

- AstreeAnnot: No findings

### CL2.2: Do you approve of the Deviation Records assigned to the deviations of required guidelines which need MISRA Expert approval?

- AstreeAnnot: No findings 

### CL2.3: Are all deviations of required guidelines associated with an approved Deviation Record (approved by MISRA Expert or Authority depending on the guideline)?

- AstreeAnnot: No findings 

### CL2.4: Is all information received from external sources checked for validity?

- ICFile: No findings 

### CL2.5: Do all called library functions provide parameter check or are the parameters checked prior to calling the function?

- TLModel:  No findings 

## CL3: Static code analysis (Naming Rules): Are there no preventable deviations and are non preventable deviations classified as non critical?

- AstreeAnnot: No findings  

## CL4: Static code analysis (Runtime defects): Are there no preventable findings and are non preventable findings classified as non critical?

- AstreeAnnot: No findings 
