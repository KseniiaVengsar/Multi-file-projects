#pragma once
#include "Figure.h"
class Isosceles_triangle :public Triangle {
public:
	Isosceles_triangle(int a_, int b_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};