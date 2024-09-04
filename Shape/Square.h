#pragma once
#include "Shape.h"

class Square : public Shape
{
private:
	int Ls;
public:
	Square(int ls, int x, int y);
	void Show();


};

