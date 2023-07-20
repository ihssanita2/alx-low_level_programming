#include "variadic_functions.h"

/**
*sum_them_all - prints a string in reverse.
*@n: the number of arguments.
*Return: the sum of all the constantes.
*/
int sum_them_all(const unsigned int n, ...)
{
va_list args;
int sum = 0;
unsigned i;

va_start(args, n);
for (i = 0; i < n; ++i)
sum += va_arg(args, int);

va_end(args);
return (sum);
}
