#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* print_listint - all elements of a listint
* @listint_t: listas
* @h: puntero
* Return: integral
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->n == '\0')
			printf("[0] (nil)\n");
			else
				printf("%d\n", h->n);

			h = h->next;
			i++;
	}
	return(i);
}
