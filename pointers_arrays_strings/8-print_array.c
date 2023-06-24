#include "main.h"
#include <stdio.h>
#include <string.h>

void
print_array(int *a, int n)
{
	int cont = 0;

	while (cont < n)
	{
	printf("%d", a[cont]);

	if (cont < n - 1)
	{
		printf(", ");
	}

	}
	printf("\n");
}
