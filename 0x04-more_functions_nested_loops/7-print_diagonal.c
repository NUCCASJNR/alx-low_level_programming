#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, int j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('\');
		}
	}
	_putchar('\n');
}

