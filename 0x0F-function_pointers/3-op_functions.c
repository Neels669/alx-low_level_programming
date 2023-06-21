#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Function that adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Function that substracts two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: substraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Function that multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Function that divides two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: Division
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Function to perform modulus
 * @a: First integer
 * @b: Second integer
 *
 * Return: Modulus
 */
int op_mod(int a, int b)
{
	return (a % b);
}
