#include "lists.h"
/**
* delete_nodeint_at_index - a function that deletes the node at index index of
* a listint_t linked list
* @head: Header of the nodes
* @index: is the index of the node that should be deleted. Index starts at 0
* Return: 1 if it succeeded, -1 if it failed
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *nextn;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (i < (index - 1))
	{
		current = current->next;

		if (current == NULL)
			return (-1);
		i++;
	}
	nextn = current->next;
	current->next = nextn->next;
	free(nextn);
	return (1);
}
