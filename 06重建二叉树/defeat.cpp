//逻辑有错误，自己的想法不够周密，导致浪费太多时间还没有做出来。
//每次交替指针的时候只考虑了一种情况，实际还有一种情况存在，对位置的把控没有做到。
//希望自己有空的时候再回来看看这段代码。。。要是不用STL的话。。。可能早写完了。。。
//下面文件的代码明日再研究，参照参照别人的吧


#include "stdafx.h"
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct BinaryTreeNode
{
	int m_nValue;
	BinaryTreeNode* m_pLeft;
	BinaryTreeNode* m_pRight;
};

BinaryTreeNode* Construct(vector<int> preOrder,vector<int> inOrder)
{
	BinaryTreeNode* t_root = new BinaryTreeNode;
	vector<int> p_Left ;
	vector<int> p_Right;
	auto o_begin = inOrder.begin();
	auto o_end = inOrder.end();
	auto iter = find(inOrder.begin(), inOrder.end(), preOrder[0]);//root
	auto p_root = iter;
	
	for_each(o_begin, iter, [&p_Left](int value) {p_Left.push_back(value); });
	for_each(++iter, o_end, [&p_Right](int value) {p_Right.push_back(value); });
	
	for (int i=1;i<preOrder.size();i++)
	{
		cout << "第" << i << "次" << endl;
		
		for_each(p_Left.begin(), p_Left.end(), [](int value) {cout << value << " "; });
		cout << endl;
		
		for_each(p_Right.begin(), p_Right.end(), [](int value) {cout << value << " "; });
		cout << endl;

		p_Left.clear();
		p_Right.clear();

		auto index = distance(begin(inOrder), iter);
		auto iter = find(inOrder.begin(), inOrder.end(), preOrder[i]);
		auto o_index = distance(begin(inOrder), iter);
		if(o_index<index)
		{
			for_each(o_begin, iter, [&p_Left](int value) {p_Left.push_back(value); });
			for_each(++iter, p_root, [&p_Right](int value) {p_Right.push_back(value); });
		}

		if (o_index>index)
		{
			for_each(p_root, iter, [&p_Left](int value) {p_Left.push_back(value); });
			for_each(iter++, p_root, [&p_Right](int value) {p_Right.push_back(value); });
		}
		p_root = iter;
		
	}
	return 0;
}



int main(int argc, char * * argv) {
	
	int pre[8] = { 1, 2, 4, 7, 3, 5, 6, 8 };
	int in[8] = { 4, 7, 2, 1, 5, 3, 8, 6 };

	vector<int> preOrder(pre,pre+8);
	vector<int> inOrder(in,in+8);

	Construct(preOrder, inOrder);


}






