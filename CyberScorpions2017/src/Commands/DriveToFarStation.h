#ifndef DriveToFarStation_H
#define DriveToFarStation_H

#include "../CommandBase.h"

class DriveToFarStation : public CommandBase {
public:
	DriveToFarStation();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveToFarStation_H
