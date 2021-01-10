#include<iostream>
#include "../header/Log.h"
#include "Main.h"

void RunLoopExample();
void RunConditionExample();
void RunPointerExample();

int main()
{
	RunConditionExample();

	RunLoopExample();

	RunPointerExample();

	std::cin.get();
}
