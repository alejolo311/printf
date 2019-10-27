#include "holberton.h"
int print_percent(char *s)
{
	char *p = s;
	p++;
	_putchar('%');
	return (1);
}

int print_char(va_list args)
{
	char *s = va_arg(args, char *);
	int len = strlen(s);

	if (len == 1)
		_putchar(*s);
	return (1);
}

int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int len = strlen(s);

	write(1, s, len);
	return (len);
}
