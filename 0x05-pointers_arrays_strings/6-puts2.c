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
		if (i % 2 == 0)
		{
			if ((*(str + i)) == '\\')
			{
			break;
			}
			else
			{
			_putchar(*(str + i));
			}
		}
	}
	_putchar('\n');
}
