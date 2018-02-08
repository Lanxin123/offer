#include "stdafx.h"
#include <iostream>
using namespace std;

struct ListNode 
{
	int m_nValue;
	ListNode *m_pNext;
};

ListNode *Merge(ListNode* pHead1, ListNode* pHead2)
{
	if (pHead1 == NULL||pHead2==NULL)
	{
		return pHead1 == NULL ? pHead2 : pHead1;
	}
	ListNode *pMergeHead = NULL;
	if (pHead1->m_nValue<pHead2->m_nValue)
	{
		pMergeHead = pHead1;
		pHead1 = pHead1->m_pNext;
		pMergeHead->m_pNext = Merge(pHead1, pHead2);
	}
	else
	{
		pMergeHead = pHead2;
		pHead2 = pHead2->m_pNext;
		pMergeHead->m_pNext = Merge(pHead1, pHead2);
	}
	return pMergeHead;
}



int main()
{
	ListNode list1[5];
	list1[0].m_nValue = 1;
	list1[0].m_pNext = &list1[1];
	list1[1].m_nValue = 3;
	list1[1].m_pNext = &list1[2];
	list1[2].m_nValue = 5;
	list1[2].m_pNext = &list1[3];
	list1[3].m_nValue = 7;
	list1[3].m_pNext = &list1[4];
	list1[4].m_nValue = 9;
	list1[4].m_pNext = NULL;

	ListNode list2[5];
	list2[0].m_nValue = 2;
	list2[0].m_pNext = &list2[1];
	list2[1].m_nValue = 4;
	list2[1].m_pNext = &list2[2];
	list2[2].m_nValue = 6;
	list2[2].m_pNext = &list2[3];
	list2[3].m_nValue = 8;
	list2[3].m_pNext = &list2[4];
	list2[4].m_nValue = 10;
	list2[4].m_pNext = NULL;


	auto *MergeList = Merge(list1, list2);

	ListNode *node = MergeList;
	while (node != NULL)
	{
		cout << MergeList->m_nValue;
		MergeList = MergeList->m_pNext;
	}


	cout << endl;
}
