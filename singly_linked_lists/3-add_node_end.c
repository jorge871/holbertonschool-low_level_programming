#include "lists.h"

list_t
*add_node_end(list_t **head, const char *str)
{
	list_t *NewEnd;
	list_t *LastN = *head;
	unsigned int len = 0;

	while (str[len])
		len++;
	NewEnd = malloc(sizeof(list_t));
	if (!NewEnd)
		return (NULL);

	NewEnd->str = strdup(str);
	NewEnd->len = len;
	NewEnd->next = NULL;

	if (*head == NULL)
	{
		*head = NewEnd;
		return (NewEnd);
	}
	while (LastN->next)
		LastN = LastN->next;

	LastN->next = NewEnd;

	return (NewEnd);
}
