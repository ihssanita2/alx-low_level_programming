#include "main.h"
int _strlen(char *s);
int compare(char *sorg, char *srcp);
/**
*is_palindrome - returns 1 if a string is a palindrome and 0 if not.
*@s: the string to check.
*Return:  returns 1 if a string is a palindrome and 0 if not.
*/
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
	return (1);
	}
	_strlen(s);
	return (compare(s, s + (_strlen(s) - 1)));
}
/**
*_strlen - returns the length of a string.
*@s: the string to mesure.
*Return:  the length of a string.
*/
int _strlen(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen(s + 1));
	}
	else
	return (0);
}
/**
*compare - compare tow strings.
*@sorg: the originale string.
*@srcp: reversed pointer.
*Return:  1 success 0 othewise.
*/
int compare(char *sorg, char *srcp)
{
	if (*sorg == *srcp && *sorg)
	{
		sorg++;
		srcp--;
		return (compare(sorg, srcp));
	}
	if (*sorg != *srcp)
	{
		return (0);
	}
	return (1);
}
