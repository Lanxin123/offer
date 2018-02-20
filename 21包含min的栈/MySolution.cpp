#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

static int min = 0;

void StackpushMin(stack<int>& m_stack,int value)
{

	if (m_stack.empty())
	{
		min = value;
	}
	if (min>value)
	{
		min = value;
	}
	m_stack.push(value);

}

int getmin(const stack<int>& m_stack)
{
	if (m_stack.empty())
	{
		cout << "The stack is null";
	}
	return min;
}

int main()
{
	stack<int> Stack;
	StackpushMin(Stack, 3);
	StackpushMin(Stack, 2);
	StackpushMin(Stack, 3);
	cout<<getmin(Stack);
}
