#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @b: An input integer to be swapped
 * @a: An input integer to be swapped
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
