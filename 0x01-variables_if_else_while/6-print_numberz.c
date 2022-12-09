#include <stdio.h>

/**
 * main - Entry point. Print out the numeral 0 to 10 using
 * putchar and ASCII table.
 *
 * Return: 0 Success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
