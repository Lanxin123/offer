#include"stdafx.h"
#include <iostream>

using namespace std;

void FindContinuousSequence(int sum)
{
	if (sum<3)
	{
		return;
	}

	int small = 1;
	int big = 2;
	int middle = (1 + sum) / 2;
	int curSum = small + big;

	while (small < middle)
	{
		if (curSum==sum)
		{
			curSum == small;
			small++;

			if (curSum == sum)
			{
				PrintContinuousSequence(small, big);
			}
			big++;
			curSum += big;
		}
	}
}

void PrintContinuousSequence(int small, int big)
{
	for (int i = small;i <= big;++i)
	{
		cout << i;
		cout << endl;
	}
}