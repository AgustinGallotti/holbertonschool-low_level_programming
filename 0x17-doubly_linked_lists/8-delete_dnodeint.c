#include "lists.h"
/**
* delete_dnodeint_at_index - delte node
* @head: we head
* @index: index
* Return: Deleted
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *next_node;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		current->next = NULL;
		return (1);
	}

	while (i < (index - 1))
	{
		current = current->next;

		if (current == NULL)
			return (-1);
		i++;
	}
	next_node = current->next;
	current->next = next_node->next;
	free(next_node);
	return (1);
}
