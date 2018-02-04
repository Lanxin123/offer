#include "stdafx.h"
#include <iostream>
using namespace std;

void Reorder(int t_array[], unsigned int length)
{
	if (t_array == NULL || length==0)
	{
		return;
	}
	int *pBegin = t_array;
	int *pEnd = t_array + length - 1;

	while (pBegin<pEnd)
	{
		while (pBegin<pEnd && (*pBegin & 0x1)!=0)
		{
			pBegin++;
		}
		while (pBegin<pEnd&&(*pEnd & 0x1)==0)
		{
			pEnd--;
		}
		if (pBegin<pEnd)
		{
			int temp = *pBegin;
			*pBegin = *pEnd;
			*pEnd = temp;
		}
	}

}

int main() {
	int m_array [5]{ 1,2,3,4,5 };
	Reorder(m_array, 5);
	for (int i=0;i<5;i++)
	{
		cout << m_array[i];
	}
}


//我也想到了一种思路，但是实现之后发现太蠢了，
//思路是：将数组的内容构建成一个二叉树，奇数放在左边，偶数放在右边。
//这样似乎是可行的，但是额外用了不少存储空间，而且，不像是oop的思想。

