#include "lists.h"
/**
* add_nodeint_end - function that add a new node to the list_t
* @head: head of the list_t
* @n: cn
* Return: integral
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *str1, *len;

	str1 = malloc(sizeof(listint_t));

	if (!str1)
		return (NULL);

	str1->n = n;
	str1->next = NULL;

	if (*head == NULL)
	{
		*head = str1;
	}
	else
	{
		len = *head;

		while (len->next)
			len = len->next;

		len->next = str1;

	}
	return (str1);
}
