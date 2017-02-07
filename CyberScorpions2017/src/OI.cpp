#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	stick = new Joystick(1);
	btn1 = new JoystickButton(stick, 1);
	btn2 = new JoystickButton(stick, 2);
	btn3 = new JoystickButton(stick, 3);
	btn4 = new JoystickButton(stick, 4);
	btn5 = new JoystickButton(stick, 5);
	btn6 = new JoystickButton(stick, 6);
	btn1->WhenPressed(new PlaceGear());
	btn2->WhileActive(new ClimbRope());
	btn3->WhenPressed(new CompleteDriveToNearestLift());
	btn4->WhenPressed(new CompleteDriveToFarStation());
	btn5->WhenPressed(new CompleteDriveToHomeStation());
	btn6->WhenPressed(new CompleteDriveToNearestRope());
}

Joystick* OI::GetJoystick() {
	return stick;
}
