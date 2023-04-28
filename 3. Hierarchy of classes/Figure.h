#pragma once
#include <iostream>
//По условию задания вам нужно каждый класс поместить в свою пару файлов h и cpp. 
//К примеру, RightTriangle должен находится в файлах RightTriangle.h и RightTriangle.cpp.
class Figure {
public:
	virtual void fig_type();
	virtual bool check();
	virtual void print_sides_count();
};
void print_info(Figure* figure);
