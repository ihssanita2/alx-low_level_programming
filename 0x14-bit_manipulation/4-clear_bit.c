#include "main.h"

/*ihssaneer*/
/**
  * clear_bit - sets the value of a bit to 0 at a given index.
  * @index: the index, starting from 0 of the bit you want to set.
  * @n: unsigned long to change
  * Return: 1 if it worked, or -1 if an error occurred.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int rm;

	if (index > 63)
		return (-1);
	rm = 1 << index;
	*n = (*n & ~rm) | ((0 << index) & rm);
	return (1);
}
