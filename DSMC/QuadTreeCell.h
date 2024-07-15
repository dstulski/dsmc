#pragma once

#include "Cell.h"

/**
 * @brief 2D collision mesh cell represented by a quad tree
 */
struct QuadTreeCell : public Cell {
	// boundaries in each direction
	std::shared_ptr<Boundary> posXBC, posYBC, negXBC, negYBC;

	// neighbor cells in each direction
	std::shared_ptr<QuadTreeCell> posXNbr, posYNbr, negXNbr, negYNbr;

	// child cells, enumerated using Cartesion coordinate convention
	std::shared_ptr<QuadTreeCell> quad1, quad2, quad3, quad4;

	/**
	 * @brief Constructor for QuadTreeCell
	 * @param _posXBC BC in the positive X direction
	 * @param _posYBC BC in the positive Y direction
	 * @param _negXBC BC in the positive X direction
	 * @param _negYBC BC in the positive Y direction
	 * @param _posXNbr neighbor in the positive X direction
	 * @param _posYNbr neighbor in the positive Y direction
	 * @param _negXNbr neighbor in the positive X direction
	 * @param _negYNbr neighbor in the positive Y direction
	 */
	QuadTreeCell(
		std::shared_ptr<Boundary> _posXBC,
		std::shared_ptr<Boundary> _posYBC,
		std::shared_ptr<Boundary> _negXBC,
		std::shared_ptr<Boundary> _negYBC,
		std::shared_ptr<QuadTreeCell> _posXNbr,
		std::shared_ptr<QuadTreeCell> _posYNbr,
		std::shared_ptr<QuadTreeCell> _negXNbr,
		std::shared_ptr<QuadTreeCell> _negYNbr
	);

	/**
	 * @brief Returns if the cell has any children
	 */
	bool hasChildren() override;

	/**
	 * @brief Refines the cell by splitting it
	 */
	void refine() override;

	/**
	 * @brief Coarsens the cell by merging all children
	 */
	void coarsen() override;
};
