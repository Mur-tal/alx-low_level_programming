#include "main.h"
#include <ctype.h>

/**
 * _isupper- Check for uppercase letters
 * @c: integer value of the character to be evaluated
 *
 * Return: 1 if uppercase, 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
