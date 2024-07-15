#pragma once

#include "Vector.h"

enum BCType {
	WALL,
	INFLOW,
	OUTFLOW
};

struct Boundary {
	BCType type;
	double location;
	Boundary(BCType _type, double _location) : type(_type), location(_location) { }
};

struct Wall2D : public Boundary {
	Wall2D(double _location) : Boundary(WALL, _location) { }
};

struct InflowVelocity2D : public Boundary {
	Vec2 velocity;
	InflowVelocity2D(double _location, Vec2 _velocity) :
		Boundary(INFLOW, _location),
		velocity(_velocity)
	{ }
};

struct Outflow2D : public Boundary {
	Outflow2D(double _location) : Boundary(OUTFLOW, _location) { }
};
