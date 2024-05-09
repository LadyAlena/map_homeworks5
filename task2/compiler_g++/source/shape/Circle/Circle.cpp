#define _USE_MATH_DEFINES

#include <cmath>

#include "Circle.h"

shape::Circle::Circle(const std::vector<Point>& coordinates) : shape::Shape(coordinates) {
	type_of_shape = "circle";
}

double shape::Circle::calc_square() const { return M_PI * std::pow(r(), 2); }
double shape::Circle::calc_volume() const { return 0.0; }

double shape::Circle::r() const { 
	return sqrt(std::pow(coordinates[1].x - coordinates[0].x, 2) + std::pow(coordinates[1].y - coordinates[0].y, 2)); 
}