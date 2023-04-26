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
<<<<<<< HEAD

=======
	if (string == NULL)
		string = "null";
>>>>>>> 7d2bfd61906d2ef881d59eaa2a47a7525c0001d5
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
