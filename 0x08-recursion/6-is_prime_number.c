#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer is
 *prime number, otherwise return 0.
 * @n: the number to check.
 * Return: returns 1 if n is prime, otherwise return 0.
 */
int is_prime_number(int n)
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
