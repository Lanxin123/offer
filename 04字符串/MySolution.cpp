#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
	string solu(string &str);
};

string Solution::solu(string &str)
{
	string space = "%20";
	int len = str.length();
	for (int i=0;i<len;i++)
	{
		if (str[i]==' ')
		{
			str.erase(i, 1);
			str.insert(i, space);
			len=len + 2;
			i = i + 2;
		}
	}
	return str;
}

int main()
{
	Solution solu;
	string str = "We are happy";
	cout << solu.solu(str);
}