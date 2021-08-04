#include "Array.h"

MyArray::MyArray(int _SIZE_)
{
	if (_SIZE_ > 0) {
		size = _SIZE_;
		arr = new int[size];
	}
}

MyArray::MyArray(const MyArray& obj)
{
	this->size = obj.size;
	for (size_t i = 0; i < obj.size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

MyArray& MyArray::operator=(const MyArray& obj)
{
	if (this == &obj) {
		return *this;
	}

	if (arr) {
		delete[] arr;
	}

	this->size = obj.size;
	for (size_t i = 0; i < obj.size; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

int MyArray::GetSize()
{
	return size;
}

MyArray::~MyArray()
{
	delete[] arr;
}
void MyArray::print() const
{
	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
}


void MyArray::setRand()
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;
	}
}

MyArray& MyArray::operator+(const MyArray& obj)
{
	int SIZE = size + obj.size;
	MyArray* Array = nullptr;
	Array = new MyArray(SIZE);

	for (size_t i = 0; i < size; i++)
	{
		(*Array)[i] = arr[i];
	}
	for (size_t i = 0; i < obj.size; i++)
	{
		(*Array)[i + size] = obj.arr[i];
	}
}
