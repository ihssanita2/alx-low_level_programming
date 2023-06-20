#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @l: type int
 * Return: Returns the value of the last digit.
 */
int print_last_digit(int l)
{
	int n;

	if (l < 0)
	n = -1 * (l % 10);
	else
	n = l % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}
