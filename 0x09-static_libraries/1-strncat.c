#include "main.h"

/**
 * _strncat- concats 2 strings using n bytes at most
 * @dest: str to be appended
 * @src: source string
 * @n: number of bytes
 *
 * Return: Pointer to result
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
