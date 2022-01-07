/*
문제1
N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을 반환하는 함수 func1(int N)을 작성하라.
N은 10만 이하의 자연수이다.
*/


/*
문제2
주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면 1을, 존재하지 않으면 0을 반환하는 함수 func2(int arr[],intN)을 작성하라.
arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
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
