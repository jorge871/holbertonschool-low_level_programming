#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always (0)
 */

int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	{
		putchar(d + '0');
	}
	putchar('\n');

	return (0);
}
