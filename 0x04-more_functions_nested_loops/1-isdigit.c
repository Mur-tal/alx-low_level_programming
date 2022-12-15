#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Check if int value are gidits
 * @c: the int value to evaluate
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
