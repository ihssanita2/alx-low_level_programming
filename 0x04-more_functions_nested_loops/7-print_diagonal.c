#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: the times the / should be printed.
 * Return: void.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
			}
			else if (j <= i)
			{
				_putchar(' ');
			}
		}
	}
	}
	else
	{
	_putchar('\n');
	}
}
