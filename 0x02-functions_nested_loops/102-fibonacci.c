#include <stdio.h>

/**
 * main - entry point
 * desription - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * the numbers must be separated by comma, followed by a space
 *
 * Return: void
 */
int main(void)
{
	int i = 2;
	long int j = 1;
	long int k = j + 1;
	long int l = k + j;

	printf("%ld, %ld, ", j, k);
	while (i < 50)
	{
		printf("%ld", l);
		j = k;
		k = l;
		l = j + k;
		i++;
		if (i < 50)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
