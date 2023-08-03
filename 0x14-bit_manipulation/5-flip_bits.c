#include "main.h"

/**
 * flip_bits - counts the number of different bits in n and m
 * @n: first number
 * @m: second number
 *
 * Return: number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int counter;

	diff = n ^ m;
	counter = 0;

	while (diff)
	{
		counter++;
		diff &= (diff - 1);
	}

	return (counter);
}
