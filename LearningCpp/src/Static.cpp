#include "../header/Topics.h"

int s_variable00 = 10;

void FunctionFromMain();

//static void FunctionFromStatic()
void FunctionFromStatic() 
{
	LOG("This function is from static.cpp!!");
}

void RunStaticOutsideOfClassOrStructExample() 
{
	FunctionFromMain();
}

struct Entity
{
	int x, y;
	static int s_X, s_Y;

	void Print()
	{
		std::cout << x << ", " << y << std::endl;
	}

	static void PrintStatics()
	{
		std::cout << s_X << ", " << s_Y << std::endl;
	}
};

int Entity::s_X;
int Entity::s_Y;

void RunStaticInsideOfClassOrStructExample()
{
	Entity e; //Instantiate on Stack?
	e.x = 2;
	e.y = 3;

	//Initialize using an initializer
	Entity e1 = { 5,8 };

	Entity::s_X = 10;
	Entity::s_Y = 11;
	Entity::PrintStatics();

	/*e.Print();
	e1.Print();

	Log("=========================================");
	e.s_X = 0;
	e.s_Y = 0;

	e1.s_X = 8;
	e1.s_Y = 9;

	e.PrintStatics();
	e1.PrintStatics();*/
}


