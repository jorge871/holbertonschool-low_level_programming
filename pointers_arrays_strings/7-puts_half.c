#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts_half(char *str)
{
	int l = strlen(str);

	int n = (l - 1) / 2;
{
	for (l = 0; l < n; l++)
	putchar(str[l]);
}
	putchar('\n');
}
