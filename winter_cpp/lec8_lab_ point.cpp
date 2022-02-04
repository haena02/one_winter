
#include "lec8_lab_ point.h"
#include <iostream>

using namespace std;


Point::~Point()
{
	cout << "포인트 소멸자" << endl;
}
Point::Point()
	:x(0), y(0)
{
	cout << "디폴트 생성자" << endl;
}
Point::Point(const int& X, const int& Y)
	:x(X),y(Y)
{
	cout << "인자있는 생성자" << endl;
};
void Point::init(const int& X, const int& Y) {
	x = X;
	y = Y;
}
void Point::setXY(const int& X, const int& Y) {
	x = X;
	y = Y;
};
void Point::showPoint() const {

	cout << x << " , " << y << endl;
};

void Point::move(const int& dist) {

	x += dist;
	y += dist;
};

int Point::getX() const {

	return x;
};
int Point::getY() const {
	return y;
};
