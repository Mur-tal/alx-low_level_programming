#include "main.h"

/**
 * print_last_digit - entry point
 *
 * @r: last digit integer
 *
 * Return: l, last digit integer
 */
int print_last_digit(int r)
{
	int l;

	if (r < 0)
	{
		l = -1 * (r % 10);
		_putchar(l + 48);
		return (l);
	}
	else
	{
		l = r % 10;
		_putchar(l + 48);
		return (l);
	}
}
