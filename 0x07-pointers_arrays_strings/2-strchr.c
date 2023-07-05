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
	unsigned int i = 0;
	int j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
				break;
			j++;
		}
		if (accept[j] == '\0')
			break;
		i++;
	}

	return i;
}
