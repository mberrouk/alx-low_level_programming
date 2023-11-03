#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index, i;
	hash_node_t *new, *tmp;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	for (tmp = ht->array[index]; tmp; tmp = tmp->next)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->key)
				return (0);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->value || !new->key)
	{
		if (new->key)
			free(new->key);
		if (new->value)
			free(new->value);
		free(new);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
