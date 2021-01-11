#include "../header/Topics.h"

class Player
{
public:
	int x, y;
	int speed;

	void Move(int xAmount, int yAmount)
	{
		x = xAmount * speed;
		y = yAmount * speed;
	}
};

enum class Level : unsigned char
{
	Level01, Level02, Level03
};

extern int s_variable00;

void FunctionFromMain()
{
	LOG("This function is from main.cpp!!");
}

void FunctionFromStatic();

int main()
{
	RunConditionExample();
	RunLoopExample();
	RunPointerExample();
	RunReferenceExample();

	Player player;
	player.x = 5;
	player.Move(1, -1);

	Log("=======================================");
	LOG(s_variable00);
	RunStaticOutsideOfClassOrStructExample();
	FunctionFromStatic();

	Log("=======================================");
	RunStaticInsideOfClassOrStructExample();

	RunLocalStaticExample();
	RunLogExample();
	Level level = Level::Level02;
	std::cin.get();
}
