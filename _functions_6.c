#include "holberton.h"
/**
 * print_hexa - Prints hexadecimals in uppercase
 * Description: This function prints hexadecimals in uppsercase
 * @s: char to hexa
 * @buffer: Buffer
 * Return: length of @s
 */
int print_hexa(char s, char *buffer)
{
	char number;
	int len, i, result[32];

	number = s;
	if (number == 0)
	{
		print_number(0, buffer);
		return (1);
	}
	if (number <= 16)
		_putchar(buffer, '0');
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

/**
 * print_S - Prints the string
 * Descripton -  this function prints the hexa of non valid chars
 * @args: Argument to print.
 * @buffer: Buffer.
 * Return: length of args
 */
int print_S(va_list args, char *buffer)
{
	char *s = va_arg(args, char *);
	int len, i, c;

	c = 0;
	if (s)
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
			if (*(s + i) < 32 || *(s + i) >= 127)
			{
				_putchar(buffer, '\\');
				c++;
				_putchar(buffer, 'x');
				c += print_hexa(*(s + i), buffer);
			}
			else
				_putchar(buffer, *(s + i));
	}
	else
	{
		len = 6;
		s = "(null)";
		for (i = 0; i < len; i++)
			_putchar(buffer, *(s + i));
	}
	return (len + c);
}
