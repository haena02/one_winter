#include "lec9_Salesman.h"
#include<iostream>

Salesman::Salesman()
	:name("noname"), sales(0.0)
{
}

Salesman::~Salesman()
{
}

Salesman::Salesman(string name, double sales)
	:name(name), sales(sales)
{
}

void Salesman::setName(string name)
{
	this->name = name;
	this->sales = sales;
}

void Salesman::readInput()
{
	cout << "이름과 판매액을 입력 하세요 : ";
	cin >> name >> sales;
}

string Salesman::getSalesmaninfo()
{
	return "이름 : " + this->name + ",판매액 : " + to_string(this->sales); // string으로 변환
}