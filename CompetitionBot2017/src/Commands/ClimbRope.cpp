#include "ClimbRope.h"

ClimbRope::ClimbRope() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(winch.get());
}

// Called just before this Command runs the first time
void ClimbRope::Initialize() {
	winch->SetMotorPower(1.0);
}

// Called repeatedly when this Command is scheduled to run
void ClimbRope::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool ClimbRope::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ClimbRope::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbRope::Interrupted() {

}
