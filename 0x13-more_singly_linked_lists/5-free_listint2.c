#include "lists.h"
/**
* free_listint2 - a function that frees a listint_t list
* @head: Header
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *nextn;

	if (head == NULL)
		return;

	current = *head;
	while (current != NULL && head != NULL)
	{
		nextn = current;
		current = current->next;
		free(nextn);
	}
	*head = NULL;
}
