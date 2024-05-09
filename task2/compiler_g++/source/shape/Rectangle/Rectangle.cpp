#include "Rectangle.h"

shape::Rectangle::Rectangle(const std::vector<Point>& coordinates) : shape::Shape(coordinates) {
	type_of_shape = "rectangle";
}

double shape::Rectangle::calc_square() const { return a() * b(); }
double shape::Rectangle::calc_volume() const { return 0.0; }

double shape::Rectangle::a() const { return std::abs(coordinates[1].x - coordinates[0].x); }
double shape::Rectangle::b() const { return std::abs(coordinates[2].y - coordinates[1].y); }