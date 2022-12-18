#include "main.h"

/**
 * print_alphabet - function to print alphabets in lower case
 * follow by a new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}

