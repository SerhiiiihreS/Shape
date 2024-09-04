#pragma once
#include "Shape.h"
class Rectangle :public Shape
{
private:
	int Ln;
	int Hd;
public:
	Rectangle(int ln,int hd, int x, int y);
	void Show();
};

