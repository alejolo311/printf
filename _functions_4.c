#include "holberton.h"

/**
 * print_number_u - this function print unsigned integers
 * Description: this function prints print integers
 * @n: the integer of the entry
 * @buffer: Buffer
 * Return: a void function, no return
 */
int print_number_u(unsigned int n, char *buffer)
{
	unsigned int  k, l, len = 0;

	k = 1;
	l = n;
	while (l > 9)
	{
		l = l / 10;
		k = k * 10;
	}

	while (k > 9)
	{
		_putchar(buffer, (n / k) % 10 + '0');
		k = k / 10;
		len++;
	}
	_putchar(buffer, n % 10 + '0');
	len++;
	return (len);
}

/**
 * print_u - Prints unsigned integers
 * Description: This function prints unsigned integers
 * @args: Argument to print
 * @buffer: Buffer
 * Return: Length of @args
 */
int print_u(va_list args, char *buffer)
{
	unsigned int number;
	int len;

	number = va_arg(args, unsigned int);
	len = print_number_u(number, buffer);

	return (len);
}

/**
 * print_o - Prints octals
 * Description: This function prints octals
 * @args: Argument to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_o(va_list args, char *buffer)
{
	unsigned int number;
	int len, i;
	long result[50];

	number = va_arg(args, unsigned int);
	if (number == 0)
	{
		print_number(0, buffer);
		return (1);
	}
	for (len = 0; number > 0; len++)
	{
		result[len] = number % 8;
		number = number / 8;
	}
	for (i = len - 1; i >= 0; i--)
		print_number(result[i], buffer);
	return (len);
}

/**
 * print_x - Prints hexadecimals
 * Description: This function prints hexadecimals
 * @args: Argument to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_x(va_list args, char *buffer)
{
	unsigned int number;
	int len, i, result[32];

	number = va_arg(args, unsigned int);
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
 * print_X - Prints hexadecimals in uppercase
 * Description: This function prints hexadecimals in uppsercase
 * @args: Argument to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_X(va_list args, char *buffer)
{
	unsigned int number;
	int len, i, result[32];

	number = va_arg(args, unsigned int);
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
			_putchar(buffer, result[i] + 55);
		else
			print_number(result[i], buffer);
	}
	return (len);
}
