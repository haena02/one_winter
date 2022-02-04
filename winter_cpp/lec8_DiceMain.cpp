#include "lec8_Player.h"
#include<iostream>

using namespace std;

int main() {

	Dice dice1;
	Dice dice2;

	Player player1;
	Player player2;
	
	player1.setName("ÇØ");
	player2.setName("³ª");

	player1.roll(dice1, dice2);
	int one = player1.getTotal();

	player2.roll(dice1, dice2);
	int two = player2.getTotal();

	if (one > two) {
		cout << player1.getName() << "½Â";
	}
	else if (one == two) {
		cout << "ºñ°å";
	}
	else {
		cout << player2.getName() << "½Â";
	}

}