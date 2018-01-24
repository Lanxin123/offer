#include "stdafx.h"
#include <iostream>

using namespace std;
int main() {
	char str1[] = "hello world";
	char str2[] = "hello world";

	char* str3 = "hello world";
	char* str4 = "hello world";

	if (str1 == str2)//str1相当于一个一级指针，而&str1为取址
	{
		printf("str1== str2");	
	}
	else
	{
		printf("str1 != str2");
	}
	if (str3 == str4)//str3存储内容
	{
		printf("str3 == str4");
		cout << str3 << endl;
	}
	else
	{
		printf("str3 != str4");
	}
}