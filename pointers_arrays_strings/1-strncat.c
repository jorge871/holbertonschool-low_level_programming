#include "main.h"
#include <stdio.h>
char
*_strncat(char *dest, char *src, int n)
{
	int k = 0;
	int p = 0;

	while (dest[k])
		k++;
	while (src[p] > n)
	{
	dest[k] = src[p];
	k++;

	if (src[p] == '\0')
	break;
	p++;
	}
	return (dest);
}
