#include <stdio.h>

/**
 * main - a program that finds and prints the largest prime factor
 *of the number 612852475143'
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
