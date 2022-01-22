//좌석 예약 프로그램 : 빈좌석을 입력 받으면 예약 완료, 예약된 자석을 선태하면 예약 불가

#include <iostream>
#include<cstdlib> //랜덤함수 s사용


using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	const int low = 6;
	const int col = 4;
	bool seat[low][col];
	int full = low * col;

	// 자리 false로 세팅
	for (int i = 0; i < low; i++) {
		for (int j = 0; j < col; j++) {
			seat[i][j] = false;
		}
	}

	do {

		//자리 출력
		cout << ' ';
		for (int j = 0; j < col; j++) {
			cout << '\t' << (j + 1);
		}
		cout << endl;
		for (int i = 0; i < low; i++) {
			cout << char('A'+i);
			for (int j = 0; j < col; j++) {
				cout << '\t';
				if (seat[i][j]) cout << "○";
				else cout << "●";
			}
			cout << endl;
		}

		cout << "앉을 자리를 입력하세요(ex A 4)";
		char A;
		int B;
		cin >> A >> B;


		if (!seat[int(A - 'A')][B - 1]) {
			seat[int(A - 'A')][B - 1] = true;
			full--;
			cout << "예약완료" << endl;
		}
		else {
			cout << "예약불가" << endl;
		}

	} while (full != 0);
}