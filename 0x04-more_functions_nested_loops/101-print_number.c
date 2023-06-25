#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to print.
 * Return: void.
 */
void print_number(int n)
{
	unsigned int i = 1, j, count = 0;
	unsigned int N = n, P;

	if (n < 0)
	{
		N = -N;
		 _putchar(45);
	}
	P = N;
	while (N >= 10)
	{
		N = N / 10;
		i *= 10;
		count++;
	}
	for (j = 0; j <= count; j++)
	{
		N = P / i;
		i /= 10;
		_putchar((N % 10) + '0');
	}
}
