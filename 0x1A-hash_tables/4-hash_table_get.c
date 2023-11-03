#include "hash_tables.h"

/**
 * hash_table_get - retrieve a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key you are looking for.
 *
 * Return: The value associated with the key,or NULL if key
 *		couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index;

	if (!ht || !key || !*key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	for (tmp = ht->array[index]; tmp && strcmp(tmp->key, key); tmp = tmp->next)
		;
	if (!tmp)
		return (NULL);
	return (tmp->value);
}
