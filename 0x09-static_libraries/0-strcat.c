#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @src: An input string
 * @dest: An input string
 * Return: A pointer to the resulting the string
 */

char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp);
}
