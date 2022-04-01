#include "main.h"

/**
 * _strcmp - compares pointer of 2 strings
 * @s1: a pointer to 1st string
 * @s2: poniter to 2nd string
 *
 * Return: if str1 < str2, the -ve difference of the first unmatched characters
 *	if str1 = str2, 0
 *	if str1 > str2, the +ve difference of the first unmatched chars
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
