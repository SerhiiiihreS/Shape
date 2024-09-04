#include "Shape.h"

Shape::Shape(int x, int y)
{
	X = x;
	Y = y;
}

int Shape::GetX() const
{
	return X;
}

int Shape::GetY() const
{
	return Y;
}


void Shape::Show()
{
}
