#include "main.h"

/**
 * print_line - function to print a straight line n number of times
 * end with a new line
 * if n = 0 or less than 0, it should print only '\n'
 *
 * @n: number of times to print line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
