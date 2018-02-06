#include "stdafx.h"
#include <iostream>
#include <string.h>
using namespace std;

struct ListNode
{
	int m_nKey;
	ListNode* m_pNext;
};

ListNode* ReverseList(ListNode* pHead)
{
	
	ListNode *pReverseHead = NULL;
	ListNode *pNode = pHead;
	ListNode *pPrev = NULL;
	while (pNode != NULL)
	{
		ListNode* pNext = pNode->m_pNext;

		if (pNext==NULL)
		{
			pReverseHead = pNode;
		}

		pNode->m_pNext = pPrev;

		pPrev = pNode;
		pNode = pNext;
	}
	return pReverseHead;
}
