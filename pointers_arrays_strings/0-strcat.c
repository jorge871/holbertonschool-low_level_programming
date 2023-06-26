#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int j;

	for (j = 0; src[j]; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
