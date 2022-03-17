#include "lists.h"
/**
* add_node - function that add a new node to the list_t
* @head: head of the list_t 
* @str: new node
* Return: adress of the new element (str1)
*/
list_t *add_node(list_t **head, const char *str)
{
	while (head != NULL)
	{
		if (!str)
			return (NULL);
		else
			struct list_t *str = (struct list_t) malloc(sizeof(struct list_t));
			str->next = (*head);
			(*head) = str;
	}
}
