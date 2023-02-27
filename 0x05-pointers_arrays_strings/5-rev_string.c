#include "main.h"

/**
 * rev_string - Function that reverses a string
 * @s: Data type character that checks string to be rev
 *
 * Return: Void
 *
 */
void rev_string(char *s)
{
	int one, two, three;
	char *a, b;

	a = s;

	while (s[two] != '\0')
	{
		two++;
	}

	for (three = 1; three < two; three++)
	{
		a++;
	}

	for (one = 0; one < (two / 2); one++)
	{
		b = s[one];
		s[one] = *a;
		*a = b;
		a--;
	}
}
