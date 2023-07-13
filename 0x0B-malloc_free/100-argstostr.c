#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *argstostr - concatenates all the arguments of your program.
 * @ac: the number of argumrnts.
 * @av: the arguments.
 * Returns NULL if ac == 0 or av == NULL
 * Return: a pointer to a new string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
int i, j, count, size, index;
char *str;

count = 0;
if (ac == 0 || *av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
j = 0;
while (av[i][j])
j++;
count += j;
}
size = count + ac + 1;
str = (char *)malloc(size *sizeof(char));
index = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
{
str[index] = av[i][j];
index++;
}
str[index] = '\n';
index++;
}
str[index] = '\0';
return (str);
}
