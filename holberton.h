#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct pf_specifier - Structure for specifiers
 * @s: String to compare
 * @f: Function to execute
 */
typedef struct pf_specifier
{
	char *s;
	int (*f)();
} pf_s;

/* Specifier verification */
int (*verify_format(const char *s))();

/* Printf function */
int _printf(const char *format, ...);
int _putchar(char s);

/* Specifiers functions 0 */
int print_percent(char *s);
int print_char(va_list args);
int print_string(va_list args);

/* Specifiers functions 1*/
int print_d(va_list args);
int print_i(va_list args);
int print_number(int n);
/* Advanced Tasks */

int print_b(va_list args);

#endif
