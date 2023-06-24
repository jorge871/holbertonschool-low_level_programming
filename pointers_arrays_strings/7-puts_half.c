#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts_half(char *str)
{
	int l = strlen(str);
	int i;
	int n = (l - 1) / 2;

	for (i = n + 1; i < l; i++)

	{
		putchar(str[i]);
	}

	putchar('\n');
}
