#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: the string.
 * Return: the length of a string.
 */
int _strlen(char *s)
{
	int  i, l = 0;

	for (i = 0; (*(s + i)) != '\0'; i++)
	{
		l++;
	}
	return (l);
}
