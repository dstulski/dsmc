#pragma once

#include <list>
#include <memory>
#include <vector>

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
	 * @return bool whether cell has children
	 */
	virtual const bool hasChildren() const;

	/**
	 * @brief Gets nodes (corner coordinates) of the cell
	 * @return vector of node coordinates
	 */
	virtual const std::vector<const Vec> getNodes() const;

	/**
	 * @brief Refines the cell by splitting it
	 */
	virtual void refine();

	/**
	 * @brief Coarsens the cell by merging all children
	 */
	virtual void coarsen();
};
