#include <iostream>
#include "Quadrangle.h"
#include "Rectangle.h"


Rectangle::Rectangle(int a_, int b_, int A_) :Quadrangle(a_, b_, a_, b_, A_, A_, A_, A_) {

}
void Rectangle::fig_type() {

	std::cout << "�������������:" << std::endl;

}
bool Rectangle::check() {
	if (!Quadrangle::check()) { // ����� check() � ������ Figure
		return false;
	}

	if ((a != b && c != d) && (A + B + C + D != 90)) {


		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}