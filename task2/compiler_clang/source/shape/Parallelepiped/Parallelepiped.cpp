#include "Parallelepiped.h"

shape::Parallelepiped::Parallelepiped(const std::vector<Point>& coordinates) : shape::Rectangle(coordinates) {
	type_of_shape = "parrallelepiped";
}

double shape::Parallelepiped::calc_square() const { return 2 * (a() * b() + a() * c() + b() * c()); }
double shape::Parallelepiped::calc_volume() const { return a() * b() * c(); }

double shape::Parallelepiped::c() const { return std::abs(coordinates[3].z - coordinates[0].z); }