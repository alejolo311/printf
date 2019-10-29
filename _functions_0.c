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
	s++;
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
int print_char(va_list args, char *buffer, int buff_count)
{

	buffer[buff_count] = va_arg(args, int);
	return (1);
}

/**
 * print_string - Prints a string
 * Description: This function prints a string
 * @args: String to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_string(va_list args, char *buffer, int buff_count)
{
	char *s = va_arg(args, char *);
	int i;


	if (s)
	{
		while (s[i])
		{
			buffer[buff_count] = s[i];
			i++;
			buff_count++;
		}
	}
	else
	{
		s = "(null)";
		while (s[i])
		{
			buffer[buff_count] = s[i];
			i++;
			buff_count++;
		}
	}
	return (buff_count);
}
