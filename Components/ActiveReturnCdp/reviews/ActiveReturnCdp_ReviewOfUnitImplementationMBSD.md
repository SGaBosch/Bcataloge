# Software Unit Implementation Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitImplementationMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [TLModel](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b0d366638a7d81b1d5d9a5f86cc7b9399d2e3d37#/comps_repo/ActiveReturn/components/ActiveReturnCdp/design/ActiveReturnCdp_sm.slx) ActiveReturnCdp_sm.slx
3. [AstreeAnnot](../test/IActiveReturnCdp_gg.aal) IActiveReturnCdp_gg.aal - Astree annotations
4. [ICFile](../src/IActiveReturnCdp_gg.c) IActiveReturnCdp_gg.c
5. [IHFile](../include/IActiveReturnCdp_gg.h) IActiveReturnCdp_gg.h
7. [MakeFile](../ActiveReturnCdp.mak) Make File
--- 

## CL1: Is the code testable and low complexity?

- DoorsDesReq: No findings

- TLModel: No findings

- ICFile: No findings

- IHFile: No findings

- MakeFile: NA, not affected by this change

<span style="color:green">Passed</span> 

## CL2: Static code analysis (MISRA)

- AstreeAnnot: No findings

<span style="color:green">Passed</span> 

### CL2.1: Are there no violations of mandatory guidelines (vendor-confirmed false positives are OK)?

- AstreeAnnot: No findings

<span style="color:green">Passed</span> 
### CL2.2: Do you approve of the Deviation Records assigned to the deviations of required guidelines which need MISRA Expert approval?

- AstreeAnnot: NA

<span style="color:green">Passed</span> 
### CL2.3: Are all deviations of required guidelines associated with an approved Deviation Record (approved by MISRA Expert or Authority depending on the guideline)?

- AstreeAnnot: NA

<span style="color:green">Passed</span> 
### CL2.4: Is all information received from external sources checked for validity?

- TLModel: No findings

- ICFile: No findings

- IHFile: No findings

<span style="color:green">Passed</span> 
### CL2.5: Do all called library functions provide parameter check or are the parameters checked prior to calling the function?

- TLModel: No findings

<span style="color:green">Passed</span> 
## CL3: Static code analysis (Naming Rules): Are there no preventable deviations and are non preventable deviations classified as non critical?

- AstreeAnnot:  No findings

<span style="color:green">Passed</span> 
## CL4: Static code analysis (Runtime defects): Are there no preventable findings and are non preventable findings classified as non critical?

- AstreeAnnot:  No findings

<span style="color:green">Passed</span> 
