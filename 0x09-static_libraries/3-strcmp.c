#include "main.h"

/**
 * _strcmp - Function that compares two strings
 * @s1: First pointer to a string
 * @s2: Second pointer to another string
 *
 * Return: Success (0)
 */
int _strcmp(char *s1, char *s2)
{
	int a;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
			return (s1[a] - s2[a]);
	}
	return (0);
}
