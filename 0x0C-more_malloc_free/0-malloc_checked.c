#include "main.h"

/**
 * malloc_checked - allocated memory with malloc
 * @b: num of bytes to allocate
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
