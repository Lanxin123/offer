#include"stdafx.h"
#include <iostream>

using namespace std;

bool FindNumbersWithSum(int data[],int length,int sum,int* num1,int* num2)
{
	bool found = false;
	if (length<1||data==NULL||*num1==NULL||*num2==NULL)
	{
		return found;
	}

	while (sum != *num1 + *num2 && num1!=num2)
	{
		if (sum > *num1 + *num2)
		{
			*++num1;
		}
		else if(sum < *num1 + *num2)
		{
			*--num2;
		}
	}
	cout<<"num1 = " << *num1 <<" "<<"num2 = "<< *num2 << endl;
	return found;
}

int main()
{
	int a[5] = { 1,2,3,4,6 };
	int* num1 = a;
	int* num2 = a+4;
	FindNumbersWithSum(a, 5, 4,num1,num2);
}