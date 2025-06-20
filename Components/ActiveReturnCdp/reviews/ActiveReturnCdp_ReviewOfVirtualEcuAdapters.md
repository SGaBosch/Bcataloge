# Virtual ECU Adapters Review 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfVirtualEcuAdapters) 

--- 

## Documents Reviewed: 

1. [VirtualECUAspect](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/1c42dbf7df99c0f360eb78eb1eeb9b3fc381a4e2#/comps_repo/ActiveReturn/components/ActiveReturnCdp/vecu/Rte_ActiveReturnCdp.aspects)  [Rte_ActiveReturnCdp]
--- 

## CL1: Check, if the adapter was created for one of the following purposes.

*1.Removal of non-portable code: The virtual ECU cannot use any non portable code containing functions that directly access microcontroller registers, macros related to the GHS compiler, assembly code, etc.. 2.Introducing new test variables : In the adapter file, needed test variable is added to test the component/software behavior.*

>`Failed` 

## CL2: Check, if the adapter is included in all the needed project variants.

*Ensure that the adapter file is added to applicable variant specific vcxitems.*

>`Failed` 

## CL3: Check, if there is no hardcoded input file path in the adapter file.

*Make sure that input source files are referred using macros with relative paths.*

>`Failed` 

## CL4: Does the adapter file have a valid description.

*The reason for creating or modifying the adapter should be recorded in the description block, for aspect file and in case of stub, proper comments should be added.The purpose of introducing the adapter should be provided in such a way that the need for the aspect/stub is clear and understandable*

>`Failed` 

## CL5: Check, if adapter file name is synchronized with source file name.

*The adapter file name should correlate with the source file name.*

>`Failed` 

## CL6: Check, if the variable or function created by the adapter follows proper naming conventions.

*Make sure that newly added variables or functions follows proper naming conventions.*

>`Failed` 
