#include "main.h"
/**
 *write_ptr - writes a pointer address in hexadecimal form
 *@arg: argumant to print
 *Return: no of characters written
 */
int write_ptr(va_list arg)
{
	unsigned long int addr = (unsigned long int)va_arg(arg, void *);
	int count = 0;
	char buffer[18];
	int i;

	sprintf(buffer, "%p", (void *)addr);

	for (i = 0; buffer[i]; i++)
	{
		count += print(buffer[i]);
	}

	return (count);
}
