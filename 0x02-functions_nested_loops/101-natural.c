#include "main.h"
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
			_abs(x);
			sum += x;
		}
	}
			printf("%d\n", sum);
	return (0);
}
