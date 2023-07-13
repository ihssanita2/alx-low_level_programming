#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc.
 * @b: the size to allocate.
 * return: a pointer or 98 if it fails.
*/
void *malloc_checked(unsigned int b)
{
void* ptr = malloc(b * sizeof(b));
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
