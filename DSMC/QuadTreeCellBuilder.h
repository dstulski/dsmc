#pragma once

#include "QuadTreeCell.h"

/**
 * @brief Builds QuadTreeCells to simplify construction
 */
class QuadTreeCellBuilder {
public:
	/**
	 * @brief Constructor for a QuadTreeCellBuilderClass
	 */
	QuadTreeCellBuilder();

	/**
	 * @brief Resets the builder
	 */
	void reset();

	/**
	 * @brief Sets the boundary in the positive X direction
	 * @param boundary pointer to the boundary struct
	 */
	QuadTreeCellBuilder& setPosXBC(std::shared_ptr<Boundary> boundary);

	/**
	 * @brief Sets the boundary in the positive Y direction
	 * @param boundary pointer to the boundary struct
	 */
	QuadTreeCellBuilder& setPosYBC(std::shared_ptr<Boundary> boundary);

	/**
	 * @brief Sets the boundary in the negative X direction
	 * @param boundary pointer to the boundary struct
	 */
	QuadTreeCellBuilder& setNegXBC(std::shared_ptr<Boundary> boundary);

	/**
	 * @brief Sets the boundary in the negative Y direction
	 * @param boundary pointer to the boundary struct
	 */
	QuadTreeCellBuilder& setNegYBC(std::shared_ptr<Boundary> boundary);

	/**
	 * @brief Sets the neighbors in the positive X direction
	 * @param cell pointer to the neighbor
	 */
	QuadTreeCellBuilder& setPosXNbr(std::shared_ptr<QuadTreeCell> cell);

	/**
	 * @brief Sets the neighbors in the positive Y direction
	 * @param cell pointer to the neighbor
	 */
	QuadTreeCellBuilder& setPosYNbr(std::shared_ptr<QuadTreeCell> cell);

	/**
	 * @brief Sets the neighbors in the negative X direction
	 * @param cell pointer to the neighbor
	 */
	QuadTreeCellBuilder& setNegXNbr(std::shared_ptr<QuadTreeCell> cell);

	/**
	 * @brief Sets the neighbors in the negative Y direction
	 * @param cell pointer to the neighbor
	 */
	QuadTreeCellBuilder& setNegYNbr(std::shared_ptr<QuadTreeCell> cell);

	/**
	 * @brief Sets the parent of the newly created cell
	 * @param parent pointer to the parent cell
	 */
	QuadTreeCellBuilder& setParent(std::shared_ptr<QuadTreeCell> parent);

	/**
	 * @brief Builds the QuadTreeCell object
	 * @return pointer to the built QuadTreeCell
	 */
	std::shared_ptr<QuadTreeCell> build();

private:
	std::shared_ptr<QuadTreeCell> _cell;
};
