#include "main.h"
#include <stdio.h>
#include <string.h>

void
print_array(int *a, int n)
{
	int cont = 0;

	while (n > cont)
	{
		printf("%d, ", a[cont]);
		cont++;
		if (cont == n - 1)
	{
		printf("%d", a[cont]);
		break;
	}

	}
	printf("\n");
}
