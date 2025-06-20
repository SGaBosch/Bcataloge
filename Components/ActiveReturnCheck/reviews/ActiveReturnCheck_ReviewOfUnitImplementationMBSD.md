# Software Unit Implementation Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitImplementationMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [53.0]
2. [TLModel](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/design/ActiveReturnCheck_sm.slx) ActiveReturnCheck_sm.slx
3. [AstreeAnnot](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/a70a39eeb8fb17f2aa08a503643f9e1629f03620#comps_repo/ActiveReturn/components/ActiveReturnCheck/test/IActRet_Check_gg.aal) IActRet_Check_gg.aal - Astree annotations
4. [ICFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/src/IActRet_Check_gg.c) IActRet_Check_gg.c
5. [IHFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/7b08726f3b24251f45197976af9beca190985708#/comps_repo/ActiveReturn/components/ActiveReturnCheck/include/IActRet_Check_gg.h) IActRet_Check_gg.h
6. [IKgtFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/709dcfe6080e8ee2c025b5551b1e2bf3a0cd7805#/comps_repo/ActiveReturn/components/ActiveReturnCheck/src/IActiveReturnCheck_pp.kgt) IActiveReturnCheck_pp.kgt
7. [MakeFile](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/9a261ede8b6c155d4b361586d16fe98683e4114c#/comps_repo/ActiveReturn/components/ActiveReturnCheck/ActiveReturnCheck.mak) Make File
--- 

## CL1: Is the code testable and low complexity?

- DoorsDesReq: OK, no finding

- TLModel: OK, no finding

- ICFile: OK, no finding

- IHFile: OK, no finding

- MakeFile: OK, no finding

<span style="color:green">Passed</span> 

## CL2: Static code analysis (MISRA)

- AstreeAnnot: OK, no finding

<span style="color:green">Passed</span> 

### CL2.1: Are there no violations of mandatory guidelines (vendor-confirmed false positives are OK)?

- AstreeAnnot: OK, no finding

<span style="color:green">Passed</span> 

### CL2.2: Do you approve of the Deviation Records assigned to the deviations of required guidelines which need MISRA Expert approval?

- AstreeAnnot: OK, no finding

<span style="color:green">Passed</span> 

### CL2.3: Are all deviations of required guidelines associated with an approved Deviation Record (approved by MISRA Expert or Authority depending on the guideline)?

- AstreeAnnot: OK, no finding

<span style="color:green">Passed</span> 

### CL2.4: Is all information received from external sources checked for validity?

- TLModel: OK, no finding

- ICFile: OK, no finding

- IHFile: OK, no finding

- IKgtFile: The component is designed to be compatible with AUTOSAR expectation

<span style="color:green">Passed</span> 

### CL2.5: Do all called library functions provide parameter check or are the parameters checked prior to calling the function?

- TLModel: OK, no finding

<span style="color:green">Passed</span> 

## CL3: Static code analysis (Naming Rules): Are there no preventable deviations and are non preventable deviations classified as non critical?

- AstreeAnnot: Document is missing or the link is not valid

<span style="color:green">Passed</span> 

## CL4: Static code analysis (Runtime defects): Are there no preventable findings and are non preventable findings classified as non critical?

- AstreeAnnot: Document is missing or the link is not valid

<span style="color:green">Passed</span> 
