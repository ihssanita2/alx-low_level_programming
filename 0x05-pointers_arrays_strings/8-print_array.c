#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers.
 * @a: the array of integers.
 * @n: the elements to print.
 * Return: void.
 */
void print_array(int *a, int n)
{
	int j, i = -1, p;

	if (a == NULL || n <= 0)
	{
		printf("\n");
		return;
	}
	while ((*(a + i)) != '\0')
	{
		i++;
	}
	if (n <= i)
	{
		p = n;
	}
	else if (n > i)
	{
		p = i;
	}
	p--;
	for (j = 0; j <= p ; j++)
	{
		if (j == p)
		{
			printf("%d\n", a[j]);
		}
		else
		{
			printf("%d, ", a[j]);
		}
	}
}
