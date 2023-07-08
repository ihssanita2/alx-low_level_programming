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
if (argc != 2)
{

printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (0);
}
return (0);
}
