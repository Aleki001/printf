#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 *format_specifier - format
 *@func: function for specifier
 *@sp: specifier
 */
struct format_specifier
{
	int (*func)(va_list);
	char *sp;
}

typedef struct format_specifier format_sp;

int _printf(const char *format, ...);
int print(char c);













#endif
