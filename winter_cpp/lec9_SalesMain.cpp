#include "lec9_SalesReport.h"
#include<iostream>
using namespace std;

int main() {


//얕은복사에서 동적할당 소멸할 때 문제가 생김, 동적할당 주소까지 복사 되어서
	SalesReport team1(3);
	SalesReport team2(team1);

	cout << team1.getTeaminfo() << endl;
	cout << team2.getTeaminfo() << endl;
	return 0;
}
