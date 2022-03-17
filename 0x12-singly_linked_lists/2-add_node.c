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
	list_t *str1;

	while (head != NULL)
	{
		if (!str)
			return (NULL);
		
		str1 = malloc(sizeof(list_t));
		

		if (!str1)
				return (NULL);
		
		str1->str = strdup(str);
		str1->len = strlen(str);
		str1->next = *head;
		*head = str1;
		
	}
	return (str1);	
}
