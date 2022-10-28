#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @a: An input integer
 * @n: An input integer
 * @n: no of elements in the array
 */

void reverse_array(int *a, int n)
{
	int b, rev;

	for (b = 0; b < n; b++)
	{
		n--;
		rev = a[b];
		a[b] = a[n];
		a[n] = rev;
	}
}


