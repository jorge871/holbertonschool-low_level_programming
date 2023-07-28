#include "lists.h"

size_t
list_len(const list_t *h)
{
	size_t w = 0;

	while (h != NULL)
	{
		h = h->next;
		w++;
	}
	return (w);
}
