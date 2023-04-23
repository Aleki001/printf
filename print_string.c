#include "main.h"
/**
 *print_str - prints string to stdout
 *@str: string to be printed
 *Return: 1
 */
int print_str(va_list str)
{
	int i = 0;
	char *string;

	string = va_arg(str, char *)
	if (string == NULL)
	{
		string = "(null)";
	}
	for (i = 0; string[i]; i++)
	{
		print(string[i]);
	}

	return (i);
}
