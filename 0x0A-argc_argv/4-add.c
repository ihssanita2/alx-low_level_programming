#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int N, i;

if (argc < 1)
{
printf("0\n");
}
else
{
for (i = 1; i <= (argc - 1); i++)
{
if (*argv[i] == '\0' || (*argv[i] >= 'a' && *argv[i] >= 'z'))
{
printf("Error\n");
return (1);
}
else
{
N += atoi(argv[i]);
}
}
printf("%d\n", N);
}
return (0);
}
