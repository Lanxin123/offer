#include "stdafx.h"
#include <iostream>
using namespace std;

struct ListNode
{
	int m_nValue;
	ListNode *m_pnext;
};

ListNode* Findnode(ListNode* Head, unsigned int k)
{
	if (Head == NULL || k == 0)
	{
		cout << "This List is Null or k is NULL" << endl;
		return 0;
	}
	ListNode *pAhead = Head;
	ListNode *pBehind = Head;
	
	for (unsigned int i=0;i<k-1;++i)
	{
		if (pAhead->m_pnext !=NULL)
		{
			pAhead = pAhead->m_pnext;
		}
		else
		{
			return NULL;
		}
	}

	while (pAhead->m_pnext != NULL)
	{
		pAhead = pAhead->m_pnext;
		pBehind = pBehind->m_pnext;
	}
	return pBehind;
}



int main()
{
	ListNode list[5];
	list[0].m_nValue = 1;
	list[0].m_pnext = &list[1];
	list[1].m_nValue = 2;
	list[1].m_pnext = &list[2];
	list[2].m_nValue = 3;
	list[2].m_pnext = &list[3];
	list[3].m_nValue = 4;
	list[3].m_pnext = &list[4];
	list[4].m_nValue = 5;
	list[4].m_pnext = NULL;


	ListNode *node = list;

	while (node != NULL)
	{
		cout << node->m_nValue;
		node = node->m_pnext;
	}
	cout << endl;
	cout << Findnode(list, 4)->m_nValue;

	return 0;
}