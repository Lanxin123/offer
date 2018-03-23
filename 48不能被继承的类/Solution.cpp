#include "stdafx.h"
#include <iostream>

using namespace std;

class SealedClass1
{
public:
	static SealedClass1* GetInstance()
	{
		return new SealedClass1();
	}
	static void DeleteInstance(SealedClass1* pInStance)
	{
		delete pInStance;
	}
private:
	SealedClass1() {};
	~SealedClass1() {};
};