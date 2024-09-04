#pragma once
#include "Shape.h"
class Ellipse :public Shape
{
private:
	int Rd1;
	int Rd2;
public:
	Ellipse(int Rd1, int Rd2, int x, int y);
	void Show();
};

