#include "../header/Topics.h"

int s_variable00 = 10;

void FunctionFromMain();

//static void FunctionFromStatic()
void FunctionFromStatic() 
{
	LOG("This function is from static.cpp!!");
}

static void Function()
{
	FunctionFromMain();
}

void RunStaticOutsideOfClassExample() 
{
	Function();
}

