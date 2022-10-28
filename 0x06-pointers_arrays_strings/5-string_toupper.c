#include "main.h"
/**
 * string_toupper - a function that changes all the lower letter
 * of a string to uppercase
 * @n:The string
 * Return: capitalized letter
 */

char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] -= 32;
	}
	return (n);
}
