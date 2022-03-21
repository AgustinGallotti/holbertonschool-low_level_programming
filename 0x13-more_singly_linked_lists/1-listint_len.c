#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* listint_len - print cunter of elements
* @h: pointer to the list of nodes
* Return: Number of nodes
*/
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
