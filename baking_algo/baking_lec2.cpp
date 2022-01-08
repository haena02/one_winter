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

/*����3
N�� �������̸� 1�� ��ȯ�ϰ� �������� �ƴϸ� 0�� ��ȯ�ϴ� �Լ� func3(int N)�� �ۼ��϶�. N�� 10�� ������ �ڿ����̴�.
*/

//����4
//N ������ �� �߿��� ���� ū 2�� �ŵ��������� ��ȯ�ϴ� func4(int N)�� �ۼ��϶�. N�� 10�� ������ �ڿ����̴�.

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

void func3(int N) {
	for (int i = 0; i * i <= N; i++) {
		if (i * i == N) {
			cout << 1;
			return;
		}
	}
	cout << 0;

}

void func4(int N) {

	int num=2;

	do {
		num *= 2;

	} while (num <= N);

	cout << num/2<<endl;
}

int main() {

	/*
	int input;
	cin >> input;
	func1(input);
	*/

	/*int arr[3] = { 1,52,48 };
	func2(arr, 3);
	int arr1[2] = { 50,42 };
	func2(arr1, 2);
	int arr2[4] = { 4,13,63,87 };
	func2(arr2, 4);*/

	//func3(9);
	//func3(693953651);
	//func3(756580036);

	func4(5);
	func4(97615282);
	func4(1024);

}
