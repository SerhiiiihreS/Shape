#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(int ln, int hd, int x, int y):Shape (x, y)
{
	Ln = ln;
	Hd = hd;
}
void Rectangle::Show()
{
	cout << "Coordinates of the starting point of the Rectangle ->" << GetX() << "," << GetY() << endl << "Width ->" << Ln << endl << "Height->" << Hd << endl << "Area->" << Ln * Hd;

}
