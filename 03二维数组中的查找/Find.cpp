#include "stdafx.h"
#include <iostream>
#include<vector>
using namespace std;

class Solution
{
public:
	bool Solution::Find(vector<vector<int>> array, int target)
	{
		if (array.empty())
		{
			return false;
		}
		int row = array.size();//行
		int col = array[0].size();//列
		int i = 0;
		int j = col - 1;
		while (i < row - 1 && j>0)
		{
			if (array[i][j] > target)
			{
				j--;
			}
			if (array[i][j] < target)
			{
				i++;
			}
			if (array[i][j] == target)
			{
				return true;
			}
		}
		return false;
	}
};



int main()
{
	int a1[] = { 1,2,8,9 };
	int a2[] = { 2,4,9,12 };
	int a3[] = { 4,7,10,13 };
	int a4[] = { 6,8,11,15 };
	vector<vector<int>> array;
	array.push_back(vector<int>(a1, a1 + 4));
	array.push_back(vector<int>(a2, a2 + 4));
	array.push_back(vector<int>(a3, a3 + 4));
	array.push_back(vector<int>(a4, a4 + 4));

	Solution solu;

	cout << solu.Find(array, 18) << endl;
	return 0;
}







