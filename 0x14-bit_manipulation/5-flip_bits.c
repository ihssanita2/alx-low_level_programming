#include "main.h"

/*ihssaneer*/
/**
*flip_bits - returns the number of bits you
* would need to flip to get from one number to another.
*@n: first arg.
*@m: second arg.
*Return: unsigned integer
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	unsigned long int tmp;

	tmp = n ^ m;
	for (i = 0; tmp != 0; tmp >>= 1)
	{
		if (tmp & 1)
			i++;
	}
	return (i);
}
