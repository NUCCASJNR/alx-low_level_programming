#include "main.h"

/**
 * _print_rev_recursion - A function that print a string in reverse
 * @s: string to reverse
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
