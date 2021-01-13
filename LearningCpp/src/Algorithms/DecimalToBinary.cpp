#include"../../header/Topics.h"
#include<stack>

/*
Algorithm:
	1.Store the remainder when the number is divided by 2.
	2.Divide the number by 2.
	3.Repeat the above two steps while the number is greater than zero.
	4.Print in reverse order.
*/
void FromDecToBi(int decimal)
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



//My attempt
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