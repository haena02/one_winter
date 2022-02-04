#include "lec7_lec_lamp.h"
#include <iostream>

using namespace std;

void Lamp::powerOnOff() {
	m_isOn = !m_isOn;
}
void Lamp::changeLight() {
	if (m_isOn) {
		if (m_illuminance < 3)
			m_illuminance++;
		else
			m_illuminance = 1;
	}

	showState();
}

void Lamp::showState() {
	
	if (m_isOn) 
		std::cout << "밝기" << m_illuminance << "\n";	
	else
		std::cout << "전원이 꺼져있습니다" << "\n";
	
}

void Lamp::init() {
	m_isOn = false;
	m_illuminance = 1;
}

void User::turnOnOff(Lamp& lamp) {
	lamp.powerOnOff();
}
void User::changeLight(Lamp& lamp) {
	lamp.changeLight();
}
void User::init() {
	m_name = "no";
}

int main() {
	Lamp lamp1;
	lamp1.init();
	Lamp lamp2;
	lamp2.init();
	Lamp lamp3;
	lamp3.init();


	User user1;
	user1.init();
	user1.turnOnOff(lamp2);
	user1.turnOnOff(lamp3);
	user1.changeLight(lamp2);
	

}