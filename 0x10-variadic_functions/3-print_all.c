#include "variadic_functions.h"

/**
*print_all - prints anything, followed by a new line.
*@format: the list of types of arguments passed to the function.
*Return: void.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separateur = "", *temp;

	va_start(args, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separateur, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separateur, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separateur, va_arg(args, double));
				break;
			case 's':
				temp = va_arg(args, char *);
				if (!temp)
				temp = "(nil)";
				printf("%s%s", separateur, temp);
				break;
			default:
				i++;
				continue;
			}
			separateur = ", ";
			i++;
		}
	}
		printf("\n");
		va_end(args);
}
