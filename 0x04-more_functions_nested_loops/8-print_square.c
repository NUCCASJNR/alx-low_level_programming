#include "main.h"

/**
 * print_square - a function that prints a square, followed by a new line.
 * @size:  is the size of the square
 * @#: The character to print the square
 * Return: Nothing
 */

void print_square(int size)
{
	int a, j;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (j = 0; j < size; j++)
			_putchar(35);
			_putchar('\n');
		}
		}
	else
		_putchar('\n');
}
