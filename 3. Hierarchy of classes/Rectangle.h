#pragma once
#include "Figure.h"
#include <iostream>
class Rectangle :public Quadrangle {
public:
	Rectangle(int a_, int b_, int A_);
	void fig_type() override;
	bool check() override;
};