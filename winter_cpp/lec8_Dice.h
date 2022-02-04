#pragma once
#include<cstdlib> 

class Dice {

private:
	int faceValue;
	
public:

	void roll();
	int getFaceValue() const;
};