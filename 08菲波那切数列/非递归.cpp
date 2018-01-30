#include "stdafx.h"
#include <iostream>

using namespace std;


long long Fibonacci(unsigned val)
{
	if (val<2)
	{
		int result[2] = { 0,1 };
		return result[val];
	}
	long long Fibonaccival1 = 0;
	long long Fibonaccival2 = 1;
	long long Fibonaccivaln = 0;

	for (int i=2;i<val;i++)
	{
		Fibonaccivaln = Fibonaccival1 + Fibonaccival2;
		Fibonaccival1 = Fibonaccival2;
		Fibonaccival2 = Fibonaccivaln;
	}
	return Fibonaccivaln;
}


int main()
{
	cout << Fibonacci(5);
}