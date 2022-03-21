#include "main.h"

/**
 * _strcpy - copies  string from one pointer to another
 * @dest: destination to copy to
 * @src: source string to copy
 *
 * Return: pointer to destination
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
