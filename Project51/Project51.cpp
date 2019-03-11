#include <iostream>
#include <random>
#include <ctime>

int main()
{
	std::mt19937 mersenne(static_cast<unsigned int>(std::time(nullptr)));
	std::uniform_int_distribution<> die(1, 10);
	
	for (int count = 1; count <= 5; ++count)
	{
		std::cout << die(mersenne) << "\t";

		if (count % 1 == 0)
			std::cout << "\n";
	}

	return 0;
}