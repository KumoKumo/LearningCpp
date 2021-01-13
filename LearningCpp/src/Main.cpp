#include "../header/Topics.h"
#include<stack>

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

std::stack<int> FillInStack(int decimal)
{
	std::stack<int> powerOfTwos;
	int i = 0;
	int powerOfTwo = (int)pow(2, i);
	while (powerOfTwo <= decimal)
	{
		powerOfTwos.push(powerOfTwo);
		i++;
		powerOfTwo = (int)pow(2, i);
	}

	return powerOfTwos;
}

std::string ConvertDecimalToBinary(int decimal)
{
	std::stack<int> powerOfTwos = FillInStack(decimal);

	std::string result = "";
	while (!powerOfTwos.empty())
	{
		int amountToSubtract = powerOfTwos.top();
		if (amountToSubtract <= decimal)
		{
			decimal = decimal - amountToSubtract;
			result += "1";
		}
		else
			result += "0";

		powerOfTwos.pop();
	}

	return result;
}

void DecToBiFrom(int decimal)
{
	std::stack<int> binaryNumber;
	while (decimal > 0)
	{
		binaryNumber.push(decimal % 2);
		decimal = decimal / 2;
	}

	while (!binaryNumber.empty())
	{
		std::cout << binaryNumber.top();
		binaryNumber.pop();
	}

	std::cout << std::endl;
}

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

	Log("=======================================");
	LOG(ConvertDecimalToBinary(100));
	LOG(ConvertDecimalToBinary(642232264));
	DecToBiFrom(642232264);
	DecToBiFrom(19960108);
	std::cin.get();
}
