#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: the 1 integer to swaps.
 * @b: the 2 integer to swaps.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
