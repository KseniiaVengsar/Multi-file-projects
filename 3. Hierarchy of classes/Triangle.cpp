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
	std::cout << "�����������:" << std::endl;
}

bool Triangle::check() {
	// �������� ������������
	if (!Figure::check()) { // ����� check() � ������ Figure
		return false;
	}
	// ���������, ��� ����� ����� ����� 180 ��������//��������� �������� ������������, ���� ��� ����
	if (A + B + C != 180) {
		std::cout << "������������" << std::endl;
		return false;

	}
	else {
		std::cout << "����������" << std::endl;
		return true;
	}

}


void Triangle::print_sides_count() {
	std::cout << "���������� ������: 3" << std::endl;
	std::cout << "�������: " << "a = " << a << " " << "b = " << b << " " << "c = " << c << std::endl;
	std::cout << "����: " << "A = " << A << " " << "B = " << B << " " << "C = " << C << std::endl;
}