#include "FinalizeLiftPosition.h"

FinalizeLiftPosition::FinalizeLiftPosition() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(drivetrain);
	Requires(vision);
}

// Called just before this Command runs the first time
void FinalizeLiftPosition::Initialize() {

}

// Called repeatedly when this Command is scheduled to run
void FinalizeLiftPosition::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool FinalizeLiftPosition::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void FinalizeLiftPosition::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void FinalizeLiftPosition::Interrupted() {

}
