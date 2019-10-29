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
	int buff_count, i;
	const char *pf;
	int (*f)();
	char *buffer;
	va_list args;


	va_start(args, format);

	buff_count = 0;
	buffer = buffer_init();
	if (!buffer)
		return (0);
	if (!format || (format[0] == '%' && format[1] == '\0'))
	{
		free(buffer);
		return (-1);
	}
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (pf = format, i = 0; *pf;pf++, i++)
	{
		if (*pf == '%')
		{
			f = verify_format(pf);
			if (f)
			{
				buff_count += f(args, buffer, buff_count);
				pf++;
			}
			else
			{
				buffer[buff_count] = *pf;
				buff_count++;
			}
		}
		else
		{
			buffer[buff_count] = format[i];
			buff_count++;
		}
	}
	va_end(args);
	buffer_print(buffer, buff_count);
	free(buffer);
	return (buff_count);
}
