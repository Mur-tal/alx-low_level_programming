#include "function_pointers.h"

/**
 * print_name - Print the given name
 * @name: name to be printed
 * @f: poiter to void function, taking a char pointer as an argument
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
