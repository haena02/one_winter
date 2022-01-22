//10x10 배열 만들어서 아이템 세개 심기


#include <iostream>
#include<cstdlib> //랜덤함수 s사용
#include<string>

using namespace std;

int main() {

	ios::sync_with_stdio(0);
	cin.tie(nullptr);

	char map[10][10];
	char item[3] = { 'a','b','c' };
	char stand = 'O';


	//배열 기본값 세팅
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			map[i][j] = 'O';
		}
	}

	// 랜덤으로 a,b,c 삽입
	for (int i = 0; i < 3; i++) {
		int a= rand() % 10;
		int b = rand() % 10;
		if(strcmp(&map[a][b],&stand))
			map[a][b] = item[i];
		else
			i--;

	}

	//출력
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << map[i][j];
		}
		cout << endl;
	}

}