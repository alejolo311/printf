#include "holberton.h"
int print_p(va_list args, char *buffer)
{
	char *s = va_arg(args, long);
	int len, i;

	if (s)
	{/*
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(buffer, '0');
			c++;
			_putchar(buffer, 'x');
		c += print_hexa(, buffer);
		}*/
	}
	else
	{
		len = 6;
		s = "(null)";
		for (i = 0; i < len; i++)
			_putchar(buffer, *(s + i));
			}
	return (0);
}
