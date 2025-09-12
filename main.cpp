#include <iostream>

int main()
{
	char text[5][10];

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 10; x++)
		{
			text[y][x] = '*';
			std::cout << text[y][x];
		}
		std::cout << std::endl;
	}

	return 0;
}