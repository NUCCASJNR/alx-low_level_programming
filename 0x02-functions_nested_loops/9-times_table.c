#include "main.h"
/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *  Return: Nothing
 */
void times_table(void)
{
	int row, column, product;

	for (row = 0; row <= 9; row++)
	{
		_putchar(0);
		for (column = 1; column <= 9; column++)
		{
			_putchar(',');
			_putchar(' ');
			product = row * column;
			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');
			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}

