#include "hash_tables.h"

/**
 * CreatedND - A node created and tested
 * @key: unique
 * @value: the one assosiated to key
 * Return: node
 */
hash_node_t *NewNode(const char *key, const char *value)
{
	hash_node_t *NewND = NULL;

	NewND = malloc(sizeof(hash_node_t));
	if (!NewND)
	{return (0); }
	NewND->key = strdup(key);
	if (!NewND->key)
	{
		free(NewND);
		return (0);
	}
	NewND->value = strdup(value);
	if (!NewND->value)
	{
		free(NewND->key);
		free(NewND);
		return (0);
	}
	return (NewND);
}

/**
 * hash_table_set - function adds an element to a hash table
 * @ht: hash table
 * @key: the string key
 * @value: the string value
 * Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *NewND = NULL, *h;
	unsigned long int i;
	char *Val = NULL;

	if (!ht || !key || !(*key) || !value)
	{return (0); }
	i = key_index((const unsigned char *)key, ht->size);
	h = ht->array[i];
	for (; h; h = h->next)
	{
		if (!strcmp(key, h->key))
		{
			Val = strdup(value);
			if (!Val)
			{return (0); }
			free(h->value);
			h->value = Val;
			return (1);
		}
	}
	NewND = NewNode(key, value);
	if (!NewND)
	{return (0); }
	NewND->next = ht->array[i];
	ht->array[i] = NewND;
	return (1);
}
