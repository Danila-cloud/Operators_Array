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

	//����������� � ����� ����������
	explicit MyArray(int _size);

	//����������� �����������
	MyArray(const MyArray& obj);

	//�������� ��������� ==
	bool operator == (const MyArray& obj);

	//�������� ����������� !=
	bool operator != (const MyArray& obj);

	//�������� ������ > ��������� ���������� �� ����� ��������� ��������
	bool operator > (const MyArray& obj);

	//�������� ������ < ��������� ���������� �� ����� ��������� ��������
	bool operator < (const MyArray& obj);

	//�������� Array + Array
	MyArray& operator + (const MyArray& obj);

	//�������� Array + int ��������� �������� � ����� �������
	MyArray& operator + (int n);

	//�������� Array * Array ������� ������ � ������ ���������� ���������� ���� ��������
	MyArray& operator * (const MyArray& obj);

	//�������� Array % Array ������� ������ � ���������� �������������� ���������� ���� ��������
	MyArray& operator % (const MyArray& obj);

	//�������� ������������ =
	MyArray& operator = (const MyArray& obj);

	//�������� ��������� �������� ������������ ������� �� �������
	int operator [] (int index) const;

	//�������� ��������� �������� ������� �� �������
	int& operator [] (int index);

	//�������
	int GetSize();

	//����������
	~MyArray();

	//����� ������� �� �����
	void print() const;

	//���������� �������
	void setRand();

};
