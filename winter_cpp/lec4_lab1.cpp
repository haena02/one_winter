//10x10 �迭 ���� ������ ���� �ɱ�


#include <iostream>
#include<cstdlib> //�����Լ� s���
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	char map[10][10];
	char item[3] = { 'a','b','c' };
	char stand = 'O';


	//�迭 �⺻�� ����
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			map[i][j] = 'O';
		}
	}

	// �������� a,b,c ����
	for (int i = 0; i < 3; i++) {
		int a= rand() % 10;
		int b = rand() % 10;
		if(strcmp(&map[a][b],&stand))
			map[a][b] = item[i];
		else
			i--;

	}

	//���
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}

}