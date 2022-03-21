#include "main.h"

/**
 * swap_int - swapping the values of 2 integers
 * @a: first int
 * @b: second int
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
