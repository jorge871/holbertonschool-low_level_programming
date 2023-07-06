#include "main.h"
#include <stdlib.h>

char
*str_concat(char *s1, char *s2)
{
	int cont = 0;
	int conts2 = 0;
	char *e;
	char *j;

	if (s1 == NULL && s2 == NULL)
	{
		j = malloc(sizeof(char) * 1);
		return (j);
	}
	if (s1 != NULL)
	{
		while (s1[cont])
			cont++;
	}
	if (s2 != NULL)
	{
		while (s2[conts2])
			conts2++;
	}
	e = malloc(sizeof(char) * (cont + conts2) + 1);
	cont = 0;
	conts2 = 0;
	if (e == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		while (s1[cont])
		{
			e[cont] = s1[cont];
			cont++;
		}
	}
	if (s2 != NULL)
	{
		while (s2[conts2])
		{
			e[cont] = s2[conts2];
			conts2++;
			cont++;
		}
	}
	return (e);


}
