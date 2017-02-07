#include <memory>

#include <Commands/Command.h>
#include <Commands/Scheduler.h>
#include <IterativeRobot.h>
#include <LiveWindow/LiveWindow.h>
#include <SmartDashboard/SendableChooser.h>
#include <SmartDashboard/SmartDashboard.h>

#include "CommandBase.h"

#include "Models/Position.h"

class Robot: public frc::IterativeRobot {
public:

	Position currentPosition = new Position(0.0, 0.0, 0.0);
	Position startPosition = new Position(0.0, 0.0, 0.0);

	void RobotInit() override {
		autonomousCommand = new AutonomousCommand();
	}

	void DisabledInit() override {

	}

	void DisabledPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

	void AutonomousInit() override {
		autonomousCommand->Start();
	}

	void AutonomousPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

	void TeleopInit() override {
		if (autonomousCommand != nullptr) {
			autonomousCommand->Cancel();
		}
	}

	void TeleopPeriodic() override {
		frc::Scheduler::GetInstance()->Run();
	}

private:
	frc::Command* autonomousCommand;
};

START_ROBOT_CLASS(Robot)
