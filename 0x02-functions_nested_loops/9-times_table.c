#include "main.h"
/**
 *  times_table - a function that prints the 9 times table, starting with 0.
 *  Return: Nothing
 */
void times_table(void)
{
	int row, column;

char product;
	for (row = 0; row < 9; row++)
	{
		for (column = 0; column < 9; column++)
		{
			product = row*column;
				_putchar(product);
			_putchar('\n');
		}
	}
}
