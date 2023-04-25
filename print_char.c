#include "main.h"
/**
 *print_char - prints character to stdout
 *@ch: character to be printed
 *Return: 1
 */
int print_char(va_list ch)
{
	char character;

	character = va_arg(ch, int);

	print(character);

	return (1);

}
