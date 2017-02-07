#include "DriveToHomeStation.h"

DriveToHomeStation::DriveToHomeStation() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain);
}

// Called just before this Command runs the first time
void DriveToHomeStation::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveToHomeStation::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool DriveToHomeStation::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveToHomeStation::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToHomeStation::Interrupted() {

}
