#include "stdafx.h"
#include <stack>

bool IsPopOrder(const int* pPush, const int* pPop, int nLength)
{
	bool bPossible = false;

	if (pPush != NULL && pPop != NULL && nLength > 0)
	{
		const int* pNextPush = pPush;
		const int* pNextPop = pPop;

		std::stack<int> stackData;

		while (pNextPop - pPop < nLength)//注意这里是指针相减，得到的是元素个数
		{
			// 当辅助栈的栈顶元素不是要弹出的元素
			// 先压入一些数字入栈
			while (stackData.empty() || stackData.top() != *pNextPop)
			{
				// 如果所有数字都压入辅助栈了，退出循环
				if (pNextPush - pPush == nLength)
					break;

				stackData.push(*pNextPush);

				pNextPush++;
			}

			if (stackData.top() != *pNextPop)
				break;

			stackData.pop();
			pNextPop++;
		}

		if (stackData.empty() && pNextPop - pPop == nLength)
			bPossible = true;
	}

	return bPossible;
}