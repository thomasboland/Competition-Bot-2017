#ifndef DriveTrain_H
#define DriveTrain_H

#include <Commands/Subsystem.h>
#include "WPILib.h";

class DriveTrain : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Spark* driveMotorControllerLF;
	Spark* driveMotorControllerLR;
	Spark* driveMotorControllerRF;
	Spark* driveMotorControllerRR;
public:
	DriveTrain();
	void InitDefaultCommand();
	void Drive(double acceleration, double steering, double sensitiviy);
	void DriveByTime(double left, double right, double ms);
	void DriveByDistance(double forward, double left);
	void TurnTo(double orientation);
	void DriveToPoint(Position position);
};

#endif  // DriveTrain_H
