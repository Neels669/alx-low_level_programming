#include "main.h"

/**
 * swap_int - Function that swaps the values of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int lets_swap;

	lets_swap = *a;
	*a = *b;
	*b = lets_swap;
}
