#include <iostream>
#include "Figure.h"

 void  Figure:: fig_type() {

		std::cout << "Фигура:" << std::endl;
}

 //false -фигура без определенных сторон не может быть правильной
  bool Figure::check() {
	 std::cout << "Неправильная" << std::endl;
	 return false;
 }
 void Figure::print_sides_count() {

		std::cout << "Количество сторон: 0" << std::endl;
	}


void print_info(Figure* figure) {
	figure->fig_type();
	figure->check();
	figure->print_sides_count();

}