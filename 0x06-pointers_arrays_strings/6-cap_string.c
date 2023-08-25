 #include "main.h"

/**
 * cap_string - capitalized each word of a string
 * @s: string to be capitalized
 * Return: capitalized strings
 */

char *cap_string(char *s)
{
	int i, j;
	char sp[13] = {' ', '\t', '\n', ',', ';',
'.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
		for (j = 0 ; j < 13 ; j++)
		{
			if (s[i] == sp[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
					s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
