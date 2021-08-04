
#include<iostream>
#include <Windows.h>
#include "Array.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	MyArray b(10);
	b.setRand();
	b.print();

}

