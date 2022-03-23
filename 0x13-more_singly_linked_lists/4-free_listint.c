#include "lists.h"
/**
* free_listint - a function that frees list
* @head: Header
*/
void free_listint(listint_t *head)
{
	listint_t *current, *nextnode;

	current = head;
	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}
}
