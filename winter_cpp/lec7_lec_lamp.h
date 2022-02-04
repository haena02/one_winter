#pragma once
#include <string>

class Lamp {
private:
	bool m_isOn;
	int m_illuminance;
public:
	void powerOnOff();
	void changeLight();
	void showState();
	void init();
};

class User {

private:
	string m_name;
public:
	void turnOnOff(Lamp& lamp);
	void changeLight(Lamp& lamp);
	void init();
};