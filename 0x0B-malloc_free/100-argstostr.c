#include "main.h"

/**
 * argstostr - concatenates arguments of a function
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, a = 0;
	int count = 0;
	char *output;

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
			count++;
		count++;
	}
	output = malloc(sizeof(char) * count + 1);
	if (output == NULL)
		return (NULL);

	for (i = 0 ; i < ac ; i++)
	{
		for (j = 0 ; av[i][j] != '\0' ; j++)
		{
			output[a] = av[i][j];
			a++;
		}
		output[a++] = '\n';
	}
	output[a] = '\0';
	return (output);
}
