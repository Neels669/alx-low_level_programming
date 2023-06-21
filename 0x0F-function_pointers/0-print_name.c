#include "function_pointers.h"

/**
 * print_name - Function that prints a name
 *
 * @name - Pointer to the name
 * @f - Pointer to the printing function
 *
 * Return - Name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		f(name);
}
