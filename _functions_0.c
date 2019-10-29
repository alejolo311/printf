#include "holberton.h"

/**
 * print_percent - Prints percent symbol
 * Description: This function prints percent symbol
 * @s: Character to print
 * @buffer: Buffer
 * Return: Always 1
 */
int print_percent(char *s, char *buffer)
{
	char *p = s;

	p++;
	_putchar(buffer, '%');
	return (1);
}

/**
 * print_char - Prints chars
 * Description: This function prints chars
 * @args: Argument to print
 * @buffer: Buffer
 * Return: Always 1
 */
int print_char(va_list args, char *buffer)
{
	char s = va_arg(args, int);

	_putchar(buffer, s);
	return (1);
}

/**
 * print_string - Prints a string
 * Description: This function prints a string
 * @args: String to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_string(va_list args, char *buffer)
{
	char *s = va_arg(args, char *);
	int len, i;

	if (s)
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(buffer, *(s + i));
		}
	}
	else
	{
		len = 6;
		s = "(null)";
		for (i = 0; i < len; i++)
		{
			_putchar(buffer, *(s + i));
		}
	}
	return (len);
}
