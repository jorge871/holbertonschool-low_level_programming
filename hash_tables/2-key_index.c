#include "hash_tables.h"

unsigned long int
key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hs, o;

	hs = hash_djb2(key);
	o = hs % size;
	return (o);
}
