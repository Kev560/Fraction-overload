#include <iostream>
#ifndef T2_H
#define T2_H

using namespace std;

class t2
{
private:
	int nume;
	int den;
public:

	t2();
	~t2();
	int getNume();
	int getDen();
	void setN(int);
	void setD(int);
	t2 operator+(t2 &);
	t2 operator-(t2 &);
	t2 operator*(t2 &);
	void print();



};



#endif