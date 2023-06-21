#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: type integer.
 * Return: void.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 99; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				printf("\n");
			}
			else
			{
				printf(", ");
			}
		}
	}
}
