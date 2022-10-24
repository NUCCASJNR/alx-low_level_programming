#include "main.h"

/**
 * puts2 - a function that prints every other
 * character of a string, starting with the
 *  first character, followed by a new line.
 *  @str: An input character
 *  Return: Nothing
 */

void puts2(char *str)
{
	int a = 0, b = 0;

	while (str[a++])
		b++;
	for (a = 0; a < b; a += 2)
		_putchar(str[a]);
	_putchar('\n');
}
