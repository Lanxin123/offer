#include"stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

struct BinaryTreeNode
{
	int value;
	BinaryTreeNode* pLeft;
	BinaryTreeNode* pRight;
};

void FindPath(BinaryTreeNode *pRoot, int Nconfirmed_path_sum)
{
	if (pRoot==NULL)
	{
		return;
	}
	vector<int> path_sums;
	int Actual_path_sum = 0;
	FindPath(pRoot, Nconfirmed_path_sum, path_sums, Actual_path_sum);
}
void FindPath(BinaryTreeNode* pRoot,int Nconfirmed_path_sum,vector<int>& path_sums,int& Actual_path_sum)
{
	Actual_path_sum += pRoot->value;
	path_sums.push_back(pRoot->value);
	if (pRoot->pLeft&&pRoot->pRight==NULL&&Nconfirmed_path_sum==Actual_path_sum)
	{
		auto iter= path_sums.begin();
		for (path_sums.cbegin;path_sums.cend;++iter)
		{
			cout << *iter<<" ";
		}
	}
	if (pRoot->pLeft&&pRoot->pRight == NULL)
	{
		Actual_path_sum -= pRoot->value;
		path_sums.pop_back();
	}


	if (pRoot->pLeft!=NULL)
	{
		FindPath(pRoot->pLeft, Nconfirmed_path_sum, path_sums, Actual_path_sum);
	}
	if (pRoot->pRight!=NULL)
	{
		FindPath(pRoot->pRight, Nconfirmed_path_sum, path_sums, Actual_path_sum);
	}
}