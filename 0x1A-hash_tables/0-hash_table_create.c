#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array
 * Return: pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *MyArray;

	if (!size)
	{return NULL; }
	MyArray = calloc(1, sizeof(hash_table_t));
	if (!MyArray)
	{return NULL; }
	MyArray->size = size;
	MyArray->array = calloc(size, sizeof(hash_node_t *));
	if (!(MyArray->array))
	{
		free(MyArray);
		return NULL;
	}
	return (MyArray);
}
