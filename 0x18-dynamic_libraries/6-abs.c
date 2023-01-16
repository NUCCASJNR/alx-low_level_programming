#include "main.h"
/**
 *  _abs -  a function that computes the absolute value of an integer.
 *  @n: integer to affect
 *  Return: The value of integer
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	else
		return (n);
}
