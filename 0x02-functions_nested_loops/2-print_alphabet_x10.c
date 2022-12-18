#include "main.h"

/**
 * print_alphabet_x10 - function to print the alphabets from
 * a to z 10 times
 *
 * Return: noting
 */
void print_alphabet_x10(void)
{
	char rows;
	char letters;

	for (rows = 0; rows < 10; rows++)
	{
		for (letters = 'a'; letters <= 'z'; letters++)
		{
			_putchar(letters);
		}
		_putchar('\n');
	}
}
