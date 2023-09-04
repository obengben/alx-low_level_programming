#include "main.h"

/**
 * _isupper - check for uppercase character
 * @c: function parameter
 * Return: 1 on success 0 on faliure
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
