#pragma once
#include "lec9_salesman.h"
class SalesReport
{
private:
	Salesman* team;
	double highestSales;
	double averageSales;
	int highestSalesindex;
	int number;
public:
	SalesReport();
	~SalesReport();
	SalesReport(int number);
	void computeStats();
	Salesman& getBestClerk();
	string getTeaminfo();
	SalesReport& getTeam();

};