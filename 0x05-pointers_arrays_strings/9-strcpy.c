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
	int index;

	for (index = 0; src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	dest[j] = '\0';
	return (dest);
}
