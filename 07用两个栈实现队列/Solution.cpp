#include "stdafx.h"
#include <iostream>
#include <stack>
using namespace std;

template <typename T>
class CQueue
{
public:
	CQueue() {};
	~CQueue() {};

	void appendTail(const T& node);
	T deleteHead();

private:
	stack<T> stack1;
	stack<T> stack2;
};

template<typename T> 
void CQueue<T>::appendTail(const T& node)
{
	stack1.push(node);
}
template<typename T> 
T CQueue<T>::deleteHead()
{
	if (stack1.size()==0&&stack2.size()==0)
	{
		cout << "队列为空！" << endl;
		return 0;
	}
	while (!stack1.empty())
	{
		T &data = stack1.top();
		stack1.pop();//无返回值
		stack2.push(data);
	}
	T head = stack2.top();
	stack2.pop();
	return head;
}
int main()
{
	CQueue<int> c_queue;
	c_queue.appendTail(1);
	c_queue.appendTail(2);
	c_queue.appendTail(3);
	cout << c_queue.deleteHead();
	cout << c_queue.deleteHead();
	cout << c_queue.deleteHead();
	cout << c_queue.deleteHead();
}


