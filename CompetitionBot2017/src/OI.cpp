#include "OI.h"

#include "Commands/ToggleGear.h"
#include "Commands/ClimbRope.h"
#include "Commands/StopClimbingRope.h"

OI::OI() {
	stick = new frc::Joystick(0);
	btn1 = new frc::JoystickButton(stick, 1);
	btn2 = new frc::JoystickButton(stick, 2);
	btn1->WhenPressed(new ToggleGear());
	btn2->WhenPressed(new ClimbRope());
	btn2->WhenReleased(new StopClimbingRope());
}

Joystick* OI::GetJoystick() {
	return stick;
}
