#include<iostream>
#include "lec10_ArrayData.h"

using namespace std;

int ArrayData::count = 0;

double getArraySum(const ArrayData& arr) {
	double total = 0;
	for (int i = 0; i < arr.used; i++) { // arr.used는 private 여서 사용 못함, friend 필요
		total += arr.data[i];
	}
	return total;

}

int main() {

	ArrayData arr1(4);
	arr1.addElement(1.1);
	arr1.addElement(2.1);

	ArrayData arr2(arr1);
	arr1.addElement(3.1);
	arr1.addElement(4.1);

	arr1.showData();
	arr2.showData();

	cout << ArrayData::getCount() << endl;
	

	return 0;


}