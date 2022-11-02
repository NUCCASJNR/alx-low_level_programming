#include "main.h"

/**
 * square_root - determines square root
 * @a: input integer
 * @b: input integer
 * Return:input integer
 */

int square_root(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	if (a * a == b)
	{
		return (b);

	}
	return (square_root(a, b + 1));
}

/**
 *  _sqrt_recursion - a function that returns
 *  the natural square root of a number.
 *  @n: number to find the square root
 *  Return: -1 If n does not have a natura
 * @n: number whose square root is been found
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (square_root(n, 1));
}

