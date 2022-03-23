#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - all elements of a listint
* @h: puntero
* Return: integral
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
