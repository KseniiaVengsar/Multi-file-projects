#pragma once
#include "Figure.h"
#include <iostream>
class Equilateral_triangle :public Triangle {
public:
	Equilateral_triangle(int a_, int A_);
	void fig_type() override;
	bool check() override;
};