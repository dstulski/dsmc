#pragma once

#include "Vector.h"

struct Particle {
	Vec position;
	Vec velocity;
	Particle(Vec _position, Vec _velocity) :
		position(_position),
		velocity(_velocity)
	{ }
};

struct Particle2D : public Particle {
	Particle2D(Vec2 _position, Vec2 _velocity) : Particle(_position, _velocity) { }
};
