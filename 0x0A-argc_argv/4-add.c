#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - a program to add numbers
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc >= 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);

}
