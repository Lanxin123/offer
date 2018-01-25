#include "stdafx.h"
#include <iostream>
#include<list>
#include <algorithm> 
#include <stack>
using namespace std;

int main()
{
	list<int> Positive{ 2,5,8,10,11,13 };
	stack<int> Reverse;
	for_each(Positive.begin(), Positive.end(), [&Reverse](int value) {Reverse.push(value); });//一定要在捕获列表内加函数引用，不然就变成了一个封闭的局部函数。
	while (Reverse.size()!=0)
	{
		cout << Reverse.top() << " ";
		Reverse.pop();
	}
}

