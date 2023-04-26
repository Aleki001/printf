#include "main.h"
/**
  * select_function - function that finds formats for _printf
  * calls the corresponding function.
  * @format: format (char, string, int, decimal)
  * Return: NULL or function associated ;
  */
int (*select_format(const char *format))(va_list)
{
	unsigned int i = 0;
	format_sp select_f[] = {
		{"c", write_char},
		{"s", write_str},
		{"i", write_int},
		{"d", write_dec},
		{"b", write_bin},
		{"o", write_octal},
		{"u", write_unsigned},
		{"X", write_X},
		{"x", write_x},
		{"r", string_rev},
		{"R", write_rot13},
		{"p", write_ptr},
		{NULL, NULL}
	};

	for (i = 0; select_f[i].spec; i++)
	{
		if (select_f[i].spec[0] == (*format))
			return (select_f[i].func_sp);
	}

	return (NULL);
}
/**
  * _printf - prints like printf function in std library
  * @format: format specifier
  * Return: size;
  */
int _printf(const char *format, ...)
{
    unsigned int i = 0;
    unsigned int count = 0;
	va_list list;
	int (*func_sp)(va_list);

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (; format[i] ;)
	{
		for ( ; format[i] != '%' && format[i]; i++)
		{
			print(format[i]);
			count++;
		}
		if (format[i] == '\0')
			return (count);
		func_sp = select_format(&format[i + 1]);
		if (func_sp != NULL)
		{
			count += func_sp(list);
			i += 2;
			continue;
		}
		if (!format[i + 1])
			return (-1);
		print(format[i]);
		count++;
		if (format[i + 1] == '%')
			i += 2;
		else
			i++;
	}
	va_end(list);
	return (count);
}
