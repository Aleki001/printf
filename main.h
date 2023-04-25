#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

/**
 * struct FormatSpecifier - format
 * @spec: specifier
 * @func_sp: points to function associated to specifier
 */
typedef struct FormatSpecifier
{
	char *spec;
	int (*func_sp)(va_list);
} format_sp;

int _printf(const char *format, ...);
int print(char c);
int write_char(va_list ch);
int write_percent(void);
int write_str(va_list str);
int write_int(va_list integer);
int write_dec(va_list dec);
int write_bin(va_list bin);
int write_octal(va_list octal);
int write_unsigned(va_list ui);






#endif
