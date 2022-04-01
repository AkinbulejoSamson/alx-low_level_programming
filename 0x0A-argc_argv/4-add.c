#include <stdio.h>
#include <stdlib.h>

/**
 * main- peints sum of positive numbers, with new line
 * @argc: arg counts
 * @argv: array of pointers to args
 *
 * Return: if not a +ve num, return 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int num, sum, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
