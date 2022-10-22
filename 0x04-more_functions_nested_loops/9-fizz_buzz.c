#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints the numbers from 1 to 100,
 * followed by a new line.
 * But for multiples of three print Fizz instead of the number,
 * and for the multiples of five print Buzz
 * and for the multiples of five print Buzz
 * Return: Always 0
 */
int main(void)
{
	int a = 1;

	for (; a < 100; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("Buzz\n");
	return (0);
}
