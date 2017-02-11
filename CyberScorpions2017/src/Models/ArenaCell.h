/*
 * ArenaCell.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Thomas Boland
 */

#ifndef SRC_MODELS_ARENACELL_H_
#define SRC_MODELS_ARENACELL_H_

class ArenaCell {
private:
	double xCoord;
	double yCoord;
	std::map<std::string,std::string> tags;
public:
	ArenaCell(std::list<double> x, std::list<double> y, std::map<std::string,std::string> t);
	std::list<double> xBounds;
	std::list<double> yBounds;
	Position GetTarget();
	bool IsInBounds(Position pos);
	std::string GetTag(std::string key);
};

#endif /* SRC_MODELS_ARENACELL_H_ */
