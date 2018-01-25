#include "stdafx.h"
#include <iostream>
using namespace std;

class ListNode 
{
public:
	int val;
	ListNode* next;
	void push_back(int val);
}*List;

void ListNode::push_back(int val)
{
	ListNode* newNode = new ListNode;
	ListNode* temp = List;
	newNode->val = val;
	newNode->next = NULL;
	if (List == NULL)
	{
		List = newNode;
		
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}
}

void printList(ListNode* pHead)
{
	if (pHead != NULL)
	{
		if (pHead->next != NULL)
		{
			printList(pHead->next);
		}
		cout << pHead->val << " " << endl;
	}
}


int main()
{
	List->push_back(1);
	List->push_back(2);
	List->push_back(3);
	

	printList(List);
	
}

//这个链表写的真是千难万险，基础知识还需加强，写到后面都开始怀疑自己最基本的知识了。