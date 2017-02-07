#include "DriveWithJoystick.h"

DriveWithJoystick::DriveWithJoystick() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain);
}

// Called just before this Command runs the first time
void DriveWithJoystick::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveWithJoystick::Execute() {
	Joystick* stick = oi->GetJoystick();
	drivetrain->Drive(stick->GetRawAxis(1), stick->GetRawAxis(0), (stick->GetRawAxis(3)*0.9)+0.1);

}

// Make this return true when this Command no longer needs to run execute()
bool DriveWithJoystick::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveWithJoystick::End() {
	drivetrain->Drive(0.0, 0.0, 0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveWithJoystick::Interrupted() {

}
