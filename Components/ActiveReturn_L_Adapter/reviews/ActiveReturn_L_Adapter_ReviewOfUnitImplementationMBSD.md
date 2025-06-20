# Software Unit Implementation Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitImplementationMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [TLModel](../design/ActiveReturn_L_Adapter_sm.slx) ActiveReturn_L_Adapter_sm.slx
3. [AstreeAnnot](../test/IActiveReturn_L_Adapter_gg.aal) IActiveReturn_L_Adapter_gg.aal - Astree annotations
4. [ICFile](../src/IActiveReturn_L_Adapter_gg.c) IActiveReturn_L_Adapter_gg.c
5. [IHFile](../include/IActiveReturn_L_Adapter_gg.h) IActiveReturn_L_Adapter_gg.h
6. [IKgtFile](../src/IActiveReturn_L_Adapter_pp.kgt) IActiveReturn_L_Adapter_pp.kgt
7. [KgtFile](../src/ActiveReturn_L_Adapter_pp.kgt) ActiveReturn_L_Adapter_pp.kgt
8. [MakeFile](../ActiveReturn_L_Adapter.mak) Make File
--- 

## CL1: Is the code testable and low complexity?

- DoorsDesReq: Ok, no findings

- TLModel: Ok, no findings

- ICFile: Ok, no findings

- IHFile: Ok, no findings

- MakeFile: Ok, no findings

<span style="color:green">Passed</span> 

## CL2: Static code analysis (MISRA)

- AstreeAnnot: Ok, no findings

<span style="color:green">Passed</span> 

### CL2.1: Are there no violations of mandatory guidelines (vendor-confirmed false positives are OK)?

- AstreeAnnot: Ok, no findings

<span style="color:green">Passed</span> 

### CL2.2: Do you approve of the Deviation Records assigned to the deviations of required guidelines which need MISRA Expert approval?

- AstreeAnnot: NA

<span style="color:green">Passed</span> 

### CL2.3: Are all deviations of required guidelines associated with an approved Deviation Record (approved by MISRA Expert or Authority depending on the guideline)?

- AstreeAnnot: NA

<span style="color:green">Passed</span> 

### CL2.4: Is all information received from external sources checked for validity?

- TLModel: Ok, no findings

- ICFile: Ok, no findings

- IHFile: Ok, no findings

- IKgtFile: Ok, no findings

- KgtFile: Ok, no findings

<span style="color:green">Passed</span> 

### CL2.5: Do all called library functions provide parameter check or are the parameters checked prior to calling the function?

- TLModel: Ok, no findings

<span style="color:green">Passed</span> 

## CL3: Static code analysis (Naming Rules): Are there no preventable deviations and are non preventable deviations classified as non critical?

- AstreeAnnot: Ok, no findings

<span style="color:green">Passed</span> 

## CL4: Static code analysis (Runtime defects): Are there no preventable findings and are non preventable findings classified as non critical?

- AstreeAnnot: Ok, no findings

<span style="color:green">Passed</span> 
