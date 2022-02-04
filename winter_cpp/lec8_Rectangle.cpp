#include"lec8_Rectangle.h"
#include<iostream>

using namespace std;

Rectangle::~Rectangle(){
	cout << "R 소멸자" << endl;
}

Rectangle::Rectangle()
	:LT(100, 100),RB(200, 200)  // Pint 인자가 있는 생성자 호출
{
	cout << "R 디폴트 생성자" << endl;
	
}
Rectangle::Rectangle(const int& x1, const int& y1, const int& x2, const int& y2)
	:LT(x1, y1), RB(x2, y2) 
{
	cout << "R 인자 있 생성자" << endl;

}

void Rectangle::init(const int& x1, const int& y1, const int& x2, const int& y2) {
	LT.init(x1, y1);
	RB.init(x2, y2);

};
void Rectangle::showRectangle()const {
	LT.showPoint();
	RB.showPoint();
};

int Rectangle::area(const Point& LT, const Point& RB) {

	return (RB.getX() - LT.getX()) * (LT.getY() - RB.getY());

};

Point Rectangle::getLT()  {
	return LT;
};
Point Rectangle::getRB() const {
	return RB;
};