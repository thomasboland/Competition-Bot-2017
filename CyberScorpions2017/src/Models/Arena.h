/*
 * Arena.h
 *
 *  Created on: Feb 8, 2017
 *      Author: Thomas Boland
 */

#ifndef SRC_MODELS_ARENA_H_
#define SRC_MODELS_ARENA_H_

class Arena {
private:
	std::map<std::string,ArenaCell> cells;
public:
	Arena();
	std::string GetCell(Position pos);
	Position GetCellTarget(std::string cell);
	std::string GetTag(std::string cell, std::string tag);
};

#endif /* SRC_MODELS_ARENA_H_ */
