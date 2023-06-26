#include "main.h"
void
reverse_array(int *a, int n)
{
	int i = 0;
	int b = 0;

	n = n - 1;

	while (n > b)
	{
		b = a[n];
		a[n] = a[i];
		a[i] = b;
		n--;
		a++;
	}
}
