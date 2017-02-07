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
};

#endif  // DriveTrain_H
