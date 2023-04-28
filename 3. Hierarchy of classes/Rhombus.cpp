#include <iostream>
#include "Quadrangle.h"
#include "Rhombus.h"


Rhombus::Rhombus(int a_, int A_, int B_) :Quadrangle(a_, a_, a_, a_, A_, B_, A_, B_) {
}
void Rhombus::fig_type() {

	std::cout << "Ромб:" << std::endl;

}
bool Rhombus::check() {
	if (!Quadrangle::check()) { // вызов check() у предка Figure
		return false;
	}
	if (A != B && C != D) {
		std::cout << "Неправильная" << std::endl;
		return false;
	}
	else {

		std::cout << "Правильная" << std::endl;
		return true;
	}
}