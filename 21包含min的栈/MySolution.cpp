#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

static stack<int>min;

void StackpushMin(stack<int>& m_stack,int value)
{

	if (m_stack.empty())
	{
		min.push(value);
	}
	if (min.top()>=value)
	{
		min.push(value);
	}
	m_stack.push(value);

}

void StackpopMin(stack<int>& m_stack)
{
	if (m_stack.empty())
	{
		cout << "The stack is empty";
	}
	if (m_stack.top() == min.top())
	{
		min.pop();
	}
	m_stack.pop();
}

int getmin(stack<int> &m_stack)
{
	if (m_stack.empty())
	{
		cout << "The stack is null";
	}
	return min.top();
}

int main()
{
	stack<int> Stack;
	StackpushMin(Stack, 3);
	StackpushMin(Stack, 2);
	StackpushMin(Stack, 1);
	StackpushMin(Stack, 1);
	StackpushMin(Stack, 2);
	cout<<getmin(Stack);
	StackpopMin(Stack);
	StackpopMin(Stack);
	StackpopMin(Stack);
	cout << getmin(Stack);
}
