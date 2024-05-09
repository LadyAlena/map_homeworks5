#pragma once

#include <vector>

#include "../../tools/Point.hpp"
#include "../Rectangle/Rectangle.h"

namespace shape {
	class Parallelepiped : public Rectangle {
	public:
		Parallelepiped(const std::vector<Point>& coordinates);

		double calc_square() const override;
		double calc_volume() const override;

	private:
		double c() const;
	};
}