#include "hash_tables.h"
#include <string.h>

/**
* hash_table_get - function that retrieves a value associated with key
*
* @ht: hash tables
* @key: key value
*
* Return: the value associated with the element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *pointer;
	unsigned long int index;

	if (ht == NULL || ht->size == 0 || key == NULL || *key == 0)
		return (NULL); /*program checks*/
	index = hash_djb2((const unsigned char *) key);
	index %= ht->size;
	pointer = ht->array[index];
	while (pointer != NULL)
	{
		if (strcmp(pointer->key, key) == 0)
			break; /*corner case*/
	}
	if (pointer == NULL)
		return (NULL);
	return (strdup(pointer->value));
}
