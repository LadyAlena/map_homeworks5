#pragma once

#include <vector>

#include "../../tools/Point.hpp"
#include "../Shape.h"

namespace shape {
	class Rectangle : public Shape {
	public:
		Rectangle(const std::vector<Point>& coordinates);

		double calc_square() const override;
		double calc_volume() const override;

	protected:
		double a() const;
		double b() const;
	};
}