#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: the string to be printed.
 * Return: void.
 */
void puts_half(char *str)
{
	int i = 0, j = 1;

	if (str == NULL)
	{
		return;
	}
	while ((*(str + i)) != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (j = i / 2; (*(str + j)) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	else
	{
		for (j = (i - 1) / 2; (*(str + j)) != '\0'; j++)
		{
			_putchar(*(str + j));
		}
	}
	 _putchar('\n');
}
