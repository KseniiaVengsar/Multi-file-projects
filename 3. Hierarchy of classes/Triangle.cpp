#include <iostream>
#include "Figure.h"
#include "Triangle.h"


Triangle::Triangle(int a_, int b_, int c_, int A_, int B_, int C_) :Figure() {
	a = a_;
	b = b_;
	c = c_;
	A = A_;
	B = B_;
	C = C_;
}

void Triangle::fig_type() {
	std::cout << "треугольник:" << std::endl;
}

bool Triangle::check() {
	// Проверка треугольника
	if (!Figure::check()) { // вызов check() у предка Figure
		return false;
	}
	// Проверяем, что сумма углов равна 180 градусов//проверяем свойства треугольника, если они есть
	if (A + B + C != 180) {
		std::cout << "Неправильная" << std::endl;
		return false;

	}
	else {
		std::cout << "Правильная" << std::endl;
		return true;
	}

}


void Triangle::print_sides_count() {
	std::cout << "Количество сторон: 3" << std::endl;
	std::cout << "Стороны: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
	std::cout << "Углы: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}