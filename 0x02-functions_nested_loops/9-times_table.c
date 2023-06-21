#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * Return: void.
 */
void times_table(void)
{
	int x, y, m;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			m = x * y;
			if (m >= 0 && m <= 9)
			{
			_putchar(m + '0');
			}
			else
			{
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			}
			if (y != 9)
			{
			_putchar(',');
			_putchar(' ');
				if (m >= 0 && m <= 9)
				{
					_putchar(' ');
				}
			}
			else
			{
			_putchar('\n');
			}
		}
	}
}
