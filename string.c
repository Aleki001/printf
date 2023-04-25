#include "main.h"
/**
 * write_str - writes a string to stdout
 * @str: String
 * Return: (1)
*/

int write_str(va_list str)
{
	int j;
	char *string;

	string = va_arg(str, char *);
	if (string == NULL)
	{
	string = "(null)";
	}

	for (j = 0; string[j]; j++)
	{
		print(string[j]);
	}
	return (j);
}
