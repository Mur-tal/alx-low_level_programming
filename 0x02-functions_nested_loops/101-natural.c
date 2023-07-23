#include <stdio.h>

/**
 * mail - entry point
 *
 * Description - computes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded). E.g. If we list all the natural
 * numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
 * The sum of these multiples is 23
 *
 * Return: Always success
 */
int main(void)
{
	int i;
	int j;

	for (i = 1; i < 1024; i++)
	{
		if((i % 3) == 0 || (i % 5) == 0)
		{
			j += i;
		}
	}
	printf("%d\n", j);
	return (0);
}
