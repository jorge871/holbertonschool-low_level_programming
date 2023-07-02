#include "main.h"
char
*_strcpy(char *dest, char *src)
{
	int q;

	for (q = 0; src[q]; q++)
	{
		dest[q] = src[q];
	}
	dest[q] = '\0';
	return (dest);
}
