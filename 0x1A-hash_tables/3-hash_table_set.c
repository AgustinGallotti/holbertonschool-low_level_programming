#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - set a value in a hash table
*
* @ht: hash table to set value in
* @key: key string to set
* @value: value to set
*
* Return: 1 if successful or 0 if not
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *newnode, *pointer;
	char *newvalue;

	if (key == NULL || *key == 0 || ht == NULL || ht->array == NULL
		|| ht->size == 0)
			return (0);
	index = key_index((const unsigned char *) key, ht->size);
	pointer = ht->array[index];
	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
			break;
		pointer = pointer->next;
	}
	if (pointer == NULL)
	{
		newnode = malloc(sizeof(hash_node_t));
		if (newnode == NULL)
			return (0);
		newnode->key = strdup(key);
		if (newnode->key == NULL)
		{
			free(newnode);
			return (0);
		}
		newnode->value = strdup(value);
		if (newnode->value == NULL)
		{
			free(newnode->key);
			free(newnode);
			return (0);
		}
		newnode->next = ht->array[index];
		ht->array[index] = newnode;
	}
	else
	{
		newvalue = strdup(value);
		if (newvalue == NULL)
			return (0);
		free(pointer->value);
		pointer->value = newvalue;
	}
	return (1);
}
