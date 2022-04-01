#include "main.h"

/**
 * _strlen - returns length of a string
 * @s: string to check
 *
 * Return: Length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
