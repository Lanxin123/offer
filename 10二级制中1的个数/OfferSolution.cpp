#include "stdafx.h"
#include <iostream>
using namespace std;

int NumerOf1(int n)
{
	int count = 0;
	while (n)
	{
		++count;
		n = (n - 1)&n;//把一个整数减去1，再和原整数做与运算，相当于把一个整数最右边一个1变成0；
	}
	return count;
}

int main()
{
	cout<<NumerOf1(1)<<endl;
	cout << NumerOf1(9) << endl;
	cout << NumerOf1(-1) << endl;
}



