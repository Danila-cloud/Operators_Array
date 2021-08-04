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
	arr = new int[size];
	for (size_t i = 0; i < obj.size; i++)
	{
		arr[i] = obj.arr[i];
	}
}

bool MyArray::operator==(const MyArray& obj)
{
	if (size != obj.size)
	{
		return false;
	}
	else
	{
		int ravno = 0;
		for (size_t i = 0; i < size; i++)
		{
			if (arr[i] == obj.arr[i]) {
				ravno++;
			}
		}
		return ravno == size;
	}
		

}

bool MyArray::operator>(const MyArray& obj)
{
	int sum1 = 0, sum2 = 0;

	for (size_t i = 0; i < size; i++)
	{
		sum1 += arr[i];
		sum2 += obj.arr[i];
	}

	return sum1 > sum2;
}

bool MyArray::operator<(const MyArray& obj)
{
	int sum1 = 0, sum2 = 0;

	for (size_t i = 0; i < size; i++)
	{
		sum1 += arr[i];
		sum2 += obj.arr[i];
	}

	return sum1 < sum2;
}

int MyArray::operator+(const MyArray& obj)
{
	int* Array = new int(size + obj.size);

	for (size_t i = 0; i < size; i++)
	{
		Array[i] = arr[i];
	}
	for (size_t i = size; i < obj.size + size; i++)
	{
		Array[i] = obj.arr[i];
	}
	return *Array;
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
	arr = new int[size];
	for (size_t i = 0; i < obj.size; i++)
	{
		arr[i] = obj.arr[i];
	}
	return *this;
}

int MyArray::operator[](int index) const
{
	if (index < 0 || index >= size) {
		cout << "Индекс введен неправильно!";
	}
	else
	{
		return arr[index];
	}
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


MyArray& MyArray::operator+(int n)
{
	int* temp = new int[size + 1];
	for (size_t i = 0; i < size; i++)
	{
		temp[i] = arr[i];
	}
	temp[size] = n;
	size++;
	delete[] arr;
	arr = temp;
	return *this;
}

int MyArray::operator*(const MyArray& obj)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}

	return sum;
}

float MyArray::operator%(const MyArray& obj)
{
	int sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		sum += arr[i];
	}
	return sum / size;
}

