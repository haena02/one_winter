#include<iostream>
#include "lec10_ArrayData.h"



ArrayData::ArrayData()
	: capacity(0),used(0),data(nullptr)
{
	count++;
}

ArrayData::ArrayData(const ArrayData& copy)
	: capacity(copy.capacity), used(copy.used)
{
	data = new double[capacity];
	for (int i = 0; i < used; i++)
		data[i] = copy.data[i];
	count++;
}

ArrayData::ArrayData(int num)
:capacity(num),used(0)
{
	data = new double[capacity];
	count++;

}
ArrayData::~ArrayData()
{
	if (data != nullptr)
		delete[] data;
	data = nullptr;
	count--;

}
void ArrayData::addElement(double num) {
	
	if (!full()) {
		data[used++] = num;
	}
	else {
		std::cout << "빈공간이 없습니다"<< std::endl;
	}

}
bool ArrayData::full() {
	if (used == capacity )
		return true;
	else
		return false;
}
int ArrayData::getcapacity() {
	return capacity;
}
int ArrayData::getUsed() {
	return used;
}
 int ArrayData::getCount()
{
	return count;
}
void ArrayData::emptyArray() {
	used = 0;
}
void ArrayData::showData() {
	for (int i = 0; i < used; i++) {
		std::cout<<data[i]<<" ";
	}
}