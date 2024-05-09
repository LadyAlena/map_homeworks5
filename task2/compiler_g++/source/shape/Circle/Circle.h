#pragma once

#include <vector>

#include "../../tools/Point.hpp"
#include "../Shape.h"

namespace shape {
	class Circle : public Shape {
	public:
		Circle(const std::vector<Point>& coordinates);

		double calc_square() const override;
		double calc_volume() const override;

	protected:
		double r() const;
	};
}