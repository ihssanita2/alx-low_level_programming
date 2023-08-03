#include "main.h"

/*ihssaneer*/
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b : argument
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int rest = 0;
	int i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		rest <<= 1;
		rest += b[i] - '0';
	}
	return (rest);
}
