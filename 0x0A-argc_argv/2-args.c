#include <stdio.h>

/**
* main - prints all arguments it receives.
* @argc: The number of command-line arguments
* @argv: An array of strings representing the arguments
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i;

for (i = 0; i <= (argc - 1); i++)
{
if (i == 0)
{
printf("%s", argv[i]);
}
else
{
printf("%s\n", argv[i]);
}
}
return (0);
}
