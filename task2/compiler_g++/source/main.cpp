#include <iostream>
#include <vector>

#include "tools/Point.hpp"

#include "shape/Shape.h"
#include "shape/Line/Line.h"
#include "shape/Rectangle/Rectangle.h"
#include "shape/Parallelepiped/Parallelepiped.h"
#include "shape/Circle/Circle.h"
#include "shape/Cylinder/Cylinder.h"

int main(int argc, char** argv) {

	shape::Parallelepiped sh({ {1, 2, 3}, {4, 2, 3}, {1, 6, 3}, {1, 2, 7 } });

	shape::show_parameters(sh);

	sh.scale(2, 3, 1);

	show_parameters(sh);

	return 0;
}