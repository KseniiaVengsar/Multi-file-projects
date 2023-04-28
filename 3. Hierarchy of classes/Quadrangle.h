#pragma once
#include "Figure.h"
class Quadrangle :public Figure {
protected:
	int a; int b; int c; int d;
	int A; int B; int C; int D;
public:
	Quadrangle(int a_, int b_, int c_, int d_, int A_, int B_, int C_, int D_);
	virtual void print_sides_count();
	virtual void fig_type() override;
	virtual bool check() override;
};
