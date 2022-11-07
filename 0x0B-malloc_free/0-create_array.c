#include "main.h"
#include <stdlib.h>

/**
 * create_array -  a function that creates an array of chars,
 * and initializes it with a specific char
 * @size: unassigned integer
 * @c: character
 * Return: NULL if size = 0 or a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = (char *)malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
