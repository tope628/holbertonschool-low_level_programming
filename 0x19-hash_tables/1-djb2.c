#include "hash_tables.h"

/**
  * hash_djb2 - djb2 commonly used hash function
  * @str: string to be stored and prcoessed in hash
  * Return: int as hashed data
  */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_djb2  = 5381;
	int c;

	while ((c = *str++))
		hash_djb2 = ((hash_djb2 << 5) + hash_djb2) + c; /* hash * 33 + c */

	return (hash_djb2);
}
