#include "lists.h"
/**
* delete_dnodeint_at_index - delte node
* @head: we head
* @index: index
* Return: Deleted
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *previous, *next_node, *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			(*head)->next->prev = NULL;
			*head = (*head)->next;
		}
		else
			*head = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		current = current->next;

		if (current == NULL)
		{
			return (-1);
		}
		i++;
	}
	if (current->next == NULL)
	{
		current->prev->next = NULL;
		free(current);
		return (1);
	}
	next_node = current->next;
	previous = current->prev;
	previous->next = next_node;
	next_node->prev = previous;
	free(current);
	return (1);
}
