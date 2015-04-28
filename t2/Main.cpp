#include <iostream>
#include <string>
#include "t2.h"
//Example of using overloading with a fraction class
// +,-,*,/ operators will be overloaded
//insertion and extraction operators overloaded
using namespace std;

int main()
{
	t2 A, B, result;
	int a = 9;
	int b = 1;
	int c = 1;
	int d = 4;
	A.setN(a);
	A.setD(b);
	B.setN(c);
	B.setD(d);
	result = A + B;
	cout << a << "/" << b << " + " << c << "/" << d << "\n" << endl;
	result.print();

	result = A - B;
	cout <<"\n" << a << "/" << b << " - " << c << "/" << d << "\n" << endl;
	result.print();

	result = A * B;
	cout <<"\n"<< a << "/" << b << " * " << c << "/" << d << "\n" << endl;
	result.print();

	system("pause");
	return 0;

};