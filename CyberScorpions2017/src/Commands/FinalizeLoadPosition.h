#ifndef FinalizeLoadPosition_H
#define FinalizeLoadPosition_H

#include "../CommandBase.h"

class FinalizeLoadPosition : public CommandBase {
public:
	FinalizeLoadPosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // FinalizeLoadPosition_H
