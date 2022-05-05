#include "lists.h"
/**
* insert_dnodeint_at_index - insert new node at specific node
* @h: my head
* @idx: index
* @n: number
* Return new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *current = *h;
	new = malloc(sizeof(dlistint_t));

	if (!h)
		return (NULL);
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (idx > 1)
	{
		current = current->next;
		idx--;
		if (current == NULL)
			return (NULL);
		if (current->next == NULL)
			return(add_dnodeint_end(h, n));
	}
	new->next = current->next;
	new->prev = current;
	current->next->prev = new;
	current->next = new;
	return (new);
}
