#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 is a Success.
 */
int main(void)
{
	unsigned long fbn, lsd1, lsd2, sumf;

	lsd1 = 1;
	lsd2 = 2;
	fbn = 0;
	while (fbn < 4000000)
	{
		fbn = lsd1 + lsd2;
		if ((fbn % 2) == 0)
		{
		sumf += fbn;
		}
		lsd1 = lsd2;
		lsd2 = fbn;
	}
	printf("%lu\n", (sumf + 2));
		return (0);
}
