#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 is a Success.
 */
int main(void)
{
	int long fbn, lsd1, lsd2;
	int i;

	lsd1 = 1;
	lsd2 = 2;
	printf("%ld, %ld, ", lsd1, lsd2);
	for (i = 1; i <= 48; i++)
	{
		fbn = lsd1 + lsd2;
		if (i == 48)
		{
		printf("%ld", fbn);
		}
		else
		{
		printf("%ld, ", fbn);
		}
		lsd1 = lsd2;
		lsd2 = fbn;
	}
	printf("\n");
	return (0);
}
