#include "Grid.h"

void Grid::refineCell(std::shared_ptr<Cell> cell) {
	cell->refine();
}

void Grid::coarsenCell(std::shared_ptr<Cell> cell) {
	cell->coarsen();
}

