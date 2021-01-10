#include<iostream>
#include "../header/Log.h"
#include "Main.h"

void DoingLoopExample()
{
	Log("===========================================");
	Log("Doing Loop Example: ");
	int i = 0;
	bool condition = true;
	for (; condition; )
	{
		Log("Hello World!");
		i++;
		if (!(i < 5))
			condition = false;
	}
}

void DoingConditionExample()
{
	Log("===========================================");
	Log("Doing ConditionExample: ");
	int x = 6;
	bool comparisonResult = x == 5;
	if (!comparisonResult)
		Log("It's 5!");

	const char* ptr = "Hello";
	if (ptr)
		Log("Not null!");

	const char* ptrnull = nullptr;
	if (!ptrnull)
		Log("Null");
}

int main()
{
	DoingConditionExample();

	DoingLoopExample();

	std::cin.get();
}
