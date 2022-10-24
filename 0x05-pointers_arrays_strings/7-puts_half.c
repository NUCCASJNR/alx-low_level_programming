#include "main.h"

/**
 * puts_half - a function that prints
 * half of a string, followed by a new line.
 *  @str - An input string
 *  Return: Nothing
 */
void puts_half(char *str)
{
	int a, b, c;

	while (str[a] != '\0')
		a++;
	if (a % 2 == 0)
		c = a / 2;
	else
		c = (a + 1) / 2;
	for (b = c; b < a; b++)
		_putchar(str[b]);
	_putchar('\n');
}
