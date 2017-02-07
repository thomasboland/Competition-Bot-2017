#include "GearSleeve.h"
#include "../RobotMap.h"

GearSleeve::GearSleeve() : Subsystem("GearSleeve") {
	gearPlacementServo = new frc::Servo(GEAR_PLACEMENT_SERVO_PORT);
	setpointSleeveUp = 0.5;
	setpointSleeveDown = 0.0;
	setpointReached = false;
}

void GearSleeve::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
	SetDefaultCommand(new PlaceGear());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.

void GearSleeve::Place() {
	setpointReached = false;
	gearPlacementServo->Set(setpointSleeveUp);
	frc::Wait(0.5);
	setpointReached = true;
}

void GearSleeve::Reset() {
	setpointReached = false;
	gearPlacementServo->Set(setpointSleeveDown);
	frc::Wait(0.5);
	setpointReached = true;
}

bool GearSleeve::IsSetpointReached() {
	return setpointReached;
}
