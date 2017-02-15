#ifndef HoldRope_H
#define HoldRope_H

#include "../CommandBase.h"

class HoldRope : public CommandBase {
public:
	HoldRope();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif  // HoldRope_H
