#include "main.h"
/**
 *  print_last_digit - a function that prints the last digit of a number.
 *  @a: An input integer
 *  Return: The last digit of n
 */
int print_last_digit(int a)
{
	int n;

	if (a < 0)
		n = -1 * (a % 10);
	else
		n = a % 10;
	_putchar((n % 10) + '0');
	return (n % 10);
}


