#include "holberton.h"

/**
 * print_r - Prints a string in reverse
 * Description: This function prints a string in reverse
 * @args: String to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_r(va_list args, char *buffer)
{
	char *s = va_arg(args, char *);
	int len, i;

	if (s)
	{
		len = strlen(s);
		for (i = len - 1; i >= 0; i--)
			_putchar(buffer, *(s + i));
	}
	else
	{
		len = 6;
		s = "(null)";
		for (i = 0; i < len; i++)
		_putchar(buffer, *(s + i));
	}
	return (len);
}
