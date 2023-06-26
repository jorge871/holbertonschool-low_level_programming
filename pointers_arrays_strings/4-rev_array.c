#include "main.h"
void
reverse_array(int *a, int n)
{
	int p = 0, temp;

	n--;
	while (p < n)
	{
		temp = a[p];
		a[p] = a[n];
		a[n] = temp;
		n--;
		p++;
	}
}
