#include "holberton.h"

/**
 * print_hex - Prints hexadecimals
 * Description: This function prints hexadecimals
 * @number: Number to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_hex(unsigned long number, char *buffer)
{
	long len, i, result[32];

	if (number == 0)
	{
		print_number(0, buffer);
		return (1);
	}
	for (len = 0; number > 0; len++)
	{
		result[len] = number % 16;
		number = number / 16;
	}
	for (i = len - 1; i >= 0; i--)
	{
		if (result[i] >= 10)
			_putchar(buffer, result[i] + 87);
		else
			_putchar(buffer, result[i] + 48);
	}
	return (len);
}

/**
 * print_p - Prints address of memory
 * Description: This function prints memmory addresses
 * @args: Argument to print
 * @buffer: Buffer
 * Return: Length of @args
 */
int print_p(va_list args, char *buffer)
{
	int len = 2, i;
	char *s;
	unsigned long p = (unsigned long) va_arg(args, void *);

	if (p)
	{
		_putchar(buffer, '0');
		_putchar(buffer, 'x');
		len += print_hex(p, buffer);
	}
	else
	{
		len = 5;
		s = "(nil)";
		for (i = 0; i < len; i++)
			_putchar(buffer, *(s + i));
	}
	return (len);
}
