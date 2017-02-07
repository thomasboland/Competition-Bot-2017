#ifndef DriveToNearestLift_H
#define DriveToNearestLift_H

#include "../CommandBase.h"

class DriveToNearestLift : public CommandBase {
public:
	DriveToNearestLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveToNearestLift_H
