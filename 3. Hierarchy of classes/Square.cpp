#include <iostream>
#include "Quadrangle.h"
#include "Square.h"


Square::Square(int a_, int A_) :Quadrangle(a_, a_, a_, a_, A_, A_, A_, A_) {

}
void Square::fig_type() {

	std::cout << "�������:" << std::endl;

}
bool Square::check() {
	if (!Quadrangle::check()) { // ����� check() � ������ Figure
		return false;
	}
	if ((a != b && a != c && a != d || b != a && b != c && b != d || c != a && c != b && c != d) && (A != 90 && B != 90 && C != 90 && D != 90)) {

		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}