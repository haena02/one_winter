
#include "lec8_lab_ point.h"
#include <iostream>

using namespace std;


Point::~Point()
{
	cout << "����Ʈ �Ҹ���" << endl;
}
Point::Point()
	:x(0), y(0)
{
	cout << "����Ʈ ������" << endl;
}
Point::Point(const int& X, const int& Y)
	:x(X),y(Y)
{
	cout << "�����ִ� ������" << endl;
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
