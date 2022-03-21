#include "main.h"

/**
 * _puts - prints the string and a new line
 * @str: string to be printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
