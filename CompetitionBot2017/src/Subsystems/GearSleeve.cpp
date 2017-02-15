#include "GearSleeve.h"
#include "../RobotMap.h"

GearSleeve::GearSleeve() : Subsystem("GearSleeve") {
	definedYet = false;
	isUp = false;
}

void GearSleeve::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void GearSleeve::Toggle() {
	if (!definedYet) {
		gearServo = new frc::Servo(4);
		definedYet = true;
	}
	if (isUp) {
		gearServo->Set(downPoint);
		frc::Wait(0.8);
		gearServo->StopMotor();
		frc::SmartDashboard::PutString("Gear Position", "Down");
		isUp = false;
	} else {
		gearServo->Set(upPoint);
		frc::SmartDashboard::PutString("Gear Position", "Up");
		isUp = true;
	}
}
