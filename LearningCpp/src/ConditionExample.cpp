#include "../header/Log.h"

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