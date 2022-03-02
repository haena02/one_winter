#include "lec11_CLinkedList.h"
#include <iostream>

using namespace std;

int main() {

	CLinkedList list;
	list.insert1(10);
	list.insert1(50);
	list.insert1(20);
	list.insert1(10);
	list.insert1(100);
	list.showList();
	list.delete_all();
	cout << "------------" << endl;
	list.insert1(20);
	list.insert1(10);
	list.insert1(100);
	list.showList();
}