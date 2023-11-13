#include <stdio.h>

/**
 * main - prints the number of arguments passed into the program
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	printf("%d\n", (argc - 1));
	argv = argv + 1;
	return (0);
}
