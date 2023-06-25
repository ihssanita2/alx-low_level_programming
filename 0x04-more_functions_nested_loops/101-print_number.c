#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to print.
 * Return: void.
 */
void print_number(int n)
{
	int i = 1, j, count = 0;
	unsigned int N = n, P;

	if (n == 0)
	{
		_putchar(N + '0');
	}
	if (n < 0)
	{
		N *= -1;
		 _putchar(45);
	}
	P = N;
	while (N > 0)
	{
		N = N / 10;
		i *= 10;
		count++;
	}
	i /= 10;
	for (j = 1; j <= count; j++)
	{
		N = P / i;
		i /= 10;
		_putchar((N % 10) + '0');
	}
}
