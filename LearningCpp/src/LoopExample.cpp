#include "../header/Log.h"

void RunLoopExample()
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