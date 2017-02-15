#ifndef GearSleeve_H
#define GearSleeve_H

#include <Commands/Subsystem.h>

#include <WPILib.h>

class GearSleeve : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	bool definedYet;
	bool isUp;
	double downPoint = 0.75;
	double upPoint = 0.3;
	Servo* gearServo;
public:
	GearSleeve();
	void InitDefaultCommand();
	void Toggle();
};

#endif  // GearSleeve_H
