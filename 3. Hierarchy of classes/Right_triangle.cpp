#include <iostream>
#include "Triangle.h"
#include "Right_triangle.h"

Right_triangle::Right_triangle(int a_, int b_, int c_, int A_, int B_, int C_) :Triangle(a_, b_, c_, A_, B_, C_) {

}
void Right_triangle::fig_type() {

	std::cout << "Прямоугольный треугольник:" << std::endl;
}

bool Right_triangle::check() {
	if (!Triangle::check()) { // вызов check() у предка Triangle
		return false;
	}

	if (C != 90) {

		std::cout << "Неправильная" << std::endl;
		return false;
	}
	else {
		std::cout << "Правильная" << std::endl;
		return true;
	}
}