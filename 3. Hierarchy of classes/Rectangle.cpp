#include <iostream>
#include "Quadrangle.h"
#include "Rectangle.h"


Rectangle::Rectangle(int a_, int b_, int A_) :Quadrangle(a_, b_, a_, b_, A_, A_, A_, A_) {

}
void Rectangle::fig_type() {

	std::cout << "Прямоугольник:" << std::endl;

}
bool Rectangle::check() {
	if (!Quadrangle::check()) { // вызов check() у предка Figure
		return false;
	}

	if ((a != b && c != d) && (A + B + C + D != 90)) {


		std::cout << "Неправильная" << std::endl;
		return false;
	}
	else {

		std::cout << "Правильная" << std::endl;
		return true;
	}
}