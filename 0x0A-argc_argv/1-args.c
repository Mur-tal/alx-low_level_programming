#include <stdio.h>
#include "main.h"

/**
 * main - a program to count number of arguments
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);

}
