#include "main.h"

/**
 * main - Entry point.
 * Description: prints the word _putchar, followed by a new line.
 * Return: 0 success.
 */
int main(void)
{
	int i;
	char F_array[] = "_putchar";

	for (i = 0; i <= 7; i++)
	{
		_putchar(F_array[i]);
	}
		_putchar('\n');
	return (0);
}
