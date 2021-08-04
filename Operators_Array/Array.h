#pragma once
#include<iostream>
#include <Windows.h>
using namespace std;



class MyArray
{

private:
	int size = 0;
	int* arr = nullptr;

public:

	//конструктор с одним параметром
	explicit MyArray(int _size);

	//конструктор копирования
	MyArray(const MyArray& obj);

	//оператор равенства ==
	bool operator == (const MyArray& obj);

	//оператор неравенства !=
	bool operator != (const MyArray& obj);

	//оператор больше > сравнение происходит по сумме элементов массивов
	bool operator > (const MyArray& obj);

	//оператор меньше < сравнение происходит по сумме элементов массивов
	bool operator < (const MyArray& obj);

	//оператор Array + Array
	MyArray& operator + (const MyArray& obj);

	//оператор Array + int добавляет значение в конец массива
	MyArray& operator + (int n);

	//оператор Array * Array создаем массив с общими уникальнми элементами двух массивов
	MyArray& operator * (const MyArray& obj);

	//оператор Array % Array создаем массив с уникальнми отличительными элементами двух массивов
	MyArray& operator % (const MyArray& obj);

	//оператор присваивания =
	MyArray& operator = (const MyArray& obj);

	//оператор получение значения константного массива по индексу
	int operator [] (int index) const;

	//оператор изменения значения массива по индексу
	int& operator [] (int index);

	//геттеры
	int GetSize();

	//деструктор
	~MyArray();

	//вывод массива на экрна
	void print() const;

	//заполнение массива
	void setRand();

};
