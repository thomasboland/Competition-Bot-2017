#ifndef DriveWithJoystick_H
#define DriveWithJoystick_H

#include "../CommandBase.h"

class DriveWithJoystick : public CommandBase {
RobotDrive myRobot;
Joystick stick;
	public:
	DriveWithJoystick():
	myRobot(0,1,2,3),
	stick(0);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveWithJoystick_H
