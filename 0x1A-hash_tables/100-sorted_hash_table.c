#include "hash_tables.h"

/**
 * shash_table_create - Create a hash table (sorted)
 * @size: the size of table.
 *
 * Return: a pointer to the newly created hash table or NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new;
	unsigned long int i;

	if (!size)
		return (NULL);
	new = malloc(sizeof(shash_table_t));
	if (!new)
		return (NULL);
	new->array = malloc(sizeof(shash_node_t *) * size);
	if (!new->array)
	{
		free(new);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new->array[i] = NULL;
	new->size = size;
	new->shead = NULL;
	new->stail = NULL;
	return (new);
}

/**
 * continue_table_get - function for continue shash_table_get process
 * @ht: hash table
 * @new: new node
 * @key: key
 * Return: 1 or 0.
 */
int continue_table_get(shash_table_t *ht, shash_node_t *new, const char *key)
{
	shash_node_t *tmp;

	if (!ht->shead)
	{
		new->sprev = NULL;
		new->snext = NULL;
		ht->stail = new;
		ht->shead = new;
		return (1);
	}
	if (strcmp(key, ht->shead->key) < 0)
	{
		new->sprev = NULL;
		new->snext = ht->shead;
		ht->shead->sprev = new;
		ht->shead = new;
		return (1);
	}
	for (tmp = ht->shead; tmp->snext && strcmp(tmp->snext->key, key) < 0;
			tmp = tmp->snext)
		;
	new->sprev = tmp;
	new->snext = tmp->snext;
	if (!tmp->snext)
		ht->stail = new;
	else
		tmp->snext->sprev = new;
	tmp->snext = new;
	return (1);
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: is the hash table you want to add or update the key/value to.
 * @key: is the key. key can not be an empty string.
 * @value: is the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *tmp, *new;

	if (!ht || !key || !*key || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (0);
	for (tmp = ht->shead; tmp; tmp = tmp->snext)
	{
		if (!strcmp(tmp->key, key))
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (!tmp->value)
			return (0);
		return (1);
		}
	}
	new = malloc(sizeof(shash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (!new->key || !new->value)
	{
		if (new->key)
			free(new->key);
		if (new->value)
			free(new->value);
		free(new);
		return (0);
	}
	return (continue_table_get(ht, new, key));
}

/**
 * shash_table_get - retrieve a value associated with a key.
 * @ht: is the hash table.
 * @key: is the key you are looking for.
 *
 * Return: The value associated with the key,or NULL if key
 *		couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tmp;
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

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: A pointer to table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->shead;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->snext;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints hash table in reverse order.
 * @ht: A pointer to table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tmp;

	if (ht == NULL)
		return;

	tmp = ht->stail;
	printf("{");
	while (tmp != NULL)
	{
		printf("'%s': '%s'", tmp->key, tmp->value);
		tmp = tmp->sprev;
		if (tmp)
			printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a hash table.
 * @ht: The hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tmp, *curr;

	if (!ht)
		return;
	for (curr = ht->shead; curr; curr = curr->next)
	{
		tmp = curr->snext;
		free(tmp->key);
		free(tmp->value);
		free(curr);
		curr = tmp;
	}
	free(ht->array);
	free(ht);
}
