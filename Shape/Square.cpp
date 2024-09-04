#include "Square.h"
#include<iostream>
using namespace std;

Square::Square(int ls, int x, int y):Shape(x,y)
{
	Ls = ls;
}

void Square::Show()
{
	cout << "Coordinates of the starting point of the square ->" << GetX() << "," << GetY() << endl << "Side ->" << Ls << endl << "Area->" << Ls * Ls;
}
