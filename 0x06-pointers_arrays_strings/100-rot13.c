#include "main.h"
/**
 * rot13 - Encodes a string into rot13
 * @a: String
 *
 * Return: String as a pointer
 */
char *rot13(char *a)
{
	int j;
	int i = 0;
	char initial[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char final[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*(a + i))
	{
		for (j = 0; j <= 52; j++)
		{
			if (*(a + i) == initial[j])
			{
				*(a + i) = final[j];
				break;
			}
		}
	i++;
	}
	return (a);
}
