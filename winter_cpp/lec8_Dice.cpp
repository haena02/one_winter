#include "lec8_Dice.h"

void Dice::roll() {

	faceValue = rand() % 6 + 1;
}

int Dice::getFaceValue() const {

	return faceValue;
}