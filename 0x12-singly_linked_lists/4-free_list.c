#include "lists.h"
/**
* free_list - function that free all the nodes of the list_t
* @head: header of all the nodes
*/
void free_list(list_t *head)
{
	if (!head)
	{
		return;
	}
	free(head);
}
