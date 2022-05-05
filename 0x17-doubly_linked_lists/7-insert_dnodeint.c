#include "lists.h"
/**
* insert_dnode_at_index - insert new node at specific node
* @h: my head
* @idx: index
* @n: number
* Return new node
*/
dlistint_t *insert_dnode_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = current;
		*h = new;
		return (*h);
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
