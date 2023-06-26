#include "main.h"
char
*_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x]; x++)
	{
		dest[x] = src[x];
	}
	dest = '\0';
	return (dest);
}
