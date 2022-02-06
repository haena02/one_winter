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
	cout << "�̸��� �Ǹž��� �Է� �ϼ��� : ";
	cin >> name >> sales;
}

string Salesman::getSalesmaninfo()
{
	return "�̸� : " + this->name + ",�Ǹž� : " + to_string(this->sales); // string���� ��ȯ
}