#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function to add
 * @a: argument one
 * @b: argument two
 * Return: Always the value
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function to subtract
 * @a: first argument
 * @b: second argument
 * Return: Always the difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function to multiply
 * @a: first argument
 * @b: second argument
 * Return: Always the product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function to divide
 * @a: first argument
 * @b: second argument
 * Return: Always th result of division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - function to modulus
 * @a: first argument
 * @b: second argument
 * Return: Always the remainder
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
