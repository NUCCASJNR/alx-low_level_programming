#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j < 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
	_putchar('\n');
	}
}
