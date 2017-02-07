#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	stick = new frc::Joystick(1);
	btn1 = new frc::JoystickButton(stick, 1);
	btn2 = new frc::JoystickButton(stick, 2);
	btn3 = new frc::JoystickButton(stick, 3);
	btn4 = new frc::JoystickButton(stick, 4);
	btn5 = new frc::JoystickButton(stick, 5);
	btn6 = new frc::JoystickButton(stick, 6);
	btn1->WhenPressed(new PlaceGear());
	btn2->WhileActive(new ClimbRope());
	btn3->WhenPressed(new CompleteDriveToNearestLift());
	btn4->WhenPressed(new CompleteDriveToFarStation());
	btn5->WhenPressed(new CompleteDriveToHomeStation());
	btn6->WhenPressed(new CompleteDriveToNearestRope());
}

frc::Joystick* OI::GetJoystick() {
	return stick;
}
