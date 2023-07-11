#include <stdlib.h>
int _strlen_recursion(char *s);

/**
* str_concat - concatenates two strings.
* @s1: The first string.
* @s2: The second string.
* Return: pointer contanet the two strings, return NULL on failure.
*/
char *str_concat(char *s1, char *s2)
{
unsigned int i, j, size;
char *Array;

if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
size = _strlen_recursion(s1) + _strlen_recursion(s2) + 1;
Array = (char *)malloc(size);
if (Array == NULL)
{
return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
Array[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
Array[i] = s2[j];
i++;
}
if (Array[i] != '\0')
{
i++;
Array[i] = '\0';
}
return (Array);
}
/**
*_strlen_recursion - returns the length of a string.
*@s: the string to mesure.
*Return:  the length of a string.
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	return (0);
}
