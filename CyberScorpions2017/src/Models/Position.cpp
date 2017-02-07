/*
 * Position.cpp
 *
 *  Created on: Feb 7, 2017
 *      Author: thomas.boland
 */

#include "Position.h"

Position::Position(double x, double y, double o) {
	xCoord = x;
	yCoord = y;
	orientation = o;
}

double Position::GetX() {
	return xCoord;
}

double Position::GetY() {
	return yCoord;
}

double Position::GetO() {
	return orientation;
}

void Position::SetX(double x) {
	xCoord = x;
}

void Position::SetY(double y) {
	yCoord = y;
}

void Position::SetO(double o) {
	orientation = o;
}

Position Position::GetDelta(Position position) {
	// Returns a relative "Position" of [arg0 position] to this Position
	// (except for orientation because that is defined absolutely)
	return new Position(position.GetX()-xCoord, position.GetY()-yCoord, position.GetO());
}
