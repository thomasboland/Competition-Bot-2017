/*
 * Position.h
 *
 *  Created on: Feb 7, 2017
 *      Author: thomas.boland
 */

#ifndef POSITION_H_
#define POSITION_H_

class Position {
private:
	double xCoord;
	double yCoord;
	double orientation;
public:
	Position(double x, double y, double o);
	double GetX();
	double GetY();
	double GetO();
	void SetX(double x);
	void SetY(double y);
	void SetO(double o);
	Position GetDelta(Position position);
};

#endif /* POSITION_H_ */
