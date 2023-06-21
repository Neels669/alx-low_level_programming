#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Pointer to an array
 * @size: no of elements int he array
 * @cmp: Pointer to the fnction
 *
 * Return: return index number of comp int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ind;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (ind = 0; ind < size; ind++)
	{
		if (cmp(array[ind]))
			return (ind);
	}
	return (-1);
}
