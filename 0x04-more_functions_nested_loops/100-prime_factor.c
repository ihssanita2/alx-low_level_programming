#include <stdio.h>

/**
 * main - a program that finds and prints the
 * largest prime factor of the number 612852475143.
 * Return: Always 0.
 */
int main(void)
{
	int long BN;
	int x;

	BN = 612852475143;
	x = 2;
	while (BN != 1)
	{
	if (BN % x == 0)
	{
		BN = BN / x;
	}
	else
		x += 1;
	}
	printf("%d\n", x);
	return (0);
}
