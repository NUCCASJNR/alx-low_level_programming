#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

printf("Infinite loop incoming :(\n");

<<<<<<< HEAD
	i = 0;
=======
i = 0;
>>>>>>> 560cc9acec6b9adbb117f412c171551323d2e5a6

while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
