#include <iostream>
#include <string>
#include "t2.h"

using namespace std;

t2::t2()
{
	nume = 0;
	den = 1;
}

t2:: ~t2()
{
}

int t2::getNume()
{
	return nume;
}

int t2::getDen()
{
	return den;
}

void t2::setN(int k)
{
	nume = k;
}

void t2::setD(int k)
{
	den = k;
}

t2 t2 :: operator+(t2 &k)
{
	t2 result;
	result.nume = (nume*k.den) + (den*k.nume);
	result.den = den*k.den;
	return result;

}

t2 t2:: operator-(t2 &k)
{
	
	t2 result;
	result.nume = (nume*k.den) - (den*k.nume);
	result.den = den*k.den;
	return result;
}

t2 t2:: operator*(t2 &k)
{
	t2 result;
	result.nume = (nume*k.nume);
	result.den = den*k.den;
	return result;
}

void t2::print()
{
	
	//int rem;
	if (nume >= den)
	{
		int whole;
		int quo;
		if (nume % den == 0)
		{
			whole = nume / den;
			cout << "\n Result: " << whole << endl;
		}//if
		else
		{
			whole = nume / den;
			quo = nume % den;

			int gcd;
			for (int i = 1; i < den; i++)
			{
				if (quo%i == 0 && den%i == 0)
				{
					gcd = i;
				}
			}

			cout << "\n Result: " << whole << " " << quo/gcd << "/" << den/gcd << endl;
		}//else

	}//if
	else
	{
		int gcd;
		for (int i = 1; i < den;i++)
		{
			if (nume%i == 0 && den%i == 0)
			{
				gcd = i;
			}
		}

		cout << "\n Result: " << nume/gcd << "/" << den/gcd << endl;
	}
}