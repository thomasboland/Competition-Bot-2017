#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "../CommandBase.h"

class DriveWithJoystick : public CommandBase {
public:
	DriveWithJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoystick_H
