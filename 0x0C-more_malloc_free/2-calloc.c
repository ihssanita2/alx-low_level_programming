#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: unsigned int type.
 * @size: unsigned int type.
 * Return: return pointer or a Null if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p_memory;

	if (nmemb == 0 || size == 0)
	return (NULL);
	p_memory = malloc(nmemb * size);
	if (p_memory == NULL)
	{
	return (NULL);
	}
	i = 0;
	while (i < nmemb * size)
	{
	p_memory[i] = 0;
	i++;
	}
	return (p_memory);
}
