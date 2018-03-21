#include "stdafx.h"
#include <iostream>

using namespace std;

class Temp
{
public:
	Temp() { ++N; Sum += N; }
	
	static void Reset() { N = 0; Sum = 0; }
	static unsigned int GetSum() { return Sum };
private:
	static unsigned int N;
	static unsigned int Sum;
	
};

unsigned int Temp::N = 0;
unsigned int Temp::Sum = 0;

unsigned int Sum_Solution1(unsigned int n)
{
	Temp::Reset();

	Temp*a = new Temp[n];
	delete []a;
	a = NULL;

	return Temp::GetSum();
}
