#include "DriveTrain.h"
#include "../RobotMap.h"

DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	definedYet = false;
}

void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	// SetDefaultCommand(new MySpecialCommand());
}

void DriveTrain::Drive(double acceleration, double steering) {
	if (!definedYet) {
		driveBase = new frc::RobotDrive(0, 1, 2, 3);
		leftEncoder = new frc::Encoder(0, 1);
		rightEncoder = new frc::Encoder(2, 3);
		leftEncoder->SetMaxPeriod(.1);
		leftEncoder->SetMinRate(10);
		leftEncoder->SetDistancePerPulse(5);
		leftEncoder->SetReverseDirection(true);
		leftEncoder->SetSamplesToAverage(7);
		definedYet = true;
	}
	driveBase->ArcadeDrive(acceleration, steering);
	frc::SmartDashboard::PutNumber("leftEncoder", leftEncoder->GetRaw());
	frc::SmartDashboard::PutNumber("rightEncoder", rightEncoder->GetRaw());
}
