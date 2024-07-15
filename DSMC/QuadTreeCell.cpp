#pragma once

#include "QuadTreeCell.h"

QuadTreeCell::QuadTreeCell(
	std::shared_ptr<Boundary> _posXBC,
	std::shared_ptr<Boundary> _posYBC,
	std::shared_ptr<Boundary> _negXBC,
	std::shared_ptr<Boundary> _negYBC,
	std::shared_ptr<QuadTreeCell> _posXNbr,
	std::shared_ptr<QuadTreeCell> _posYNbr,
	std::shared_ptr<QuadTreeCell> _negXNbr,
	std::shared_ptr<QuadTreeCell> _negYNbr
) :
	posXBC(_posXBC),
	posYBC(_posYBC),
	negXBC(_negXBC),
	negYBC(_negYBC),
	posXNbr(_posXNbr),
	posYNbr(_posYNbr),
	negXNbr(_negXNbr),
	negYNbr(_negYNbr)
{ }

bool QuadTreeCell::hasChildren() {
	return false;
}
