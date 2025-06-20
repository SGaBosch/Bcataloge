# Software Unit Test Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitTestMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [61.1]
2. [DoorsTestSpec](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b4a-1000038) Doors TestSpecification Baseline [60.0]
3. [BTC](../test/BTC/ActiveReturn_L_Adapter_BTCProfile_et.epp) BTC profile
4. [BTCreportMIL](../test/BTC/Reports/ActiveReturn_L_Adapter_TestExecutionReport_MIL_et.html) BTC MIL report
5. [BTCreportSIL](../test/BTC/Reports/ActiveReturn_L_Adapter_TestExecutionReport_SIL_et.html) BTC SIL report
6. [BTCreportCodeAnalysis](../test/BTC/Reports/ActiveReturn_L_Adapter_CodeAnalysisReport_et.html) BTC Code Analysis Report
7. [BTCreportB2B](../test/BTC/Reports/ActiveReturn_L_Adapter_B2BTestReport_MILvsSIL_et.html) BTC B2B report
8. [TestlistXML](../test/testlist.xml) TestListXML
9. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetLAdapter_100msStart.xml) BTC Domain Coverage Goals [ActRetLAdapter_100msStart]
10. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetLAdapter_10msEnd.xml) BTC Domain Coverage Goals [ActRetLAdapter_10msEnd]
11. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetLAdapter_10msStart.xml) BTC Domain Coverage Goals [ActRetLAdapter_10msStart]
12. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetLAdapter_DiagData.xml) BTC Domain Coverage Goals [ActRetLAdapter_DiagData]
13. [BTCDomain](../test/BTC/DomainCoverageGoals_ActRetLAdapter_SetEventEntry.xml) BTC Domain Coverage Goals [ActRetLAdapter_SetEventEntry]
14. [BTCDomainCovReport](../test/BTC/Reports/ActiveReturn_L_Adapter_DomainCoverageReport.xml) BTC Domain Coverage Report
--- 

## CL1: Is the test specification compliant with the software unit design, the design requirements and hw/sw-interface?

- DoorsDesReq: Not affected by this change NA

- DoorsTestSpec: Not affected by this change NA

- BTC: No finding.

- BTCreportMIL: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 6
		Passed: 6
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- BTCreportSIL: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 6
		Passed: 6
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- BTCreportCodeAnalysis: No finding.

- BTCreportB2B: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 6
		Passed: 6
		Failed (accepted): 0
		Failed: 0
		Error: 0

<!-- FailedTestAnalysis end -->

- TestlistXML: NA

<span style="color:green">Passed</span> 

## CL2: Does the test specification cover the complete (safety) functionality defined within unit design, design requirements and hw/sw-interface?

- BTC: No finding.

<span style="color:green">Passed</span> 

## CL3: Does the test specification achieve a code coverage of 100% MC/DC?

- BTCreportCodeAnalysis: <!-- CodeCoverageAnalysis start -->No finding.

		Statement Coverage: 100.0 %
		Decision/Branch Coverage: 100.0 %
		Condition Coverage: n/a %
		Condition/Decision Coverage: 100.0 %
		Modified Condition/Decision Coverage: 100.0 %
		Function Coverage: 100.0 %
		Function Call Coverage: 100.0 %
		Switch-Case Coverage: n/a %
		Relational Operator Coverage: 86.7 %

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

- BTC: No findings

<span style="color:green">Passed</span> 

## CL5: Are tests defined concerning possible risks, failures and robustness?

- BTC: No findings

- BTCDomainCovReport: <!-- ECCoverageAnalysis start -->No finding.

		ActRetLAdapter_100msStart: 100.0 %
		ActRetLAdapter_10msEnd: 100.0 %
		ActRetLAdapter_10msStart: 100.0 %
		ActRetLAdapter_DiagData: 100.0 %
		ActRetLAdapter_SetEventEntry: 100.0 %

<!-- ECCoverageAnalysis end -->

<span style="color:green">Passed</span> 
