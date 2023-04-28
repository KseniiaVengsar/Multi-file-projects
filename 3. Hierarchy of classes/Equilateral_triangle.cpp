
#include <iostream>
#include "Triangle.h"
#include "Equilateral_triangle.h"


Equilateral_triangle::Equilateral_triangle(int a_, int A_) :Triangle(a_, a_, a_, A_, A_, A_) {

}
void Equilateral_triangle::fig_type() {

	std::cout << "Равносторонний треугольник:" << std::endl;

}
bool Equilateral_triangle::check() {
	if (!Triangle::check()) { // вызов check() у предка Triangle
		return false;
	}

	if ((a != c && a != b || c != a && c != b || b != a && b != c) && (A != 60 || B != 60 || C != 60)) {


		std::cout << "Неправильная" << std::endl;
		return false;
	}
	else {

		std::cout << "Правильная" << std::endl;
		return true;
	}

}