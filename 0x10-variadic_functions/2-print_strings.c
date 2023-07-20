#include "variadic_functions.h"

/**
*print_strings - prints strings, followed by a new line.
*@n: the number of arguments.
*@separator: the separator to use.
*Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	char *temp;

	va_start(args, n);
	while (i < n)
	{
		temp = va_arg(args, char*);
		if (temp == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", temp);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(args);
}
