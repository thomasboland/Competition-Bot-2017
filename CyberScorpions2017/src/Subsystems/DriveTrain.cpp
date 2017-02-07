#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	driveMotorControllerLF = new Spark(DRIVE_MOTOR_CONTROLLER_LF_PORT);
	driveMotorControllerLR = new Spark(DRIVE_MOTOR_CONTROLLER_LR_PORT);
	driveMotorControllerRF = new Spark(DRIVE_MOTOR_CONTROLLER_RF_PORT);
	driveMotorControllerRR = new Spark(DRIVE_MOTOR_CONTROLLER_RR_PORT);
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new DriveWithJoystick());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::Drive(double acceleration, double steering, double sensitivity) {

}
