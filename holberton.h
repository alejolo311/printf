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
int _putchar(char *buffer, char s);

/* Specifiers functions 0 */
int print_percent(char *s, char *buffer);
int print_char(va_list args, char *buffer);
int print_string(va_list args, char *buffer);

/* Specifiers functions 1*/
int print_d(va_list args, char *buffer);
int print_i(va_list args, char *buffer);
int print_number(int n, char *buffer);

/* Advanced Tasks */
int print_b(va_list args, char *buffer);
int print_u(va_list args, char *buffer);
int print_o(va_list args, char *buffer);
int print_x(va_list args, char *buffer);
int print_X(va_list args, char *buffer);
int print_number_u(unsigned int, char *buffer);

/* Buffer functions */
void buffer_print(char *buffer, int size);
void buffer_remove(char *buffer);
int buffer_pos(char *buffer);
char *buffer_init();
int buffer_add(char *buffer, char s);
void buffer_flush(char *buffer);
#endif
