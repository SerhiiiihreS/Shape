#pragma once
#include "Shape.h"
class Circle : public Shape
{
private:
	int Rd;
public:
	Circle(int rd, int x, int y);
	void Show();
};

