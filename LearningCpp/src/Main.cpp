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

int main()
{
	RunConditionExample();
	RunLoopExample();
	RunPointerExample();
	RunReferenceExample();

	Player player;
	player.x = 5;
	player.Move(1, -1);

	std::cin.get();
}
