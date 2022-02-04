#include <iostream>

using namespace std;

void printArr(int* num) {
	for (int i = 0; i < 6; i++) {
		cout << num[i] << " ";
	}
}

int main() {

	int num[6] = { 10,50,60,20,5,70 };
	int* arr[6];

	for (int i = 0; i < 6; i++) {
		arr[i] = &num[i];

	}

	cout << "정렬전 : ";
	printArr(num);

	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 6; j++) {
			if (*arr[i] <* arr[j]) {
				int* temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	cout << "정렬후 : ";
	for (int* i : arr) {
		cout << *i << " ";
	}

	return 0;

}
