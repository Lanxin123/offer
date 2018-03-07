#include"stdafx.h"
#include <iostream>

using namespace std;

long GetUglyNumber(int index);
bool IstUglyNumber(long number);

long GetUglyNumber(int index)
{
	if(index<=0)
	{
		return 0;
	}
	long number = 0;
	for (int i=0;i<index;)
	{	
		++number;
		if (IstUglyNumber(number))
		{
			++i;
		}
	}
	return number;
}


bool IstUglyNumber(long number)
{
	while (number%2==0)
	{
		number = number / 2;
	}
	while (number%3==0)
	{
		number = number / 3;
	}
	while (number%5==0)
	{
		number = number / 5;
	}
	
	return number == 1 ? 1 : 0;
}


int main()
{
	cout << GetUglyNumber(1500);
}
