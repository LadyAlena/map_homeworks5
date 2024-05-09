#include "Line.h"

shape::Line::Line(const std::vector<Point>& coordinates) : shape::Shape(coordinates) {
	type_of_shape = "line";
}

double shape::Line::calc_square() const { return 0.0; }
double shape::Line::calc_volume() const { return 0.0; }