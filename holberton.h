#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

typedef struct pf_specifier {
	char *s;
	void (*f)();
} pf_s;

int _printf(const char *format, ...);
int _putchar(char s);
/* specifier funcs */

void print_percent(char *s);
void print_char(char *s);
void print_string(char *s);

/*specifier verification */
void (*verify_format(char *s))();

#endif
