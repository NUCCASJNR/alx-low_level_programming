#include "main.h"
/**
 * _strstr - Function that locates a substring.
 * @haystack: Pointer to the initial segment
 * @needle: Pointer to the acceptance segment
 *
 * Return: The pointer at matched position or NULL if not
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	while (*(haystack + i))
	{
		if (*(haystack + i) == *(needle + j))
		{
			j++;
			if (*(needle + j) == '\0')
				return ((haystack + i) - (j - 1));
		}
		else
			j = 0;
	i++;
	}

	if (*needle == '\0')
		return (haystack);
	return (0);
}
