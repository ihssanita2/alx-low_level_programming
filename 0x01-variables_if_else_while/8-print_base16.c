#include <stdio.h>

/**
 * main - Entry point
 * Return: Always return (0) Success
 */
int main(void)
{
	char ch;
	int num;

	for (num = '1'; num <= '9'; num++)
		putchar(num);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
