#include <stdio.h>
#include "main.h"


/**
 * print_array -  a function that prints n elements
 * of an array of integers, followed by a new line.
 * @a: An input Array
 * @n: An input integer
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
