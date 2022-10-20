#include "main.h"
/**
 *  _isdigit -  a function that checks for a digit
 *  @c: An input integer
 *  Return: 1 if c is uppercase, 0 if otherwise
 */
int _isdigit(int c)
{
	char a;
	int digit = 0;

	for (a = '0'; a <= '9'; a++)
	{
		if (a == c)
			digit = 1;
	}
	return (1);
}

