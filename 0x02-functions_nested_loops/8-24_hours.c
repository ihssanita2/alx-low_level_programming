#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59.
 * Return: void.
 */
void jack_bauer(void)
{
	int H, M;

	for (H = 0; H < 24; H++)
	{
		for (M = 0; M < 60; M++)
		{
			_putchar('0' + (H / 10));
			_putchar('0' + (H % 10));
			_putchar(':');
			_putchar('0' + (M / 10));
			_putchar('0' + (M % 10));
			_putchar('\n');
		}
	}
}
