#pragma once
#include<string>
using namespace std;
class Salesman
{
private:
	string name;
	double sales;
public:
	Salesman();
	~Salesman();
	Salesman(string name, double sales);
	void setName(string name);
	void readInput();
	string getSalesmaninfo();
	double getSales() {
		return sales;
	}
};
