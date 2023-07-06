#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0 || n == 1)
	{
	return (n);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else if (n >= 2)
	{
		if (n == i * i && n % i == 0)
		{
		return (i);
		}
		else
		{
		i++;
		_sqrt_recursion(n);
		}
	}
return (-1);
}
