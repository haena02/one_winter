#pragma once

class ArrayData {

private:
	double* data;
	int capacity;
	int used;
	static int count;

public:
	ArrayData();
	ArrayData(const ArrayData& copy);
	ArrayData(int num);
	~ArrayData();
	void addElement(double num);
	bool full();
	int getcapacity();
	int getUsed();
	static int getCount();
	void emptyArray();
	void showData();
	friend double getArraySum(const ArrayData& arr);

};