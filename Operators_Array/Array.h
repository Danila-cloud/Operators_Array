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

	
	explicit MyArray(int _size);  //конструктор


	MyArray(const MyArray& obj);  //конструктор копирования


	bool operator == (const MyArray& obj);	//оператор равенства ==


	bool operator > (const MyArray& obj);	//оператор > сравнение по сумме элементов


	bool operator < (const MyArray& obj);	//оператор < сравнение по сумме элементов


	int operator + (const MyArray& obj);	//оператор Arr + Arr


	MyArray& operator + (int n);	//оператор добавляет значение в конец массива


	int operator * (const MyArray& obj);	//оператор * высчитывает сумму всех элементов массива


	float operator % (const MyArray& obj);	//оператор % высчитывает среднее значение элементов


	MyArray& operator = (const MyArray& obj);	//оператор присваивания =


	int operator [] (int index) const;	//оператор получение значения по индексу


	int GetSize();	//геттеры


	~MyArray();	//деструктор


	void print() const; 	//вывод массива на экрна


	void setRand(); 	//заполнение массива

};
