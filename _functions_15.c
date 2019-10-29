#include "holberton.h"

/**
 * print_R - Prints a string in rot13'ed
 * Description: This function prints a string in rot13'ed
 * @args: String to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_R(va_list args, char *buffer)
{
	char *s = va_arg(args, char *);
	int len, i, j = 0;
	char *let = "abcdefghijklmnopqrstuvwxyz"
	char *let2 = "nopqrstuvwxyzabcdefghijklm"

	if (s)
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			while (let[j] != '\0')
			{
				if (let[j] == *(s + i))
					_putchar(buffer, let2[j]);
			}
		}
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
