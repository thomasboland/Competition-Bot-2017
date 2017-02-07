#include "PlaceGear.h"

PlaceGear::PlaceGear() {
	// Use Requires() here to declare subsystem dependencies
	// eg. Requires(Robot::chassis.get());
	Requires(gearsleeve);
}

// Called just before this Command runs the first time
void PlaceGear::Initialize() {
	gearsleeve->Place();
}

// Called repeatedly when this Command is scheduled to run
void PlaceGear::Execute() {

}

// Make this return true when this Command no longer needs to run execute()
bool PlaceGear::IsFinished() {
	return gearsleeve->IsSetpointReached();
}

// Called once after isFinished returns true
void PlaceGear::End() {
	gearsleeve->Reset();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PlaceGear::Interrupted() {

}
