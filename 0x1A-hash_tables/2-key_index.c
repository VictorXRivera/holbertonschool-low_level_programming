#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: where key is the key
 * @size: size is the size of the array of the hash table
 * Return: the index at which the key/value pair
 * should be stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int h;
	unsigned long int i;

	h = 0;
	i = 0;
	while (key && key[i])
	{
		h = (h + key[i]) % size;
		++i;
	}
	return (h);
}
