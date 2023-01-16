#include "main.h"

/**
 * _memcpy - A function that copies memory area
 * @src: memory to be copied
 * @dest: copied memory destination
 * @n: No of bytes to be copied
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
