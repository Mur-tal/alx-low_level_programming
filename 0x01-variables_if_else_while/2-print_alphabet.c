#include <stdio.h>

/**
 * main - Entry point. To print the alphabet in
 * lower case using putchar at most twice only.
 *
 * Return: 0 success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
