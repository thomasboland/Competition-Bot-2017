#include "DriveToFarStation.h"

DriveToFarStation::DriveToFarStation() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain);
}

// Called just before this Command runs the first time
void DriveToFarStation::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void DriveToFarStation::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool DriveToFarStation::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DriveToFarStation::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveToFarStation::Interrupted() {

}
