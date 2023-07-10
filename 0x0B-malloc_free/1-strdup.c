#include <stdlib.h>
int _strlen_recursion(char *s);

/**
* _strdup - returns a pointer to a newly allocated space in memory,
* which contains a copy of the string given as a parameter.
* @str: The size of the array.
* Return: returns a pointer to the duplicated string
* and NULL if insufficient memory was available.
*/
char *_strdup(char *str)
{
unsigned int i, size;
char *Array;

if (str == NULL)
{
return (NULL);
}
size = 1 + _strlen_recursion(str);
Array = (char *)malloc(size);
if (Array == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
Array[i] = str[i];
}
Array[i] = '\0';
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
