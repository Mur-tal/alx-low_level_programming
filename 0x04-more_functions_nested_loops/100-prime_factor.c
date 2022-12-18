#include <stdio.h>
#include <math.h>

/**
 * prime_factor - function to get the largest prime number of
 * a given long integer n
 * @n: interger given
 *
 * Return: nothing
 */
void prime_factor(long int n)
{
	int c = 2;

	while (n > 1)
	{
		if (n % c == 0)
		{
			/* printf("%d ", c); */
			n = n / c;
		}
		else
			c++;
	}
	printf("%d\n", c);
}

/**
 * main - entry point
 *
 * Return: 0 always success
 */
int main(void)
{
	prime_factor(612852475143);
	return (0);
}
