# Software Unit Test Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitTestMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [DoorsTestSpec](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b4a-1000038) Doors TestSpecification Baseline [60.0]
3. [BTC](../test/BTC/ActiveReturn_BTCProfile_et.epp) BTC profile
4. [BTCreportMIL](../test/BTC/Reports/ActiveReturn_TestExecutionReport_MIL_et.html) BTC MIL report
5. [BTCreportSIL](../test/BTC/Reports/ActiveReturn_TestExecutionReport_SIL_et.html) BTC SIL report
6. [BTCreportCodeAnalysis](../test/BTC/Reports/ActiveReturn_CodeAnalysisReport_et.html) BTC Code Analysis Report
7. [BTCreportB2B](../test/BTC/Reports/ActiveReturn_B2BTestReport_MILvsSIL_et.html) BTC B2B report
8. [TestlistXML](../test/testlist.xml) TestListXML
9. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetI_CalcActvRetTrq.xml) BTC Domain Coverage Goals [ActRetI_CalcActvRetTrq]
11. [BTCDomainCovReport](../test/BTC/Reports/ActiveReturn_DomainCoverageReport.xml) BTC Domain Coverage Report
--- 

## CL1: Is the test specification compliant with the software unit design, the design requirements and hw/sw-interface?

- [DoorsDesReq]: Ok, no findings

- [DoorsTestSpec]: Ok, no findings

- [BTC]: Ok, no findings

- [BTCreportMIL]: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 29
		Passed: 29
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- [BTCreportSIL]: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 29
		Passed: 29
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- [BTCreportCodeAnalysis]: <!-- FailedTestAnalysis start -->ok, (relational operator coverage is not 100% in the develop)

Properties	Covered
Statement Coverage   100.0%	
Decision/Branch Coverage	100.0%	
Condition Coverage	100.0%	
Condition/Decision Coverage	100.0%	
Modified Condition/Decision Coverage	100.0%	
Function Coverage	100.0%	
Function Call Coverage	100.0%	
Switch-Case Coverage	n/a	
Relational Operator Coverage	75.4%	

<!-- FailedTestAnalysis end -->

- [BTCreportB2B]: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 29
		Passed: 29
		Failed (accepted): 0
		Failed: 0
		Error: 0

<!-- FailedTestAnalysis end -->

- [TestlistXML]: No findings

<span style="color:green">Passed</span> 

## CL2: Does the test specification cover the complete (safety) functionality defined within unit design, design requirements and hw/sw-interface?

- BTC: ok, no findings

<span style="color:green">Passed</span> 

## CL3: Does the test specification achieve a code coverage of 100% MC/DC?

- BTCreportCodeAnalysis: <!-- CodeCoverageAnalysis start -->No finding,(relational operator coverage is not 100% in the develop)

		Statement Coverage: 100.0 %
		Decision/Branch Coverage: 100.0 %
		Condition Coverage: 100.0 %
		Condition/Decision Coverage: 100.0 %
		Modified Condition/Decision Coverage: 100.0 %
		Function Coverage: 100.0 %
		Function Call Coverage: 100.0 %
		Switch-Case Coverage: n/a %
		Relational Operator Coverage: 75.4 %

<!-- CodeCoverageAnalysis end -->

<span style="color:green">Passed</span> 

### CL3.1: [MC/DC < 100%] Are all design requirements covered by boundary and equivalence class tests?

- BTC: NA

<span style="color:green">Passed</span> 

### CL3.2: [MC/DC < 100%] Is it documented and justified why MC/DC coverage can not be increased for the code in question by reasonable changes of the unit design and/or unit implementation?

- BTC: NA

<span style="color:green">Passed</span> 

### CL3.3: [MC/DC < 100%] Is the code in question an instance of the accepted design patterns/use cases? If not: Is an accepted deviation request for the code in question available?

- BTC: NA

<span style="color:green">Passed</span> 

### CL3.4: [MC/DC < 100%] Is the code in question verified by an inspection as complementary method?

- BTC: NA

<span style="color:green">Passed</span> 

## CL4: Are boundary and equivalence class tests defined?

- BTC: Ok, no findings

<span style="color:green">Passed</span> 

## CL5: Are tests defined concerning possible risks, failures and robustness?

- BTC: ok, no findings

- BTCDomain [ActRetI_CalcActvRetTrq]: Ok, no findings

- BTCDomainCovReport: <!-- ECCoverageAnalysis start -->No finding.

		ActRetI_CalcActvRetTrq: 100 %
		ActRetI_InterpolCharacteristics: 100.0 %

<!-- ECCoverageAnalysis end -->

<span style="color:green">Passed</span> 
