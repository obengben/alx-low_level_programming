#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - add positive numbers
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int k, n, sum = 0;

	if (argc == 1)
		printf("%d\n", 0);

	else
	{
		for (k = 1 ; k < argc ; k++)
		{
			for (n = 0 ;  argv[k][n] != '\0' ; n++)
			{
				if (!(isdigit(argv[k][n])))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum = sum + atoi(argv[k]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
