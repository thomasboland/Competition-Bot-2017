#include "CommandBase.h"

#include <Commands/Scheduler.h>

// Initialize a single static instance of all of your subsystems. The following
// line should be repeated for each subsystem in the project.
DriveTrain* CommandBase::drivetrain = new DriveTrain();
GearSleeve* CommandBase::gearsleeve = new GearSleeve();
Winch* CommandBase::winch = new Winch();
Vision* CommandBase::vision = new Vision();

std::unique_ptr<OI> CommandBase::oi = std::make_unique<OI>();

CommandBase::CommandBase(const std::string &name) :
		frc::Command(name) {

}
