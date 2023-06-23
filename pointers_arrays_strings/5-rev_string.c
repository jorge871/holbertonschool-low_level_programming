#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int longitud = strlen(s);
	int j;
	
	for (j = 0; strlen(s) != '\0'; j++)
	{
	char temporal = s[j];

		s[j] = s[longitud - j - 1];
		s[longitud - j - 1] = temporal;
	}
}
