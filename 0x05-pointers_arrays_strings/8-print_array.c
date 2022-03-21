#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a specific number of elems
 * @a: array
 * @n: number of elems to orint
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
