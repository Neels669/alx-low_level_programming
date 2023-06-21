#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer.
 * @array: Pointer to an array
 * @size: no of elements int he array
 * @cmp: Pointer to the fnction
 *
 * Return: return index number of comp int
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
