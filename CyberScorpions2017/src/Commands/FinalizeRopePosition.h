#ifndef FinalizeRopePosition_H
#define FinalizeRopePosition_H

#include "../CommandBase.h"

class FinalizeRopePosition : public CommandBase {
public:
	FinalizeRopePosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // FinalizeRopePosition_H
