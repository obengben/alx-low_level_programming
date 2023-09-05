#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiples of number
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int n, m, mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n = atoi(argv[1]);
		m = atoi(argv[2]);

		mul = n * m;
		printf("%d\n", mul);
	}
	return (0);
}
