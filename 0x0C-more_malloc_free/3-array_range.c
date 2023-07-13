#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min:  the start number.
 * @max: the end number.
 *  Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
int i = 0, j = 0, *str;

if (min > max)
return (NULL);
str = malloc(((max - min) + 1) * sizeof(int));
if (str == NULL)
return (NULL);

for (i = min; i <= max; i++, j++)
str[j] = i;
return (str);
}
