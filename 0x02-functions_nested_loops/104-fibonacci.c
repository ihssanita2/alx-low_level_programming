#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 is a Success.
 */
int main(void)
{
	unsigned long fbn, lsd1, lsd2;
	int i;

	lsd1 = 1;
	lsd2 = 2;
	printf("%lu, %lu, ", lsd1, lsd2);
	for (i = 1; i <= 96; i++)
	{
		fbn = lsd1 + lsd2;
		if (i == 96)
		{
		printf("%lu", fbn);
		}
		else
		{
		printf("%lu, ", fbn);
		}
		lsd1 = lsd2;
		lsd2 = fbn;
	}
	printf("\n");
	return (0);
}
