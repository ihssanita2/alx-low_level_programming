#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14.
 * Return: void.
 */
void more_numbers(void)
{
	int i, j, x;
for (i = 1; i <= 10; i++)
{
	for (j = 0; j <= 14; j++)
	{
		if (j >= 0 && j <= 9)
		{
			x = j + 10;
		}
		else if (j >= 10 && j <= 14)
		{
			_putchar('1');
			x = j;
		}
		_putchar((x % 10) + '0');
	}
_putchar('\n');
}
}
