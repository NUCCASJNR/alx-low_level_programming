#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte.
 * @s: An input character
 * @b: An input character
 * @n: An input integer
 * Return: A pointer to the memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}



