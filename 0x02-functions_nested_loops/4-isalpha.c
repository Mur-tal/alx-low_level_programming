#include "main.h"

/**
 * _isalpha - function to chech if charcter is alphabet either
 * lowercase or uppercase
 * @c: character to be checked
 *
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
