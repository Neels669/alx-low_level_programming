#include "main.h"

/**
 * string_toupper - function that changes all
 * lowercase letters of a string to uppercase
 * @strs: string poiter
 *
 * Return: String
 */
char *string_toupper(char *strs)
{
	int a;

	for (a = 0; strs[a] != '\0'; a++)
	{
		if (strs[a] >= 'a' && strs[a] <= 'z')
		{
			strs[a] = strs[a] - 32;
		}
	}
	return (strs);
}
