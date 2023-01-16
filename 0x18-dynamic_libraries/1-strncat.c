#include "main.h"

/**
 * _strncat - A function that concatenates two strings
 * @dest: string to be copied to
 * @src: string to copy
 * @n: No of bytes to copy
 * Return: The destination string (dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

