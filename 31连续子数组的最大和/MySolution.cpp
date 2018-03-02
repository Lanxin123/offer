#include"stdafx.h"
#include <iostream>

using namespace std;

int FindTheMostChildArray(int *num,int length)
{

	if (num==NULL||length<=0)
	{
		return 0;
	}
	int max(0);
	int sum(0);
	for (int i = 0;i<length;++i)
	{
		sum += num[i];
		if (sum<0)
		{
			sum = 0;
		}
		if (sum>max)
		{
			max = sum;
		}
	}

	return max;
}


int main()
{
	int a[5] = { 2,-3,5,3,-3 };
	cout << FindTheMostChildArray(a, 5);
}