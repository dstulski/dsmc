#pragma once

#include "Cell.h"

/**
 * @brief 2D collision mesh cell represented by a quad tree
 */
struct QuadTreeCell : public Cell {
	// boundaries in each direction
	std::shared_ptr<Boundary> posXBC, posYBC, negXBC, negYBC;

	// neighbor cells in each direction
	std::shared_ptr<QuadTreeCell>
		posXNbr = nullptr,
		posYNbr = nullptr,
		negXNbr = nullptr,
		negYNbr = nullptr;

	// child cells, enumerated using Cartesion coordinate convention
	std::shared_ptr<QuadTreeCell>
		quad1 = nullptr,
		quad2 = nullptr, 
		quad3 = nullptr,
		quad4 = nullptr;

	std::shared_ptr<QuadTreeCell> parent;

	/**
	 * @brief Returns if the cell has any children
	 * @return bool whether cell has children
	 */
	const bool hasChildren() const override;

	/**
	 * @brief Gets nodes (coordinates of 4 corners) of the cell
	 * @return vector of node coordinates
	 */
	const std::vector<const Vec> getNodes() const override;

	/**
	 * @brief Refines the cell by splitting it
	 */
	void refine() override;

	/**
	 * @brief Coarsens the cell by merging all children
	 */
	void coarsen() override;
};
