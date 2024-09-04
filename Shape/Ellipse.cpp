#include "Ellipse.h"
#include<iostream>
using namespace std;

Ellipse::Ellipse(int rd1, int rd2, int x, int y) :Shape(x, y)
{
	Rd1 = rd1;
	Rd2 = rd2;
}

void Ellipse::Show()
{
	cout << "Coordinates of the starting point of the Rectangle ->" << GetX() << "," << GetY() << endl << "Width ->" << Rd1 * 2 << endl << "Height->" << Rd2 * 2 << endl << "Area->" << (Rd1 * Rd2 * 3.14);
}
