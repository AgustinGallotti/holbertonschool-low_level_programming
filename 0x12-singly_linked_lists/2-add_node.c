#include <string.h>
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
		{	
			list_t *str = (list_t *)malloc(sizeof(list_t));
			if (str != NULL)
			{
				str->next = *head;
				*head = str;
				str1 = (list_t)strdup(str);
			}
		}
	}
	return (0);	
}
