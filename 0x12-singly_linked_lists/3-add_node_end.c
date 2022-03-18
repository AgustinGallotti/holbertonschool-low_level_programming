#include "lists.h"
/**
* add_node_end - function that add a new node to the end
* @head: head
* @str: str
* Return: adress of str1
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *str1, *strlt;

    if (!str)
        return (NULL);

    str1 = malloc(sizeof(list_t));

    if (!str1)
	{
        return (NULL);
	}
	else
	{
		str1->str = strdup(str);
		str1->len = strlen(str);
		str1->next = NULL;
	
		while (head != NULL)
		{		 
			if (strlt->next)
			{	
				strlt = *head;
				strlt = strlt->next;
				strlt->next = str1;
			}
			else
				*head = str1;
		}
	}

    return (str1);
}
