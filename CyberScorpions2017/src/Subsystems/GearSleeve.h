#ifndef GearSleeve_H
#define GearSleeve_H

#include <Commands/Subsystem.h>
#include "WPILib.h"

class GearSleeve : public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Servo* gearPlacementServo;
	double setpointSleeveUp;
	double setpointSleeveDown;
	bool setpointReached;

public:
	GearSleeve();
	void InitDefaultCommand();
	void Place();
	void Reset();
	bool IsSetpointReached();
};

#endif  // GearSleeve_H
