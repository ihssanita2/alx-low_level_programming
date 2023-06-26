#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 * Return: void.
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char r;

	if (s == NULL)
	{
		return;
	}
	while ((*(s + i)) != '\0')
	{
		i++;
	}
	i--;
	while (i >= j)
	{
		r = *(s + j);
		*(s + j) = *(s + i);
		*(s + i) = r;
		j++;
		i--;
	}
}
