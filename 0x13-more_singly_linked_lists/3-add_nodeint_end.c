#include "lists.h"
/**
* add_nodeint_end - function that add a new node to the list_t
* @head: head of the list_t
* @n: cn
* Return: integral
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *str1, *len;

	if (!n)
		return (NULL);

	r = malloc(sizeof(list_t));

	if (!r)
		return (NULL);

	r->n = n;
	r->next = *head;
	*head = r;

	if (*head == NULL)
	{
		*head = r;
	}
	else
	{
		len = *head;

		while (len->next)
			len = len->next;

	}
	return (r);
}
