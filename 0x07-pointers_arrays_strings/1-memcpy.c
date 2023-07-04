#include "main.h"

/**
 * *_memcpy - copies memory area.
 * @dest: The destination memory area.
 * @src: The source memory area.
 * @n: Number of bytes to be copied.
 * Return: Pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
