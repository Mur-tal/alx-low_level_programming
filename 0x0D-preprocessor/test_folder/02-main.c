#include <stdio.h>

/**
 * main - entry point. program to print the name of file it was
 * compiled from
 *
 * Return: nothing
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
