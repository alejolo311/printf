#include "holberton.h"
/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @s: String to print
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
	char *pf;
	void (*f)();

	va_list args;

	va_start(args, format);

	for (pf = format; *pf; pf++)
	{
		if(*pf == '%')
		{
			f = verify_format(pf);
			if (f)
			{
				f(args);
				pf++;
			}
			else
			{
				_putchar(*pf);
			}
		}
		else
			_putchar(*pf);
	}
	va_end(args);
	return (0);
}
