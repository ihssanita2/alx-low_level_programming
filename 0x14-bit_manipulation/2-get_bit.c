#include "main.h"

/*ihssaneer*/
/**
 * get_bit - returns the value of a bit at a given index.
 * @index: the index, starting from 0 of the bit you want to get.
 * @n :unsigned long integer number
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int i = 0;

	if (index > 63)
		return (-1);
	n = n >> index;
	i = n & 1;
	return (i);
}
