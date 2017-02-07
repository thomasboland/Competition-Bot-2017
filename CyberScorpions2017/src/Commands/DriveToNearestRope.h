#ifndef DriveToNearestRope_H
#define DriveToNearestRope_H

#include "../CommandBase.h"

class DriveToNearestRope : public CommandBase {
public:
	DriveToNearestRope();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveToNearestRope_H
