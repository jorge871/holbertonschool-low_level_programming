#include "main.h"
#include <stdio.h>
#include <string.h>

void
rev_string(char *s)
{
	int j , l, temp;
	
	l = strlen(s);

	for (j = 0; j < l / 2; j++)
	{
	temp = s[j];
	s[j] = s[l - j - 1];
	s[l - j - 1] = temp;
	}
}
