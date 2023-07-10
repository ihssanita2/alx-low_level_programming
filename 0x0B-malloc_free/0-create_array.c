#include <stdlib.h>

/**
* create_array - creates an array of chars,
* and initializes it with a specific char.
* @size: The size of the array.
* @c: The initializer of the array.
* Return: a pointer to the array, or NULL if it fails.
*/
char *create_array(unsigned int size, char c)
{
char *Array;
unsigned int i;
Array = (char *)malloc(size);
if (Array == NULL || size == 0)
{
return (NULL);
}
for (i = 0; i <= size; i++)
{
Array[i] = c;
}
return (Array);
}
