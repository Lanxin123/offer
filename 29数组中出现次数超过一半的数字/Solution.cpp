#include"stdafx.h"
#include <iostream>

using namespace std;

bool CheckMoreThanHalf(int* numbers, int length, int number);

int MoreThanHalfNum(int num[],int length)
{
	if (*num==NULL||length<=0)
	{
		return 0;
	}
	int m_number = *num;
	int m_times = 1;
	for (int i = 1;i<length;++i)
	{
		if (m_number!=num[i])
		{
			--m_times;
		}
		else
		{
			++m_times;
		}
		if (m_times==0)
		{
			m_number = num[i];
		}
	}

	if (!CheckMoreThanHalf(num,length,m_number))
	{
		m_number = 0;
	}

	return m_number;
}

bool g_bInputInvalid = false;

bool CheckMoreThanHalf(int* numbers, int length, int number)
{
	int times = 0;
	for (int i = 0; i < length; ++i)
	{
		if (numbers[i] == number)
			times++;
	}

	bool isMoreThanHalf = true;
	if (times * 2 <= length)
	{
		g_bInputInvalid = true;
		isMoreThanHalf = false;
	}

	return isMoreThanHalf;
}


int main()
{
	int a[5] = { 1,2,2,2,3 };
	cout<<MoreThanHalfNum(a,5);


}