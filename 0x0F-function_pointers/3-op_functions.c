#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - Addition function
 * @a: First int to add
 * @b: Second int to add
 *
 * Return: Sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction function
 * @a: First int to sub
 * @b: Second itn to sub
 *
 * Return: Difference of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication function
 * @a: First int to multiply
 * @b: Second int to multiply
 *
 * Return: Product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division function
 * @a: Int to divide
 * @b: Int to divide by
 *
 * Return: Quotient of a & b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Modulo function
 * @a: Int to mod
 * @b: Int to mod by
 *
 * Return: Remainder of a & b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
