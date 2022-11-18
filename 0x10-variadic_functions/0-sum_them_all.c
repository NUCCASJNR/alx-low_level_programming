#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -  a function that returns the sum of all its parameters
 * @n: unsigned int
 * Return: sum, 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int a;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(args, n);
		for (a = 0; a < n; a++)
		{
			sum += va_arg(args, int);
		}
	va_end(args);

	return (sum);
}
