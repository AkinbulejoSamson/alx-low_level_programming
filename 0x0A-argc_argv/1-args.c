#include <stdio.h>

/**
 * main- prints num of args
 * @argc: num of args
 * @argv: array of args pointers
 *
 * Return: always 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
