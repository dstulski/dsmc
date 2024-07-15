#pragma once

#include "QuadTreeCell.h"
#include "QuadTreeCellBuilder.h"

const bool QuadTreeCell::hasChildren() const {
	return quad1 || quad2 || quad3 || quad4;
}

const std::vector<const Vec> QuadTreeCell::getNodes() const {
	double posX = posXBC->location;
	double posY = posYBC->location;
	double negX = negXBC->location;
	double negY = negYBC->location;
	return {
		Vec2(posX, posY),
		Vec2(posX, negY),
		Vec2(negX, posY),
		Vec2(negX, negY)
	};
}

void QuadTreeCell::refine() {
	if (hasChildren()) {
		return;
	}

	double xMid = negXBC->location + (posXBC->location - negXBC->location) / 2;
	double yMid = negYBC->location + (posYBC->location - negYBC->location) / 2;

	QuadTreeCellBuilder builder;

	builder.reset();
	quad3 = builder
		.setPosXBC(std::make_shared<Outflow2D>(xMid))
		.setNegXBC(negXBC)
		.setPosYBC(std::make_shared<Outflow2D>(yMid))
		.setNegYBC(negYBC)
		.build();
}
