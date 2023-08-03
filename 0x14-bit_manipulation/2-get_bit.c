#include "main.h"

/**
 * get_bit - gives the bit at a certain index
 * @n: the unsigned number
 * @index: index of the bit starting from 0 on the right side of binary number
 *
 * Return: the bit, or -1 if error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 64)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
