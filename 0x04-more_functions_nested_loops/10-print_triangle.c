#include "main.h"

/**
 * print_triangle - function to print a right angle triangle
 *
 * @size: the number of rows of the trigle
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	/* r = rows, h = hash (#), s = spaces */
	int r, h, s;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (r = 1; r <= size; r++)
		{
			for (s = size - r; s >= 1; s--)
			{
				_putchar(' ');
			}
			for (h = 1; h <= r; h++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
