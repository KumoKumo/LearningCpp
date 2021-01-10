#include <iostream>
#include "../header/Log.h"
#define LOG(x) std::cout << x << std::endl

void RunPointerExample()
{
	Log("========================================");
	int var = 8;
	int* ptr = &var;
	*ptr = 10;
	LOG(var);

	Log("========================================");
	char* buffer = new char[8];
	memset(buffer, 8, 8);
	char** ptr2 = &buffer;

	delete[] buffer;
}