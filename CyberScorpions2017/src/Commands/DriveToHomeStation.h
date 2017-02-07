#ifndef DriveToHomeStation_H
#define DriveToHomeStation_H

#include "../CommandBase.h"

class DriveToHomeStation : public CommandBase {
public:
	DriveToHomeStation();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // DriveToHomeStation_H
