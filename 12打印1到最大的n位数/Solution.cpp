#include "stdafx.h"
#include <iostream>
using namespace std;

void Print1ToMaxOfNDightsRecursively(char* number, int length, int index);

void PrintNumber(char* number)
{
	bool isBeginning0 = true;
	int nLength = strlen(number);

	for (int i=0;i<nLength;++i)
	{
		if (isBeginning0 && number[i] != '0')
		{
			isBeginning0 = false;
		}
		if (!isBeginning0)
		{
			printf("%c", number[i]);
		}
	}
	printf("\t");
}

void Print1ToMaxOfNDigits(int n)
{
	if (n<=0)
	{
		return;
	}
	char*number = new char[n + 1];
	number[n] = '\0';

	for (int i=0;i<10;++i)
	{
		number[0] = i + '0';
		Print1ToMaxOfNDightsRecursively(number, n, 0);
	}
	delete[] number;
}


void Print1ToMaxOfNDightsRecursively(char* number,int length,int index)
{
	if (index == length - 1)
	{
		PrintNumber(number);
		return;
	}
	for (int i=0;i<10;++i)
	{
		number[index + 1] = i + '0';//加一个'0'是为了把i转化成字符类型。
		Print1ToMaxOfNDightsRecursively(number, length, index + 1);
	}
}

int main()
{
	Print1ToMaxOfNDigits(2);
}