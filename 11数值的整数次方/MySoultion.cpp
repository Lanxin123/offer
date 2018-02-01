#include "stdafx.h"
#include <iostream>
using namespace std;

double Power(double base, int exponent)
{
	double result = 1;
	if (exponent == 0)
	{
		return result;
	}
	if (base == 0&&exponent<0)//此处不应直接判断base==0;见43行
	{
		cout << "error";
		return 0;
	}
	if (exponent>0)
	{
		while (exponent>0)
		{
			result = base*base;
			--exponent;
		}
		return result;
	}
	while (exponent<0)
	{
		result = base*base;
		++exponent;
	}
	return 1 / result;
}

int main()
{
	cout<<Power(1,10)<<endl;
	cout << Power(-2, 2)<<endl;
	cout << Power(-1, 0) << endl;
	cout << Power(0, -1) << endl;
	cout << Power(-2, -2) << endl;
}
/*
bool equal(double num1,double num2)
{
	if ((num1-num2>-0.0000001)&&			由于计算机表示小数(包括float和double型小数)都有误差，我们不能直接用等号(==)判断两个小数是否相等，
		(num1-num2<0.0000001))				如果两个小数的差的绝对值很小，比如小于0.0000001，就可以认为它们相等。
		return true;
	else
		return false;
}
*/