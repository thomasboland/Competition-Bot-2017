/*
 * ArenaCell.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Thomas Boland
 */

#include <Models/ArenaCell.h>

ArenaCell::ArenaCell(std::list<double> x, std::list<double> y, std::map<std::string,std::string> t) {
	xBounds = x;
	yBounds = y;
	xCoord = x[0] + ((x[1] - x[0]) / 2);
	yCoord = y[0] + ((y[1] - y[0]) / 2);
	tags = t;
}

Position ArenaCell::GetTarget() {
	return new Position(xCoord, yCoord, 0.0);
}

bool ArenaCell::IsInBounds(Position pos) {
	double x = pos.GetX();
	double y = pos.GetY();
	return (xBounds[0] <= x && x < xBounds[1]) && (yBounds[0] <= y && y < yBounds[1]);
}

std::string ArenaCell::GetTag(std::string key) {
	if (tags[key] != nullptr) {
		return tags[key];
	} else {
		return "";
	}
}
