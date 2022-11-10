#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - A function that allocates memory using malloc
 * @b: An unused integer
 * Return: A pointer to allocated memory or NULL if it fails
*/
void *malloc_checked(unsigned int b)
{
	void *s;

s = malloc(b);
if (s == NULL)
exit(98);
return (s);
}
