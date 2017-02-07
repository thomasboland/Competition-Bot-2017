#ifndef FinalizeLiftPosition_H
#define FinalizeLiftPosition_H

#include "../CommandBase.h"

class FinalizeLiftPosition : public CommandBase {
public:
	FinalizeLiftPosition();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // FinalizeLiftPosition_H
