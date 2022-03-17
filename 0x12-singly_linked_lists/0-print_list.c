#include "lists.h"
/*
* print_list - print the list
* @list_t: list of nodes
* @h: pointer to the list of nodes
* Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	unsigned int cnt = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		cnt++;
	}
	return (cnt);
}
