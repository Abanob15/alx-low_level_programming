#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself
 *
 * @argc: The number of arguments supplied to the program
 *
 * @argv: An array of pointers to the arguments
 *
 * Return: (0)
*/

int main(int argc, char *argv[])
{
	int y, i;
	int (*address)(int, char **) = main;
	unsigned char opc;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	y = atoi(argv[1]);

	if (y < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < y; i++)
	{
		opc = *(unsigned char *)address;
		printf("%.2x", opc);

		if (i == y - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
