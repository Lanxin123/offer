#include"stdafx.h"
#include <iostream>
#include <deque>
#include <memory>

using namespace std;
struct BinaryTreeNode
{
	int value;
	BinaryTreeNode * pLeft;
	BinaryTreeNode * pRight;
};
bool PosterOrderTraversal(int sequence[], int length)
{
	if (length <= 0||sequence==NULL)
	{
		return false;
	}
	int root = sequence[length - 1];

	int i = 0;
	for (;i<length-1;++i)
	{
		if (sequence[i]>root)
		{
			break;
		}
	}

	int j = 0;
	for (;j<length-1;++j)
	{
		if (sequence[j]>root)
		{
			return false;
		}
	}


	bool left = true;
	if (i>0)
	{
		left = PosterOrderTraversal(sequence, i);
	}

	bool right = true;
	if (i<length-1)
	{
		right = PosterOrderTraversal(sequence+i, length-i-1);
	}

	return (left&&right);
}