#include "lec9_SalesReport.h"
#include<iostream>
using namespace std;

int main() {


//�������翡�� �����Ҵ� �Ҹ��� �� ������ ����, �����Ҵ� �ּұ��� ���� �Ǿ
	SalesReport team1(3);
	SalesReport team2(team1);

	cout << team1.getTeaminfo() << endl;
	cout << team2.getTeaminfo() << endl;
	return 0;
}
