#pragma once
#include "Figure.h"
#include <iostream>
class Parallelogram :public Quadrangle {
public:
	Parallelogram(int a_, int b_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};
