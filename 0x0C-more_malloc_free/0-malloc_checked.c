#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to allocate.
 * Return: a pointer or 98 if it fails.
*/
void *malloc_checked(unsigned int b)
{
char *ptr;

if (b == 0)
return (NULL);
ptr = malloc(sizeof(b) * b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
