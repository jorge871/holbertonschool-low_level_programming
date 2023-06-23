#include "main.h"
#include <stdio.h>
#include <string.h>

void
puts2(char *str)
{
	int k = 0;

	if (str == NULL)
	return;

	while (str[k] != '\0')
{
	putchar(str[k]);
	k += 2;
}

	putchar('\n');
}
