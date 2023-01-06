#include <stdio.h>
#include "main.h"

/**
 * main - a program to print it's name
 * @argv: argument vector
 * @argc: argument count
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc)
		printf("%s\n", argv[0]);
	return (0);
}
