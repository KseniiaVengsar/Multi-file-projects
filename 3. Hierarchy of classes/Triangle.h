#pragma once
#include <iostream>
#include "Figure.h"

class Triangle :public Figure {
protected:
	int a; int b; int c;
	int A; int B; int C;
public:
	Triangle(int a_, int b_, int c_, int A_, int B_, int C_);
	virtual void fig_type() override;
	virtual bool check() override;
	virtual void print_sides_count() override;
};
