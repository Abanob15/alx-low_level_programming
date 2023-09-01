#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: arguments count
 *
 * @argv: arguments
 *
 * Return: (0)
*/

int main(int argc, char **argv)
{
	int i, a;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	a = atoi(argv[2]);
	printf("%d\n", i * a);

	return (0);
}
