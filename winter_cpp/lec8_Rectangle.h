#pragma once
#include "lec8_lab_ point.h"

class Rectangle {

private:
	Point LT;
	Point RB;
public:
	Rectangle();
	~Rectangle();
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void init(const int& x1, const int& y1, const int& x2, const int& y2);
	void showRectangle()const;
	int area(const Point &LT,const Point&RB);
	Point getLT() ;
	Point getRB() const;
};