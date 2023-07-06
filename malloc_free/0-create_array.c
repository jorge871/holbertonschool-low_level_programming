#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char
*create_array(unsigned int size, char c)
{
	unsigned int s;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		array[s] = c;
	}
	return (array);
}
