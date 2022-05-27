#include "hash_tables.h"
#include <stdlib.h>

/**
* hash_table_create - create a hash table
*
* @size: number of hash table buckets to create
*
* Return: address of new hash table, or NULL if failure
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newtable;
	unsigned long int index;

	if (size == 0)
		return (NULL);
	newtable = malloc(sizeof(hash_table_t));
	if (newtable == NULL)
		return (NULL); /*program checks to run*/

	newtable->array = malloc(sizeof(hash_table_t *) * size);
	if (newtable->array == NULL) /*create memory for poniter to newtable*/
	{
		free(newtable);
		return (NULL); /*if something went wrong*/
	}

	newtable->size = size;
	for (index = 0; index < size; index++)
		newtable->array[index] = NULL;
	return (newtable); /*return pointer to newtable*/
}
