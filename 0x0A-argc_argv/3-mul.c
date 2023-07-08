#include <stdio.h>
#include <stdlib.h>

/**
* main - print the result of the multiplication, followed by a new line.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int N1, N2;

if (argc < 3)
{
printf("Error\n");
return (1);
}
else
{
N1 = atoi(argv[1]);
N2 = atoi(argv[2]);
printf("%d\n", N1 *N2);
}
return (0);
}
