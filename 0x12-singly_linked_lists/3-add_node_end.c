#include "lists.h"
/**
* add_node_end - function that add a new node to the end
* @head: head
* @str: str
* Return: adress of str1
*/
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *str1;

    if (!str)
        return (NULL);

    str1 = malloc(sizeof(list_t));

    if (!str1)
        return (NULL);

    str1->str = strdup(str);
    str1->len = strlen(str);
	*head =	NULL;
	str1->next = *head;
    *head = str1;

    return (str1);
}
