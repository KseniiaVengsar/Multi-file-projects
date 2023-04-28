
#include <iostream>
#include "Triangle.h"
#include "Equilateral_triangle.h"


Equilateral_triangle::Equilateral_triangle(int a_, int A_) :Triangle(a_, a_, a_, A_, A_, A_) {

}
void Equilateral_triangle::fig_type() {

	std::cout << "�������������� �����������:" << std::endl;

}
bool Equilateral_triangle::check() {
	if (!Triangle::check()) { // ����� check() � ������ Triangle
		return false;
	}

	if ((a != c && a != b || c != a && c != b || b != a && b != c) && (A != 60 || B != 60 || C != 60)) {


		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}

}