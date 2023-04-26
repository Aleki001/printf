#include "main.h"

/**
 * string_rev - reverses a string
 * @list: string to be reversed
 * Return: string length
 */

int string_rev(va_list s)
{
	int i, j;
	char *string;

	string = va_arg(s, char *);

	/* find string length */
	for (i = 0; string[i]; i++)
	{
		;
	}
	/* print string in reverse */
	for (j = (i - 1); j >= 0; j--)
	{
		print(string[j]);
	}
	print('\0');

	return (i);
}
