#pragma once
#include <iostream>
//�� ������� ������� ��� ����� ������ ����� ��������� � ���� ���� ������ h � cpp. 
//� �������, RightTriangle ������ ��������� � ������ RightTriangle.h � RightTriangle.cpp.
class Figure {
public:
	virtual void fig_type();
	virtual bool check();
	virtual void print_sides_count();
};
void print_info(Figure* figure);
