#pragma once

#include <list>
#include <memory>

#include "Boundary.h"
#include "Particle.h"

/**
 * @brief Interface for a collision cell
 */
struct Cell {
	std::list<std::shared_ptr<Particle2D>> _particles;

	/**
	 * @brief Destructor for Cell struct
	 */
	virtual ~Cell() = default;

	/**
	 * @brief Returns if the cell has any children
	 */
	virtual bool hasChildren();

	/**
	 * @brief Refines the cell by splitting it
	 */
	virtual void refine();

	/**
	 * @brief Coarsens the cell by merging all children
	 */
	virtual void coarsen();
};
