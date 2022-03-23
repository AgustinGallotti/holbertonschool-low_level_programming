#include "lists.h"
/**
* add_nodeint - add node int
* @head: pointer to pointer
* @n: var
* Return: counter i
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *r;

	r = malloc(sizeof(listint_t));

	if (!r)
		return (NULL);

	r->n = n;
	r->next = *head;
	*head = r;

	return (r);
}
