#define _USE_MATH_DEFINES

#include <cmath>

#include "Cylinder.h"

shape::Cylinder::Cylinder(const std::vector<Point>& coordinates) : shape::Circle(coordinates) {
	type_of_shape = "cylinder";
}

double shape::Cylinder::calc_square() const { return 2 * M_PI * r() * (r() + h()); }
double shape::Cylinder::calc_volume() const { return M_PI * std::pow(r(), 2) * h(); }

double shape::Cylinder::h() const { return std::abs(coordinates[2].z - coordinates[0].z); }