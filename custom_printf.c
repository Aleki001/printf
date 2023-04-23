#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *_printf - prints a formatted output
 *@format: format specifier
 *Return: total no of characters to be printed as output of function
 */
int _printf(const char *format, ...)
{
	va_list list;

