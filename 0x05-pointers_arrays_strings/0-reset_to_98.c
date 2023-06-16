#include "main.h"

/**
 * reset_to_98 - function that updates the value it points to 98
 * @n: integer
 *
 * Return - void
 *
 */

void reset_to_98(int *n)
{
	int value;
	*n = &value;
	n = 98;
	return (0);
}
