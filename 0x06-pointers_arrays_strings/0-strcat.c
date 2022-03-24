#include "main.h"

/**
 * strcat - concatenates strings
 * @dest: destination pointer
 * @src: pointer fir src string
 *
 * Return: destination pointer
 */

char *strcat(char *dest, const char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
}
