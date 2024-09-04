#include<iostream>
#include"Shape.h"
#include"Square.h"
#include"Rectangle.h"
#include"Circle.h"
#include"Ellipse.h"

using namespace std;



int main() {
	Shape* ptr1 = new Square(5, 2, 3);
	ptr1->Show();
	cout << endl;
    Shape* ptr2 = new Rectangle(4, 5, 6, 8);
	ptr2->Show();
	cout << endl; 
	Shape* ptr3 = new Circle(12, 0, 4);
	ptr3->Show();
	cout << endl; 
	Shape* ptr4 = new Ellipse(5, 3, 12, 5);
	ptr4->Show();
	cout << endl;
	cout << endl;
	cout << endl;
	Shape *wer[4] = { ptr1,ptr2,ptr3,ptr4 };
}