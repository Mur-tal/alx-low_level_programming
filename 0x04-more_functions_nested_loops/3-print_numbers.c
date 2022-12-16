#include "main.h"

/**
 * print_numbers - function to print numbers from 0 to 9 follow by a new line
 * character value of the integer
 *
 * Return: number digits
 */
void print_numbers(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
		_putchar(ch);
	_putchar('\n');
}
