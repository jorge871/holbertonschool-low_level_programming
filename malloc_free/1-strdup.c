#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char
*_strdup(char *str)
{
	int cont;
	char *t;
	int contD;


	if (str == NULL)

		return (NULL);
	while (str[cont])
		cont++;
	t = malloc(sizeof(char) * cont + 1);

	if (t == NULL)

		return (NULL);

	for (; contD < cont; contD++)

		t[contD] = str[contD];
	t[cont] = '\0';

	return (t);
}
