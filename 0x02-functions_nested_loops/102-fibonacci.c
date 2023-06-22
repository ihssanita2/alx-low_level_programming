#include <stdio.h>

/**
 * main - Entry point.
 *
 * Return: 0 is a Success.
 */
int main(void)
{
	int i; 
	int long fbn, lsd1 = 1, lsd2 = 2;

	printf("%ld, %ld, ", lsd1, lsd2);
	for (i = 0; i <= 50; i++)
	{
		fbn = lsd1 + lsd2;
		printf("%ld, ", fbn);
		lsd1 = lsd2;
		lsd2 = fbn;
	}
	printf("\n");
	return (0);
}
