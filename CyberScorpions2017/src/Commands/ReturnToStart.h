#ifndef ReturnToStart_H
#define ReturnToStart_H

#include "../CommandBase.h"

class ReturnToStart : public CommandBase {
public:
	ReturnToStart();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // ReturnToStart_H
