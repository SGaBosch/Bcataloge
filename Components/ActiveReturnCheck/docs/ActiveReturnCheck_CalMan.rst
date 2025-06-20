Active Return Check
###################

.. only:: confidential

   .. warning:: This document is classified as **confidential**! Do not distribute!


Short Description
=================

The component ActiveReturnCheck is responsible for the saturation and monitoring of the motor torque calculated by ActiveReturn.
In case of a deviation detected by the implemented monitoring functionality
the output torque is set to zero.


Block Diagram
=============

.. image:: ActiveReturnCheck_CalMan_BlockDiagram.png


Input Signals
-------------

==============================   ====   ==========================================================================
Signal Name                      Unit   Description
==============================   ====   ==========================================================================
ActvRetMotTrq4Chk                Nm     motor torque of active return component for check
AbsMaxSafeVehSpd                 km/h   Maximum vehicle speed. Goal: actual speed over ground <= AbsMaxSafeVehSpd
TorsBarTrq                       Nm     torsion bar torque
SteerAng                         deg    corrected steering angle
MaxTBT4ShtDwn                    Nm         Maximum torsion bar torque to allow active return torque
==============================   ====   ==========================================================================


Output Signals
--------------

==============================   ====   ===============================================================================
Signal Name                      Unit   Description
==============================   ====   ===============================================================================
ActvRetMotTrq                    Nm     motor torque of active return functionality
==============================   ====   ===============================================================================

.. only:: confidential

	==============================   ====   ===============================================================================
	Signal Name                      Unit   Description
	==============================   ====   ===============================================================================
	ActvRetMotTrqSatn                Nm     saturated motor torque
	ActvRetDi                        -      in case of a detected error during the monitoring the active return is disabled
	==============================   ====   ===============================================================================


Detailed Description
--------------------

The ActiveReturnCheck provides the safety limitation of the calculated motor torque depending
on vehicle speed and steering angle. In case of an invalid input signal the substituion value
is choosen to take the lowest value of the appropriate curve.

Usually the torque from Active Return and all the other part torques (Power Assist, etc.) are tuned in a way that together they provide
a proper steering feeling. In case functionality Motor Torque Limiter ramps out MTL_MotorTorque, the torques from functionality Active Return,
Software Endstop and Loss of Assist Prevention remain as the only torques and must also be controllable in this situation.
Independently from Software Endstop this is ensured as follows:
If functionality Active Return exclusively sets its torque, a very high torque towards the center position maybe induced
which is not controllable by the driver. This induced torque leads to a Steering Torque ~8Nm. If such a high Steering Torque is recognized,
Active Return is immediately switched off.

The runnable Saturation implements the safety limitation. The Monitoring implementation is to ensure the ASIL integrity.



Calibration/Application Parameters
==================================

.. Please note: the following list of parameters will always be visible in the generated documentation!

Defined in and provided by ActiveReturnCdp component.

.. include:: ActiveReturnCheck_CalMan_VT.irst
