#pragma once

#include <vector>

#include "../../tools/Point.hpp"
#include "../Circle/Circle.h"

namespace shape {

	class Cylinder : public Circle {
	public:
		Cylinder(const std::vector<Point>& coordinates);

		double calc_square() const override;
		double calc_volume() const override;

	private:
		double h() const;
	};

}