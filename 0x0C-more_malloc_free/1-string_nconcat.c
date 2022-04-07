#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concats 2 strings
 * @s1: string 1
 * @s2: string 2
 * @n: max number of bytes from s2 to concat
 *
 * Return: pointer to new string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int len = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index++)
		newstr[len++] = s1[index];

	for (index = 0; s2[index]; index++)
		newstr[len++] = s2[index];

	newstr[len] = '\0';

	return (newstr);
}
