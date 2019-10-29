#include "holberton.h"
/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @format: String to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	int how_many = 0;
	const char *pf;
	int (*f)();
	char *buffer = buffer_init();
	va_list args;
	int size;

	va_start(args, format);
	if (!buffer)
		return (0);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		free(buffer);
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pf = format; *pf; pf++)
	{
		if (*pf == '%')
		{
			f = verify_format(pf);
			if (f)
			{
				how_many += f(args, buffer);
				pf++;
			}
			else
			{
				_putchar(buffer, *pf);
				how_many++;
			}
		}
		else
		{
			_putchar(buffer, *pf);
			how_many++;
		}
	}
	va_end(args);
	size = buffer_pos(buffer);
	buffer_print(buffer, size);
	free(buffer);
	return (how_many);
}
