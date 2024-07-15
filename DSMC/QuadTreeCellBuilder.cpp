#include "QuadTreeCellBuilder.h"

QuadTreeCellBuilder::QuadTreeCellBuilder() {
	reset();
}

void QuadTreeCellBuilder::reset() {
	_cell = std::make_shared<QuadTreeCell>();
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setPosXBC(std::shared_ptr<Boundary> boundary) {
	_cell->posXBC = boundary;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setPosYBC(std::shared_ptr<Boundary> boundary) {
	_cell->posYBC = boundary;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setNegXBC(std::shared_ptr<Boundary> boundary) {
	_cell->negYBC = boundary;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setNegYBC(std::shared_ptr<Boundary> boundary) {
	_cell->negYBC = boundary;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setPosXNbr(std::shared_ptr<QuadTreeCell> cell) {
	_cell->posXNbr = cell;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setPosYNbr(std::shared_ptr<QuadTreeCell> cell) {
	_cell->posYNbr = cell;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setNegXNbr(std::shared_ptr<QuadTreeCell> cell) {
	_cell->negXNbr = cell;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setNegYNbr(std::shared_ptr<QuadTreeCell> cell) {
	_cell->negYNbr = cell;
	return *this;
}

QuadTreeCellBuilder& QuadTreeCellBuilder::setParent(std::shared_ptr<QuadTreeCell> parent) {
	_cell->parent = parent;
	return *this;
}

std::shared_ptr<QuadTreeCell> QuadTreeCellBuilder::build() {
	return _cell;
}
