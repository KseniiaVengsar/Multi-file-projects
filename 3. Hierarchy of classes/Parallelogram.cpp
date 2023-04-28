#include <iostream>
#include "Quadrangle.h"
#include "Parallelogram.h"


Parallelogram::Parallelogram(int a_, int b_, int A_, int B_) :Quadrangle(a_, b_, a_, b_, A_, B_, A_, B_) {

}
void Parallelogram::fig_type() {

	std::cout << "��������������:" << std::endl;
}
bool Parallelogram::check() {
	if (!Quadrangle::check()) { // ����� check() � ������ Figure
		return false;
	}

	if ((a != b && c != d) && (A != B && C != D)) {

		std::cout << "������������" << std::endl;
		return false;
	}
	else {

		std::cout << "����������" << std::endl;
		return true;
	}
}