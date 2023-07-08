#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of
* coins to make change for an amount of money.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int N, i;

if ((argc - 1) != 2)
{
printf("Error\n");
return (1);
}
N = atoi(argv[i]);
if (N < 0)
{
printf("0\n");
}
return (0);
}
