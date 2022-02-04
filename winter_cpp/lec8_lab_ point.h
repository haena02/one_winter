#pragma once
class Point {

private:
	int x;
	int y;
public:
	~Point(); // ¼Ò¸êÀÚ
	Point();
	Point(const int& X, const int& Y);
	void init(const int& X, const int& Y);
	void setXY(const int& X, const int& Y);
	void showPoint() const;
	void move(const int& dist);
	int getX()const;
	int getY()const;

};