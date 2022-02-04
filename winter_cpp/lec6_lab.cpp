/* 파일에 있는 맵 데이터를 읽어, 크기만큼 맵을 생성하고 맵데이터를 읽은 후 출력하기
 
맵데이터
4 3
1 1 1
1 0 1
1 1 1
1 0 0
*/

#include <iostream>
#include <fstream>

using namespace std;

int** readMap(const char* fileName, int& r, int& c) { // 파일 열어서 배열 생성해서 리턴

	ifstream fin(fileName);  //파일 열기
	int** map = NULL; //리턴할 배열

	if (fin.is_open()) { // 열려 있다면
		int row, col;
		fin >> row >> col;
		r = row;
		c = col;
		map = new int*[row];
		for (int i = 0; i < row; i++) {
			map[i] = new int[col];
			for (int j = 0; j < col; j++) {
				fin >> map[i][j];
			}
		}
	}
	else {
		cout << "파일 확인 요함" << endl;
	}
	
	return map;
}

void showMap(int** (&map), const int& r, const int& c) {// 참조자 사용으로 데이터 아끼기

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cout<< map[i][j];
		}
		cout << "\n";
	}
}

int main() {

	int row, col;
	int** map = readMap("map.txt", row, col);

	if (map != NULL) {
		showMap(map, row, col);
	}


	return 0;

}