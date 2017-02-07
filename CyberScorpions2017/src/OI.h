#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick* stick;
	JoystickButton* btn1;
	JoystickButton* btn2;
	JoystickButton* btn3;
	JoystickButton* btn4;
	JoystickButton* btn5;
	JoystickButton* btn6;
public:
	OI();
	Joystick* GetJoystick();
};

#endif  // OI_H
