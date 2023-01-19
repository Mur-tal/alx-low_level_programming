#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: the number of int array
 * @size: the array size
 * @cmp: the compare pointer
 *
 * Return: the integer index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}
