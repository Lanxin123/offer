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
	return Fibonacci(val - 1) + Fibonacci(val - 2);
}


int main()
{
	cout << Fibonacci(2);
}