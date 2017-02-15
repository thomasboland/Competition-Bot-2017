#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	definedYet = false;
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::Drive(double acceleration, double steering) {
	if (!definedYet) {
		driveBase = new frc::RobotDrive(0, 1, 2, 3);
		definedYet = true;
	}
	driveBase->ArcadeDrive(acceleration, steering);
}
