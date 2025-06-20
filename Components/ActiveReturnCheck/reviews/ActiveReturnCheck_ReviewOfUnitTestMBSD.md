# Software Unit Test Review - MBSD 

[Template file](https://inside-docupedia.bosch.com/confluence/x/z-AyYg) 

[Docupedia page of the review](https://inside-docupedia.bosch.com/confluence/display/ASAPP/ReviewOfUnitTestMBSD) 

--- 

## Documents Reviewed: 

1. [DoorsDesReq](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b42-100003d) Doors Design Requirement Baseline [53.0]
2. [DoorsTestSpec](doors://fe-dorapcm8.de.bosch.com:36677/?version=2&prodID=0&urn=urn:telelogic::1-508e413214e63dd9-B-001f5b4a-1000038) Doors TestSpecification Baseline [52.0]
3. [BTC](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/ActiveReturnCheck_BTCProfile_et.epp) BTC profile
4. [BTCreportMIL](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/Reports/ActiveReturnCheck_TestExecutionReport_MIL_et.html) BTC MIL report
5. [BTCreportSIL](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/Reports/ActiveReturnCheck_TestExecutionReport_SIL_et.html) BTC SIL report
6. [BTCreportCodeAnalysis](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/Reports/ActiveReturnCheck_CodeAnalysisReport_et.html) BTC Code Analysis Report
7. [BTCreportB2B](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/Reports/ActiveReturnCheck_B2BTestReport_MILvsSIL_et.html) BTC B2B report
8. [TestlistXML](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/45bd2ceba865998853293ac50f5cb17d7fc6311f#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/testlist.xml) TestListXML
9. [BTCDomain](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/c2d194acc0164979d27b788db4326356013cfb4c#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/DomainCoverageGoals_ActRetI_DiSwt.xml) BTC Domain Coverage Goals [ActRetI_DiSwt]
10. [BTCDomain](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/560a11d847c8a1572f691c05b4dd8e8018d03679#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/DomainCoverageGoals_ActRetI_Mon.xml) BTC Domain Coverage Goals [ActRetI_Mon]
11. [BTCDomain](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/560a11d847c8a1572f691c05b4dd8e8018d03679#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/DomainCoverageGoals_ActRetI_Satn.xml) BTC Domain Coverage Goals [ActRetI_Satn]
12. [BTCDomainCovReport](https://sourcecode02.de.bosch.com/projects/ASMPAPP/repos/asmp-dev/commits/b62f6d34616c09f6d68cd730fe0a4c141bbc1519#/comps_repo/ActiveReturn/components/ActiveReturnCheck/test/BTC/Reports/ActiveReturnCheck_DomainCoverageReport.xml) BTC Domain Coverage Report
--- 

## CL1: Is the test specification compliant with the software unit design, the design requirements and hw/sw-interface?

- DoorsDesReq: OK, no finding

- DoorsTestSpec: OK, no finding

- BTC: OK, no finding

- BTCreportMIL: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 20
		Passed: 20
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- BTCreportSIL: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 20
		Passed: 20
		Failed: 0
		Outdated: 0
		Error: 0
		Missing Executions: 0

<!-- FailedTestAnalysis end -->

- BTCreportCodeAnalysis: OK, no finding

- BTCreportB2B: <!-- FailedTestAnalysis start -->No finding.

		Number of test cases: 20
		Passed: 20
		Failed (accepted): 0
		Failed: 0
		Error: 0

<!-- FailedTestAnalysis end -->

- TestlistXML: OK, no finding

<span style="color:green">Passed</span> 

## CL2: Does the test specification cover the complete (safety) functionality defined within unit design, design requirements and hw/sw-interface?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

## CL3: Does the test specification achieve a code coverage of 100% MC/DC?

- BTCreportCodeAnalysis: <!-- CodeCoverageAnalysis start -->No finding.

		Statement Coverage: 100.0 %
		Decision/Branch Coverage: 100.0 %
		Condition Coverage: 100.0 %
		Condition/Decision Coverage: 100.0 %
		Modified Condition/Decision Coverage: 100.0 %
		Function Coverage: 100.0 %
		Function Call Coverage: 100.0 %
		Switch-Case Coverage: 100.0 %
		Relational Operator Coverage: 75.4 %

<!-- CodeCoverageAnalysis end -->

<span style="color:green">Passed</span> 

### CL3.1: [MC/DC < 100%] Are all design requirements covered by boundary and equivalence class tests?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

### CL3.2: [MC/DC < 100%] Is it documented and justified why MC/DC coverage can not be increased for the code in question by reasonable changes of the unit design and/or unit implementation?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

### CL3.3: [MC/DC < 100%] Is the code in question an instance of the accepted design patterns/use cases? If not: Is an accepted deviation request for the code in question available?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

### CL3.4: [MC/DC < 100%] Is the code in question verified by an inspection as complementary method?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

## CL4: Are boundary and equivalence class tests defined?

- BTC: OK, no finding

<span style="color:green">Passed</span> 

## CL5: Are tests defined concerning possible risks, failures and robustness?

- BTC: OK, no finding

- BTCDomain [ActRetI_DiSwt]: OK, no finding

- BTCDomain [ActRetI_Mon]: OK, no finding

- BTCDomain [ActRetI_Satn]: OK, no finding

- BTCDomainCovReport: <!-- ECCoverageAnalysis start -->No finding.

		ActRetI_DiSwt: 100.0 %
		ActRetI_Mon: 100.0 %
		ActRetI_Satn: 100.0 %

<!-- ECCoverageAnalysis end -->

<span style="color:green">Passed</span> 
