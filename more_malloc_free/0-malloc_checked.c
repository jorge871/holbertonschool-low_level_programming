#include "main.h"
#include <limits.h>
#include <stdlib.h>
#include <stddef.h>
void
*malloc_checked(unsigned int b)
{
	void *p;

	if (b < 1)
		exit(98);
	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);

}
