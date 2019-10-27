#include "holberton.h"

/**
 * print_percent - Prints percent symbol
 * Description: This function prints percent symbol
 * @s: Character to print
 * Return: Always 1
 */
int print_percent(char *s)
{
	char *p = s;

	p++;
	_putchar('%');
	return (1);
}

/**
 * print_char - Prints chars
 * Description: This function prints chars
 * @args: Argument to print
 * Return: Always 1
 */
int print_char(va_list args)
{
	char s = va_arg(args, int);

	_putchar(s);
	return (1);
}

/**
 * print_string - Prints a string
 * Description: This function prints a string
 * @args: String to print
 * Return: length of @args
 */
int print_string(va_list args)
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
