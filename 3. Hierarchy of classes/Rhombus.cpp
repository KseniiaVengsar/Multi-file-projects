#include <iostream>
#include "Quadrangle.h"
#include "Rhombus.h"


Rhombus::Rhombus(int a_, int A_, int B_) :Quadrangle(a_, a_, a_, a_, A_, B_, A_, B_) {
}
void Rhombus::fig_type() {

	std::cout << "����:" << std::endl;

}
bool Rhombus::check() {
	if (!Quadrangle::check()) { // ����� check() � ������ Figure
		return false;
	}
	if (A != B && C != D) {
		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}