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
	std::cout << "Количество сторон: 4" << std::endl;
	std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << " " << "d = " << d << std::endl;
	std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << " " << "D = " << D << std::endl;
}
void Quadrangle::fig_type() {

	std::cout << "Четырёхугольник:" << std::endl;
}

bool Quadrangle::check() {
	if (!Figure::check()) { // вызов check() у предка Figure
		return false;
	}

	if (A + B + C + D != 360) {


		std::cout << "Неправильная" << std::endl;
		return false;
	}
	else {

		std::cout << "Правильная" << std::endl;
		return true;
	}
}
