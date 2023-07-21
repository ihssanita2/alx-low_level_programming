#include "function_pointers.h"

/*Ihssane ERRAJY*/
/**
 * int_index - searches for an integer.
 * @array: pointer to the array.
 * @size: size of the array.
 * @cmp: a pointer to the function to be used to compare values.
 * Return: index of the desired element, if failure -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int is_it, i;

if (array != NULL && cmp != NULL && size > 0)
{
for (i = 0; i < size; i++)
{
is_it = cmp(array[i]);
if (is_it == 1)
return (i);
}
}
return (-1);
}

