#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: returns a pointer to the table
 * otherwise a pointer to the new hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;
	unsigned long int i;

	hash = malloc(sizeof(hash_table_t));

	if (hash == NULL)
		return (NULL);

	hash->size = size;
	hash->array = malloc(sizeof(hash_table_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		hash->array[i] = NULL;
	return (hash);
}
