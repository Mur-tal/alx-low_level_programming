#include <stdio.h>

/**
 * main - Entry point Print all the numbers of hexadecimal in lower case
 * follow by a new line
 *
 * Return: 0 success
 */
int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
		putchar(n);
	for (ch = 'a'; ch <= 'f'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
