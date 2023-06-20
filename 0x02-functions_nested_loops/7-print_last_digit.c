#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @l: type int
 * Return: Returns the value of the last digit.
 */
int print_last_digit(int l)
{
	if (l < 0)
	{
	l *= -1;
	_putchar((l % 10) + '0');
	return (l % 10);
	}
	else
	{
	_putchar((l % 10) + '0');
	return (l % 10);
	}
}
