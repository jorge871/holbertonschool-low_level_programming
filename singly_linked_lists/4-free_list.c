#include "lists.h"

void
free_list(list_t *head)
{
	list_t *fr;

	fr = head;
	while (fr != NULL)
	{
		free(fr);
		fr = fr->next;
	}
}
