#include <iostream>
#include "Figure.h"

 void  Figure:: fig_type() {

		std::cout << "������:" << std::endl;
}

 //false -������ ��� ������������ ������ �� ����� ���� ����������
  bool Figure::check() {
	 std::cout << "������������" << std::endl;
	 return false;
 }
 void Figure::print_sides_count() {

		std::cout << "���������� ������: 0" << std::endl;
	}


void print_info(Figure* figure) {
	figure->fig_type();
	figure->check();
	figure->print_sides_count();

}