#include "main.h"

/**
 * _isLower - checks if a char is lowercase
 * @c: char to be checked
 *
 * Return: 1 if lowercase, 0 if otherwise
 */

int _isLower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
