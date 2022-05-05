#include "lists.h"
/**
* pop_listint - Write a function that deletes the head node of a listint_t
* linked list, and returns the head node’s
* @head: Header
* Return: data n
*/
int pop_listint(listint_t **head)
{
	listint_t *delete;
	int data;

	if (!*head)
		return (0);

	delete = *head;
	data = delete->n;
	*head = delete->next;
	free(delete);

	return (data);
}
