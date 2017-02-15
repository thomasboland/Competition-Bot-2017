#include "Winch.h"
#include "../RobotMap.h"

Winch::Winch() : Subsystem("Winch") {
	definedYet = false;
}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new ClimbRope());
}

void Winch::SetMotorPower(double power) {
	if (!definedYet) {
		winchMotor = new VictorSP(5);
		definedYet = true;
	}
	winchMotor->Set(-power);
}
