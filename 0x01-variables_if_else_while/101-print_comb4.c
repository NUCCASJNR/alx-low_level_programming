#include <stdio.h>
/**
 * main - entry point
 */
int main(void)
{
int a, b, c;

for (a = 0; a < 8; a++)
{
	for (b = a + 1; b < 9; b++)
	{
		for (c = b + 1; c < 10; c++)
		{
		       putchar((a % 10) + '0');
		putchar((b % 10) + '0');
		putchar((c % 10) + '0');
		if (a == 7 && b == 8 && c == 9)
			continue;
		putchar(',');
		putchar(' ');
		}
	}
}
return (0);
}
