#include <iostream>

#include "Shape.h"

shape::Shape::Shape(const std::vector<Point>& coordinates) : coordinates(coordinates), type_of_shape("shape") {}

void shape::Shape::shift(double shift_x, double shift_y, double shift_z) {
	for (auto& coordinate : coordinates) {
		coordinate.x += shift_x;
		coordinate.y += shift_y;
		coordinate.z += shift_z;
	}
}

void shape::Shape::scale(double scale_x, double scale_y, double scale_z) {
	for (auto& coordinate : coordinates) {
		coordinate.x *= scale_x;
		coordinate.y *= scale_y;
		coordinate.z *= scale_z;
	}
}

void shape::Shape::scale(double k) {
	this->scale(k, k, k);
}

std::vector<Point> shape::Shape::get_coordinates() const { return coordinates; }
std::string shape::Shape::get_type_of_shape() const { return type_of_shape; }

void shape::show_parameters(const Shape& sh) {

	std::cout << "Type of shape: " << sh.get_type_of_shape() << std::endl;

	std::cout << "Coordinates:" << std::endl;
	auto coordinates = sh.get_coordinates();

	for (const auto& coordinate : coordinates) {
		std::cout << "{" << coordinate.x << "; " << coordinate.y << "; " << coordinate.z << "}" << std::endl;
	}

	std::cout << "Square: " << sh.calc_square() << std::endl;
	std::cout << "Volume: " << sh.calc_volume() << std::endl;
}