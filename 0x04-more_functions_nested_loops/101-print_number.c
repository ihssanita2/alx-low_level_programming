#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to print.
 * Return: void.
 */
void print_number(int n)
{
	int N, i = 1, j, count = 0;

	N = n;
	if (N == 0)
	{
		_putchar('0');
	}
	if (N < 0)
	{
		N *= -1;
		i *= -1;
	}
	while (N > 0)
	{
		N = N / 10;
		i *= 10;
		count++;
	}
	i /= 10;
	for (j = 1; j <= count; j++)
	{
		N = n / i;
		i /= 10;
		if (n < 0 && j == 1)
		{
			_putchar(45);
		}
		_putchar((N % 10) + '0');
	}
}
