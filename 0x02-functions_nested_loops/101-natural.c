#include <stdio.h>

/**
 * main - lists all nat numbs below 1024,
 *       that are multiples of 3 & 5
 * Return: always zero
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d\n", sum);

	return (0);
}

