#include "main.h"
char
*_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}

	while (x < n)

	dest[x++] = '\0';
	return (dest);
}
