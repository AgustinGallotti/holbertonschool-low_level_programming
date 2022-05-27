#include "hash_tables.h"
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
	unsigned long int index = 0;
	hash_node_t *newnode, *pointer;

	if (key == NULL || *key == 0 || ht == NULL || ht->array == NULL
		|| ht->size == 0)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	newnode = malloc(sizeof(hash_node_t));
	if (newnode == NULL)
	{
		return (0);
	}
	if (newnode->key == NULL)
	{
		free(newnode);
		return (0);
	}
	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
		{
			free(pointer->value);
			pointer->value = strdup(value);
			free(newnode);
			return (1);
		}

		pointer = pointer->next;
	}

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = ht->array[index];
	ht->array[index] = newnode;

	return (1);
}
