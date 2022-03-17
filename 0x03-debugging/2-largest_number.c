#include "main.h"

/**
 * largest number - returns the largest number
 * @a: first integer
 * @b: 2nd integer
 * @c: 3rd int
 *
 * Return: the largest int
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}