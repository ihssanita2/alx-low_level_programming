#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: the string to be printed.
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return;
	}
	for (i = 0; (*(str + i)) != '\0'; i++)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
