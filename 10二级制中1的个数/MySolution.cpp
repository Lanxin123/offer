#include "stdafx.h"
#include <iostream>
using namespace std;

int NumerOf1(int n)
{
	unsigned int p = 1;
	int count = 0;
	while (p)
	{
		if (p&n)
		{
			count++;
		}
		p = p << 1;
	}
	return count;
}

int main()
{
	cout<<NumerOf1(1)<<endl;
	cout << NumerOf1(9) << endl;
	cout << NumerOf1(-1) << endl;
}



