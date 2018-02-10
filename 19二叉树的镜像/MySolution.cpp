#include "stdafx.h"
#include <iostream>
using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

void MirrorRecursively(BinaryTreeNode *pNode)
{
	if (pNode==NULL||(pNode->m_pLeft&&pNode->m_pRight))
	{
		return;
	}
	BinaryTreeNode *ptemp = pNode;
	if (pNode)
	{
		ptemp = pNode->m_pLeft;
		pNode->m_pLeft = pNode->m_pRight;
		pNode->m_pRight = ptemp;
		MirrorRecursively(pNode->m_pLeft);
		MirrorRecursively(pNode->m_pRight);
	}
}



//没想到这次逻辑和offer上的差不多。。。但是offer上的调用次数会更少一点。