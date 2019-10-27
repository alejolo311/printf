#include "holberton.h"

/**
 * _printf - Printf function copy
 * Description: This is a modified version of printf
 * @s: String to print
 * Return: Number of characters printed
 */
int _printf(char *s, ...)
{
	pf ops[] =
	{
		{'%', print_percen},
		{'c', print_char},
		{'s', print_string},
	};
	
}
