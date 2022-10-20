#include "main.h"
/**
 * more_numbers -  a function that prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 * Return: Always 0
 */
void more_numbers(void)
{
	int a;
	int b = 0;

	for (; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
		}
		_putchar('\n');
	}
}
