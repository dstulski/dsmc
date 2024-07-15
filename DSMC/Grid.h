#pragma once

#include "Cell.h"
#include "Particle.h"

/**
 * @brief Interface for a Grid class
 */
class Grid {
public:
	/**
	 * @brief Destructor for a Grid class
	 */
	virtual ~Grid() = default;

	/**
	 * @brief Coarsens a select cell in the grid
	 * @param cell target cell
	 */
	void coarsenCell(std::shared_ptr<Cell> cell);

	/**
	 * @brief Refines a target cell in the grid
	 * @param cell target cell
	 */
	void refineCell(std::shared_ptr<Cell> cell);

	/**
	 * @brief Populates the grid by evenly distributing particles throughout the grid
	 * @param numParticles number of particles to distribute
	 */
	virtual void populate(unsigned long long numParticles);

	/**
	 * @brief Deletes all particles from the grid
	 */
	virtual void clear();

private:
	std::shared_ptr<Cell>  _root;
};
