/*
 * ArenaCell.cpp
 *
 *  Created on: Feb 8, 2017
 *      Author: Thomas Boland
 */

#include <Models/ArenaCell.h>

ArenaCell::ArenaCell(double x, double y, std::map<std::string,std::string> t) {
	xCoord = x;
	yCoord = y;
	tags = t;
}

