#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char low;
	
	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != 'e' && low != 'q')
			continue;
				putchar(low);
	}

	putchar('\n');
	return (0);
}
