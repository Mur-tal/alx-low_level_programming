#include "main.h"

/**
 * _puts - unction that prints a string, followed by a new line, to stdout
 * @str: pointer to string
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
