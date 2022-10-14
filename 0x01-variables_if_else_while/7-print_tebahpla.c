#include "stdio.h"
#include "stdlib.h"
#include "time.h"
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	putchar(i);
	putchar('\n');
	return (0);
}

