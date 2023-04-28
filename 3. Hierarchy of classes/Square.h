#pragma once
#include "Figure.h"
#include <iostream>
class Square :public Quadrangle {
public:
	Square(int a_, int A_);
	void fig_type() override;
	bool check() override;
};
