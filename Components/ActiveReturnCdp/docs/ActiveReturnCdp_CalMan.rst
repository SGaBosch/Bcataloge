Active Return Cdp (Calibration Data Provider)
#############################################


Short Description
=================

ActiveReturnCdp is a component that is responsible to provide calibration data that is used in ActiveReturn functionality.


Input Signals
-------------

==============================   ======   ====================================================================================================
Signal Name                      Unit     Description
==============================   ======   ====================================================================================================
AbsSteerAng                      deg      Absolute value of corrected steering angle      
AbsMaxSafeVehSpd                 km/h     Maximum vehicle speed. Goal: actual speed over ground <= AbsMaxSafeVehSpd
AbsAvgVehSpd                     km/h     Average vehicle speed. Goal: be as close to the actual speed over ground as possible
AbsDrvrTrq                       Nm       Absolute value of calculated driver torque
ActChar                          -        Actual characteristic
==============================   ======   ====================================================================================================


Output Signals
--------------

====================================================   ========   =======================================================================================================
Signal Name                                            Unit       Description
====================================================   ========   =======================================================================================================
MaxMotTrqDepOnSteerAng_Val                             Nm         Limitation of active return torque depending on steering angle
MaxMotTrqDepOnVehSpd_Val                               Nm         Limitation of active return torque depending on vehicle speed
MaxMotTrq_Val                                          Nm         Limitation of active return torque
MaxMotTrqAftLoadFac                                    Nm         Limitation of active return torque after considering load factor ratio
MaxTBT4ShtDwn_Val                                      Nm         Maximum torsion bar torque to allow active return torque
NomSteerSpd_Val                                        deg/s      Nominal steering angle return speed depending on vehicle speed and steering angle
FilFac_Val                                             -          Filter factor for filtrated nominal steering speed factor and motor torque factor
MotTrqGain_Val                                         -          Motor torque factor
RetTrqFactDepOnDrvr_Val                                -          Factor of active return motor torque (after limitation) depending on driver torque and vehicle speed
SteerSpdFactDepOnDrvr_Val                              -          Factor of nominal steering speed depending on driver torque and vehicle speed
SteerSpdAmp_Val                                        Nm*s/deg   Active return control amplification
SteerSpdFact_Val                                       -          Factor of nominal steering speed
====================================================   ========   =======================================================================================================

.. only:: confidential

========================   ======   ================================================
Signal Name                Unit     Description
========================   ======   ================================================
SteerSpdGradAftInvld_Val   -        gradient for ramp up after invalid input signals
========================   ======   ================================================

Detailed Description
--------------------

ActiveReturnCdp provides output of calibration parameters constant, curve and map definitions to ActiveReturn and ActiveReturnCheck components. There exist 3 sets of calibration data which is selected based on ActChar signal.

Calibration/Application Parameters
==================================

.. Please note: the following list of parameters will always be visible in the generated documentation!

========================================   ========   =======   =======================================================================================================
Parameter Name                             Unit       Range     Description
========================================   ========   =======   =======================================================================================================
NomSteerSpd                                deg/s      0..1500   Nominal steering angle return speed depending on vehicle speed and steering angle
MaxMotTrq                                  Nm         0..3      Limitation of active return torque
MaxMotTrqAftLoadFac                        Nm         0..3      Limitation of active return torque after considering load factor ratio
FilFac                                     -          0.01..1   Filter factor for filtrated nominal steering speed factor and motor torque factor
MotTrqGain                                 -          0...3     Motor torque factor
SteerSpdAmp                                Nm*s/deg   0..0.02   Active return control amplification
SteerSpdFact                               -          0..1.5    Factor of nominal steering speed
RetTrqFactDepOnDrvr                        -          0..1      Factor of active return motor torque (after limitation) depending on driver torque and vehicle speed
SteerSpdFactDepOnDrvr                      -          0..1      Factor of nominal steering speed depending on driver torque and vehicle speed
========================================   ========   =======   =======================================================================================================

.. only:: confidential
   
   ========================================   ========   =======   =================================================
   Parameter Name [internal]                  Unit       Range     Description
   ========================================   ========   =======   =================================================
   SteerSpdGradAftInvld                       -          0..1      gradient for ramp up after invalid input signals
   ========================================   ========   =======   =================================================


.. include:: ActiveReturnCdp_CalMan_VT.irst
