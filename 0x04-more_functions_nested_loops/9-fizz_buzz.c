#include <stdio.h>

/**
 * main - Entry point.
 * Description: Fizz-Buzz programme.
 * Return: 0 is a success.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d", i);
		}
	if (i != 100)
	{
		printf(" ");
	}
	else
	{
		printf("\n");
	}
	}
	return (0);
}
