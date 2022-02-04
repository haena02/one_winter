/* ���Ͽ� �ִ� �� �����͸� �о�, ũ�⸸ŭ ���� �����ϰ� �ʵ����͸� ���� �� ����ϱ�
 
�ʵ�����
4 3
1 1 1
1 0 1
1 1 1
1 0 0
*/

#include <iostream>
#include <fstream>

using namespace std;

int** readMap(const char* fileName, int& r, int& c) { // ���� ��� �迭 �����ؼ� ����

	ifstream fin(fileName);  //���� ����
	int** map = NULL; //������ �迭

	if (fin.is_open()) { // ���� �ִٸ�
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
		cout << "���� Ȯ�� ����" << endl;
	}
	
	return map;
}

void showMap(int** (&map), const int& r, const int& c) {// ������ ������� ������ �Ƴ���

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