#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers
 * @a: Pointer to an integer
 * @n: number of elements of the array
 *
 * Return: void
 *
 */
void reverse_array(int *a, int n)
{
	int i = 0, b, tmp;

	for (b = n - 1; b > i; b--)
	{
		tmp = a[b];
		a[b] = a[i];
		a[i] = tmp;
		i++;
	}
}
