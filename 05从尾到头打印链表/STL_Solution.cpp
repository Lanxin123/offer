#include "stdafx.h"
#include <iostream>
#include<list>
#include <algorithm> 
using namespace std;

void PrintList(int num)
{
	cout << num<<"  ";
}

int main()
{
	list<int> Positive{ 2,5,8,10,11,13 };
	reverse(Positive.begin(), Positive.end());
	for_each(Positive.begin(), Positive.end(), PrintList);
}


//此方法纯属投机取巧，面试都怕被骂出来。