#pragma once

#include <vector>
#include <string>

#include "../tools/Point.hpp"

namespace shape {

	class Shape {
	public:
		Shape(const std::vector<Point>& coordinates);

		void shift(double shift_x, double shift_y, double shift_z);
		void scale(double scale_x, double scale_y, double scale_z);
		void scale(double k);

		std::vector<Point> get_coordinates() const;
		std::string get_type_of_shape() const;

		virtual double calc_square() const = 0;
		virtual double calc_volume() const = 0;

	protected:
		std::vector<Point> coordinates;
		std::string type_of_shape;
	};

	void show_parameters(const Shape& sh);

}