
#include "Array.h"


int main()
{
	setlocale(LC_ALL, "Russian");


	MyArray a(10);
	MyArray b(10);
	a.setRand();
	b.setRand();


	cout << "Оператор суммы двух массивов +" << endl;

	cout << "A:";
	a.print();
	cout << endl << "B:";
	b.print();
	MyArray c(a.GetSize() + b.GetSize());
	c = a + b;
	c.print();
	cout << endl << endl << "Оператор равенства ==" << endl;


	cout << "1)";
	a.print();
	cout << endl;
	b.print();
	cout << endl << "a = b" << endl << "2)";
	a = b;
	a.print();
	cout << endl;
	b.print();

}


