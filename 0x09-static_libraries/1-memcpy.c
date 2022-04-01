#include "main.h"

/**
 * _memcpy - copies memory data from src to dest
 * @dest: destination pointer
 * @src: Pointer tk source
 * @n: number of bytes to be copied
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n; counter++)
	{
		dest[counter] = src[counter];
	}

	return (dest);
}
