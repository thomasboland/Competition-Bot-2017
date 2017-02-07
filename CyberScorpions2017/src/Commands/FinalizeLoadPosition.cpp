#include "FinalizeLoadPosition.h"

FinalizeLoadPosition::FinalizeLoadPosition() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain);
	Requires(vision);
}

// Called just before this Command runs the first time
void FinalizeLoadPosition::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void FinalizeLoadPosition::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool FinalizeLoadPosition::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FinalizeLoadPosition::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FinalizeLoadPosition::Interrupted() {

}
