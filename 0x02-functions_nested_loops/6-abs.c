#include "main.h"

/**
 * _abs - entry point
 *
 * @r: function that computes the absolute value of an integer
 *
 * Return: r if positive, r * 1 otherwise
 */
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
