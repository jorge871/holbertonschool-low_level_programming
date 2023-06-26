#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int t = 0;
	int s = 0;

	while (dest[t])
		t++;
	while (src[s])
	{
		dest[t] = src[s];
		t++;
		s++;
	}
	return (dest);
}
