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

	
	explicit MyArray(int _size);  //�����������


	MyArray(const MyArray& obj);  //����������� �����������


	bool operator == (const MyArray& obj);	//�������� ��������� ==


	bool operator > (const MyArray& obj);	//�������� > ��������� �� ����� ���������


	bool operator < (const MyArray& obj);	//�������� < ��������� �� ����� ���������


	int operator + (const MyArray& obj);	//�������� Arr + Arr


	MyArray& operator + (int n);	//�������� ��������� �������� � ����� �������


	int operator * (const MyArray& obj);	//�������� * ����������� ����� ���� ��������� �������


	float operator % (const MyArray& obj);	//�������� % ����������� ������� �������� ���������


	MyArray& operator = (const MyArray& obj);	//�������� ������������ =


	int operator [] (int index) const;	//�������� ��������� �������� �� �������


	int GetSize();	//�������


	~MyArray();	//����������


	void print() const; 	//����� ������� �� �����


	void setRand(); 	//���������� �������

};
