#include "Circle.h"
#include<iostream>
using namespace std;

Circle::Circle(int rd, int x, int y) :Shape(x, y)
{
	Rd = rd;
}

void Circle::Show()
{
	cout << "Coordinates of the starting point of the square ->" << GetX() << "," << GetY() << endl << "Radius ->" << Rd << endl << "Area->" << (3.14 * Rd*Rd);

}
