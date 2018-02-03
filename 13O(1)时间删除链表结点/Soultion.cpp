#include "stdafx.h"
#include <iostream>
using namespace std;

struct NodeList
{
	int data;
	NodeList* next;
};

void DelNode(NodeList* pHead,NodeList* delNode)
{
	if (!pHead || !delNode)
	{
		return;
	}

	if (delNode->next!=NULL)
	{
		NodeList *t_node = delNode->next;
		delNode->data = delNode -> next->data;
		delNode->next = delNode->next->next;
		delete t_node;
		t_node = NULL;
	}
	else if (pHead==delNode)
	{
		delete delNode;
		delNode = NULL;
	}
	else//链表除了头指针外仍有节点，删除尾节点
	{
		//这个地方我的方法和作者有出入，我这样做可能浪费了一个data的空间吧 ，我不是很清楚这里。
		delete delNode->next;
		delNode->data = NULL;
		delNode = NULL;
	}
	//作者的方法
	/*else
	{
		NodeList* t_node = *pHead;
		while (t_node->next!=delNode)
		{
			t_node = t_node->next;
		}
		t_node->next = NULL;
		delete delNode;
		delNode = NULL;
	}*/
	
	
}
