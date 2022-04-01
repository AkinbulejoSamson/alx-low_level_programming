#include <stdio.h>

/**
 * main - prints out all args
 * @argc: num of args
 * @argv: array of arg pointers
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
