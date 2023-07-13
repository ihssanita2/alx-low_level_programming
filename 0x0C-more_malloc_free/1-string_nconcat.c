#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1 : the first string.
 * @s2 : the second string.
 * @n : the first n strings to concatenate.
 * Return: return pointer or Null if it fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lens1 = 0, lens2 = 0;
	char *newstr;

	if (!s1)
	s1 = "";
	if (!s2)
	s2 = "";
	while (s1[lens1])
	lens1++;
	while (s2[lens2])
	lens2++;
	if (n > lens2)
	n = lens2;
	newstr = malloc(sizeof(char) * (lens1 + n + 1));
	if (!newstr)
	return (NULL);
	strcpy(newstr, s1);
	strncat(newstr, s2, n);
	return (newstr);
}
