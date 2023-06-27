#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the
 * buffer pointed to by dest.
 * @src: the string to be copied.
 * @dest: the buffer to be copied in.
 * Return: dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *dest2 = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}
	*dest = '\0';
	return (dest2);
}
