#include "../header/Topics.h"

void IncrementUsingValue(int value)
{
	value++;
}

void IncrementUsingPointer(int* pointer)
{
	(*pointer)++;
}

void IncrementUsingReference(int& reference)
{
	reference++;
}

void RunReferenceExample()
{
	Log("=====================================");
	int a = 5;
	int& ref = a;
	ref = 2;

	IncrementUsingValue(a);
	LOG(a);

	IncrementUsingPointer(&a);
	LOG(a);

	IncrementUsingReference(ref);
	LOG(a);

	IncrementUsingReference(a);
	LOG(a);
}