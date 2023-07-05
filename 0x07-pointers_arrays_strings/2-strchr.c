#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to be checked
 * @accept: Bytes that will determine the length
 *
 * Return: Length of the bytes given
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (s[count] != '\0')
	{
		i = 0;
		while (accept[i] != s[count])
		{
			if (accept[i] == '\0')
			{
			return (count);
			}
			j++;
		}

	count++;
	}
	return (count);
}
