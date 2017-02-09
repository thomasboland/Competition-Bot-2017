/*
 * ArenaCell.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Thomas Boland
 */

#ifndef SRC_MODELS_ARENACELL_H_
#define SRC_MODELS_ARENACELL_H_

class ArenaCell {
public:
	ArenaCell(double x, double y, std::map<std::string,std::string> t);
	double xCoord;
	double yCoord;
	double tags;
};

#endif /* SRC_MODELS_ARENACELL_H_ */
