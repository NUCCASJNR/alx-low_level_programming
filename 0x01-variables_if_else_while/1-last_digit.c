#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a = 7;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % a > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, n % a);
	else if (n % a == 0)
		printf("Last digit of %d is %d and is 0\n", n, n % a);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % a );
	return (0);
}
