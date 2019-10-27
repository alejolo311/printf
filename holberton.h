#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_s;

int _printf(const char *format, ...);
int _putchar(char s);
/* specifier funcs */

int print_percent(char *s);
int print_char(va_list args);
int print_string(va_list args);

/*specifier verification */
int (*verify_format(const char *s))();

#endif
