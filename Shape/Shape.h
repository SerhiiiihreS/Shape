#pragma once
class Shape
{
	int X;
	int Y;
public:
	Shape(int x, int y);
	int GetX()const;
	int GetY()const;
	virtual void Show();
};

