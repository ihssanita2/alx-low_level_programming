#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 is a Success.
 */
int main(void)
{
	int x, sum;

	for (x = -500; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
		{
			if (x < 0)
			{
				x *= -1;
				sum += x;
			}
			else
			{
			sum += x;
			}
		}
	}
			printf("%d\n", sum);
	return (0);
}
