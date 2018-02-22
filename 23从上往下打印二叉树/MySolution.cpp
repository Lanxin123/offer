#include"stdafx.h"
#include <iostream>
#include <deque>

using namespace std;

struct BinaryTreeNode
{
	int value;
	BinaryTreeNode * pLeft;
	BinaryTreeNode * pRight;
};

void PrintBinaryTreeNode(BinaryTreeNode* pTreeRoot)
{
	if (!pTreeRoot)
	{
		return;
	}
	deque<BinaryTreeNode*> printDeque;
	
	printDeque.push_back(pTreeRoot);

	while (printDeque.size())
	{
		if (printDeque.front()->pLeft)
		{
			printDeque.push_back(pTreeRoot->pLeft);
		}
		if (printDeque.front()->pRight)
		{
			printDeque.push_back(pTreeRoot->pRight);
		}
		cout << printDeque.front();
		printDeque.pop_front();

	}

}