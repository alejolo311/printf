#include "holberton.h"

/**
 * print_number - this function print integers
 * Description: this function prints print integers
 * @n: the integer of the entry
 * @buffer: Buffer
 * Return: a void function, no return
 */
int print_number(int n, char *buffer)
{
	int  k, l, len = 0;

	k = 1;
	l = n;
	if (n < 0)
	{
		k = k * -1;
		_putchar(buffer, '-');
		len++;
	}
	while (l > 9 || l < -9)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k > 9 || k < -9)
	{
		_putchar(buffer, (n / k) % 10 + '0');
		k = k / 10;
		len++;
	}
	if (n < 0)
	{
		_putchar(buffer, (n % 10)  * -1 + '0');
		len++;
	}
	else
	{
		_putchar(buffer, n % 10 + '0');
		len++;
	}
	return (len);
}

/**
 * print_d - Prints integers
 * Description: This function prints integers
 * @args: Argument to print
 * @buffer: Buffer
 * Return: Length of @args
 */
int print_d(va_list args, char *buffer)
{
	int number, len;

	number = va_arg(args, int);
	len = print_number(number, buffer);

	return (len);
}

/**
 * print_i - Prints integers
 * Description: This function prints integers
 * @args: Argument to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_i(va_list args, char *buffer)
{
	int number, len;

	number = va_arg(args, int);
	len = print_number(number, buffer);

	return (len);
}
