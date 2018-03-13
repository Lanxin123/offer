#include"stdafx.h"
#include <iostream>

using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

int TreeDepth(BinaryTreeNode* pRoot)
{
	if (pRoot == NULL)
	{
		return 0;
	}
	
	int nLeft = TreeDepth(pRoot->m_pLeft);
	int nRigth = TreeDepth(pRoot->m_pRight);

	return nLeft > nRigth ? nLeft+1 : nRigth+1;
}








