#include "3-calc.h"

/**
 * main - Entry point for the calculator program.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 * Return: 0 on success, other values on failure.
 */
int main(int argc, char *argv[])
{
int num1, num2, result;
int (*f_ptr)(int, int);

if (argc != 4)
{
printf("Error\n");
return (98);
}
num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
f_ptr = get_op_func(argv[2]);
if (f_ptr == NULL)
{
printf("Error\n");
return (99);
}
if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
{
printf("Error\n");
return (100);
}
result = f_ptr(num1, num2);
printf("%d\n", result);
return (0);
}

