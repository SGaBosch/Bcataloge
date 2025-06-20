Active Return
#############


Short Description
=================

ActiveReturn is a component that controls the return speed of the steering wheel in dependence upon 
the steering angle and vehicle speed. It therefore also concerns itself with a small part 
of steering damping based on the control. The application of this function is responsible for the 
return behavior and the overshoot behavior.


Block Diagram
=============

.. image:: ActiveReturn_CalMan_BlockDiagram.png


Input Signals
-------------

====================================   ======   ====================================================================================================================================================================================================
Signal Name                            Unit     Description
====================================   ======   ====================================================================================================================================================================================================
AbsAvgVehSpd                           km/h     Average vehicle speed. Goal: be as close to the actual speed over ground as possible.
SteerAng                               deg      Corrected steering angle
SteerAngSpd                            deg/s    Speed of the steering angle
DrvrTrq                                Nm       Calculated driver torque
SteerAngSt                             -        Steering angle status (0=Error, 1=RawInit, 2=ExactlyInit, 3=NotInit)
GearSign                               -        Sign of the steering gear
ActvRetSpdFac                          -        Requested active return speed factor
ActvRetFuncFac                         -        Requested active return function factor
FilFac                                 -        Filter factor for filtrated nominal steering speed factor and motor torque factor
SteerSpdFact                           -        Factor of nominal steering speed
SteerSpdGradAftInvld                   -        Gradient for ramp up after invalid input signals
SteerSpdAmp                            Nm*s/°   Active return control amplification 
MaxMotTrq                              Nm       Limitation of active return torque
LoadFacRat                             -        Ratio between learned and init LoadFactor.If a 50% boost is required in the output torque, the value of LoafFacRat shoudl be 0.5.However 200% boost on output torque is possible as per the design
====================================   ======   ====================================================================================================================================================================================================


Output Signals
--------------

==============================   ======   ================================================================
Signal Name                      Unit     Description
==============================   ======   ================================================================
ActvRetMotTrq4Chk                Nm       Motor torque of active return component for check
==============================   ======   ================================================================

.. only:: confidential

	==============================   ======   ================================================================
	Signal Name                      Unit     Description
	==============================   ======   ================================================================
	ActvRetSpdFacFilt                -        Filtered active return steering speed factor
	ActvRetRetSpdDiff                deg/s    Difference of steering speed controller
	ActvRetTrqFacFilt                -        Filtrated active return motor torque factor due to driver torque
	==============================   ======   ================================================================

Detailed Description
--------------------

ActiveReturn represents a functionality that is to be applied in one or more loops with the assistance calculation due to the additional part in the motor torque.
The characteristic field "nominal steering angle return speed depending on vehicle speed and steering angle" is controlling for the return / damping torque 
as a general principle. The return speed over the steering angle is to be coordinated in such a way that the highest return speed exists with a maximum steering angle and there
is no longer any return speed with straightaway driving. The return speed can also be zero a few degrees outside of the middle of the steering range, depending on the type of 
center alignment that is desired from the return. This coordination will be provided for all vehicle speeds. The level of the target return speed can be changed 
between 0 and 150 % with the aid of a constant factor (SteerSpdFact). Part of the damping is influenced by the control amplification. A factor dependent upon
the vehicle speed (MotTrqGain) is adjusted for this. The factor dependent upon the speed can have any value, even at a stand still.The active return is limited 
over the actuation torque; two dependencies are to be coordinated in the process: A characteristic curve (SteerSpdFactDepOnDrvr) reduces the target return speed 
in dependence upon the driver torque. This reduction prevents the steering system from trying to move back too strongly against an actuation torque that is being applied (it subjectively
feels like one is pushing against a spring -> "spring effect").The second characteristic curve (RetTrqFactDepOnDrvr) reduces the control amplification in dependence upon
the driver torque. The spring effect and the damping are influenced by that. Thus, if the target return speed is reduced to zero (or nearly zero) starting with a specific torsion bar torque
and the control amplification is left at a certain minimum value, damping can be achieved with an actuation torque that is being applied (e.g. in the case of cornering) without an interfering
spring effect.

Calibration/Application Parameters
==================================

.. Please note: the following list of parameters will always be visible in the generated documentation!

Defined in and provided by ActiveReturnCdp component.
