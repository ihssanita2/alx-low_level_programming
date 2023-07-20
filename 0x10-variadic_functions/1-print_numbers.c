#include "variadic_functions.h"

/**
*print_numbers - prints numbers, followed by a new line.
*@n: the number of arguments.
*@separator: the separator to use.
*Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i, j;

va_start(args, n);
for (i = 0; i < n; ++i)
{
	printf("%d", va_arg(args, int));
	j = 0;
	if (separator != NULL && i < (n - 1))
	{
		while (separator[j])
		{
			printf("%c", separator[j]);
			j++;
		}
	}
}
printf("\n");
va_end(args);
}
