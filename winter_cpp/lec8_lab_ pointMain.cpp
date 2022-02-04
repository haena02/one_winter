#include "lec8_lab_ point.h"
#include <iostream>

using namespace std;

void move(Point& pt, const int& dist) {
	pt.move(dist);
}

void main() {

	Point pt1;
	pt1.init(100, 100);
	pt1.showPoint();

}