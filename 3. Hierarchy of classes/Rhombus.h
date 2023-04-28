#pragma once
#include "Figure.h"
#include <iostream>
class Rhombus :public Quadrangle {
public:
	Rhombus(int a_, int A_, int B_);
	void fig_type() override;
	bool check() override;
};
