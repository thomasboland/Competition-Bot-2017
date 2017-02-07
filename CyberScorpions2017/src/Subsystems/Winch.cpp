#include "Winch.h"
#include "../RobotMap.h"

Winch::Winch() : Subsystem("Winch") {
	winchMotorController = new VictorSP(WINCH_MOTOR_CONTROLLER_PORT);
	winchMotorController.SetSafetyEnabled(true);
}

void Winch::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new ClimbRope());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void Winch::Climb(double power) {
	winchMotorController.Set(power);
}
