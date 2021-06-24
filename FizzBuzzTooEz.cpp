#include <iostream>

int main()
{
	int number_to{ 0 };
	std::cin >> number_to;

	for (int16_t i{ 1 }; i < number_to; ++i)
	{
		if (!(i % 3) && !(i % 5))
		{
			printf_s("Fizz Buzz\n");
			continue;
		}
		if (!(i % 3))
		{
			printf_s("Fizz\n");
			continue;
		}
		if (!(i % 5))
		{
			printf_s("Buzz\n");
			continue;
		}
		printf_s("%i\n", i);
	}

	return 0;

}