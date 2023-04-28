#include <iostream>
#include "Figure.h"
#include "Quadrangle.h"

Quadrangle::Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_) :Figure() {
	a = a_;
	b = b_;
	c = c_;
	d = d_;
	A = A_;
	B = B_;
	C = C_;
	D = D_;
}
void Quadrangle::print_sides_count() {
	std::cout << "���������� ������: 4" << std::endl;
	std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
	std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
}
void Quadrangle::fig_type() {

	std::cout << "��������������:" << std::endl;
}

bool Quadrangle::check() {
	if (!Figure::check()) { // ����� check() � ������ Figure
		return false;
	}

	if (A + B + C + D != 360) {


		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}
