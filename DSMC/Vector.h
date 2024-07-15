#pragma once

struct Vec { };

struct Vec2 : Vec {
	double x;
	double y;
	Vec2(double _x, double _y) : x(_x), y(_y) { }
};
