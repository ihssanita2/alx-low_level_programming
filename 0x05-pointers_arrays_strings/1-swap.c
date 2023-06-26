#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @n: the int to updated.
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int tmp;
	tmp = *b;
	*b = *a;
	*a = tmp;
}
