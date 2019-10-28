#include "holberton.h"

/**
 * print_d - Prints integers
 * Description: This function prints integers
 * @args: Argument to print
 * Return: Length of @args
 */
int print_d(va_list args)
{
	char s = va_arg(args, int);

	_putchar(s);
	return (1);
}

/**
 * print_i - Prints integers
 * Description: This function prints integers
 * @args: Argument to print
 * Return: length of @args
 */
int print_i(va_list args)
{
	char *s = va_arg(args, char *);
	int len;

	if (s)
	{
		len = strlen(s);
		write(1, s, len);
	}
	else
	{
		len = 6;
		write(1, "(null)", 6);
	}
	return (len);
}
