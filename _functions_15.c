#include "holberton.h"

/**
 * rot13 - this functions encrypt using the rot13 algorithm
 * a blank line
 *@s: this parameter is the string to encrypt
 * Description: this function encrypts using the rot13 algorithm)?
 * section header: the header of this function is holberton.h)*
 * Return: this return a char.
*/
int rot13(char *buffer, char *s)
{

	char low1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char low2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int c, low_c;

	c = 0;
	while (*(s + c) != '\0')
	{
		low_c = 0;
		while (low1[low_c] != '\0')
		{
			if (*(s + c) == low1[low_c])
			{
				_putchar(buffer, low2[low_c]);
				break;
			}
			low_c++;
		}
		c++;
	}
	return (c);
}

/**
 * print_R - Prints a string in rot13'ed
 * Description: This function prints a string in rot13'ed
 * @args: String to print
 * @buffer: Buffer
 * Return: length of @args
 */
int print_R(va_list args, char *buffer)
{

	int len, i;
	char *s = va_arg(args, char*);
	if (s)
	{
		len = rot13(buffer, s);
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
