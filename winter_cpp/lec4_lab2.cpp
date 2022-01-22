//�¼� ���� ���α׷� : ���¼��� �Է� ������ ���� �Ϸ�, ����� �ڼ��� �����ϸ� ���� �Ұ�

#include <iostream>
#include<cstdlib> //�����Լ� s���


using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	const int low = 6;
	const int col = 4;
	bool seat[low][col];
	int full = low * col;

	// �ڸ� false�� ����
	for (int i = 0; i < low; i++) {
		for (int j = 0; j < col; j++) {
			seat[i][j] = false;
		}
	}

	do {

		//�ڸ� ���
		cout << ' ';
		for (int j = 0; j < col; j++) {
			cout << '\t' << (j + 1);
		}
		cout << endl;
		for (int i = 0; i < low; i++) {
			cout << char('A'+i);
			for (int j = 0; j < col; j++) {
				cout << '\t';
				if (seat[i][j]) cout << "��";
				else cout << "��";
			}
			cout << endl;
		}

		cout << "���� �ڸ��� �Է��ϼ���(ex A 4)";
		char A;
		int B;
		cin >> A >> B;


		if (!seat[int(A - 'A')][B - 1]) {
			seat[int(A - 'A')][B - 1] = true;
			full--;
			cout << "����Ϸ�" << endl;
		}
		else {
			cout << "����Ұ�" << endl;
		}

	} while (full != 0);
}