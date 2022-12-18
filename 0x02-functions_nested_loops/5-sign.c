#include "main.h"

/**
 * print_sign - function to print the signs of a number
 * @n: the integer to be checked
 *
 * Return: 1 (if positive), 0 (if zero) nad -1 (if negative)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
