#include "HoldRope.h"

HoldRope::HoldRope() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(winch.get());
}

// Called just before this Command runs the first time
void HoldRope::Initialize() {
	winch->SetMotorPower(0.2);
}

// Called repeatedly when this Command is scheduled to run
void HoldRope::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool HoldRope::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void HoldRope::End() {

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void HoldRope::Interrupted() {

}
