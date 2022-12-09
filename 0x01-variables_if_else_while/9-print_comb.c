#include <stdio.h>

/**
 * main- Entry point. program to print intergers 0 to 9 with cormers and a
 * space between them using only putchar max 4 times. No char variable.
 *
 * Return: 0 success
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
