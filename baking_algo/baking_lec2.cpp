/*
����1
N ������ �ڿ��� �߿��� 3�� ����̰ų� 5�� ����� ���� ��� ���� ���� ��ȯ�ϴ� �Լ� func1(int N)�� �ۼ��϶�.
N�� 10�� ������ �ڿ����̴�.
*/


/*
����2
�־��� ���� N�� int �迭 arr���� ���� 100�� ���� �ٸ� ��ġ�� �� ���Ұ� �����ϸ� 1��, �������� ������ 0�� ��ȯ�ϴ� �Լ� func2(int arr[],intN)�� �ۼ��϶�.
arr�� �� ���� 0�̻� 100�����̰� N�� 1000�����̴�.
*/


#include <iostream>

using namespace std;

void func1(int N) {

	int sum = 0;

	for (int i = 1; i < (N + 1); i++) {
		if (i % 5 == 0 || i % 3 == 0) {
			sum += i;
		}
	}

	cout << sum;
}


void func2(int arr[], int N) {

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] + arr[j] == 100) {
				cout << 1;
				return;
			}
		}
	}
	cout << 0;

}

int main() {

	/*
	int input;
	cin >> input;
	func1(input);
	*/

	int arr[3] = { 1,52,48 };
	func2(arr, 3);
	int arr1[2] = { 50,42 };
	func2(arr1, 2);
	int arr2[4] = { 4,13,63,87 };
	func2(arr2, 4);

}