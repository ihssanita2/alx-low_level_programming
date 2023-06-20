#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @n: type int
 * Return: 1 if n > 0, 0 if n = 0 and -1 if n < 1 .
 */
int print_sign(int n)
{
	if (n == 0)
	{
	_putchar('0');
	return (0);
	}
	if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	_putchar('+');
	return (1);
}
