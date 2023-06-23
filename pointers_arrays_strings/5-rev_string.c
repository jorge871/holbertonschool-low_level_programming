#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int longitud = strlen(s);
	int l; j;

	for (l = 0; j = strlen(s) - 1; l < j; l++; j++)
	{
	char temp = s[l];

		s[l] = s[j];
		s[l] = temp;
	}
}
