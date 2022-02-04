#pragma once
#include <string>
#include "lec8_Dice.h"

using namespace std;

class Player {

private:
	string name;
	int total;
public:

	void setName(const string& name);
	string getName();
	void roll(Dice& dice , Dice& dice2);
	int getTotal();

};