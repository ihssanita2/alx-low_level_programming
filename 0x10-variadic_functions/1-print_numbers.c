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
unsigned int i;

va_start(args, n);
for (i = 0; i < n - 1; ++i)
{
printf("%d", va_arg(args, int));
if (separator != NULL)
printf("%c", *separator);
}
printf("%d\n", va_arg(args, int));
va_end(args);
}
