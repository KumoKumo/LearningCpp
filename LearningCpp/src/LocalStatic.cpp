#include "../header/Topics.h"

void IncrementInteger() 
{
	static int i = 0;
	i++;
	LOG(i);
}

class Singleton
{
public:
	static Singleton& Get()
	{
		static Singleton instance;
		return instance;
	}

	void SayHello() 
	{
		LOG("Hi! I am a Singleton instance!");
	}
};

void RunLocalStaticExample() 
{
	LOG("=====================================");
	IncrementInteger();
	IncrementInteger();
	IncrementInteger();
	IncrementInteger();
	IncrementInteger();

	Singleton::Get().SayHello();
}