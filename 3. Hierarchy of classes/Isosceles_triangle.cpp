#include <iostream>
#include "Triangle.h"
#include "Isosceles_triangle.h"

Isosceles_triangle::Isosceles_triangle(int a_, int b_, int A_, int B_) :Triangle(a_, b_, b_, A_, B_, B_) {

}
void Isosceles_triangle::fig_type() {

	std::cout << "�������������� �����������:" << std::endl;

}
bool Isosceles_triangle::check() {
	if (!Triangle::check()) { // ����� check() � ������ Triangle
		return false;
	}

	if (a != c && A != C) {


		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}