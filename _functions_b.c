#include "holberton.h"
#include <stdio.h>
/**
 * print_number - this function print integers
 * @n: the integer of the entry
 * a blank line
 * Description: this function prints print integers?
 * Return: a void function, no return
 */
int print_b(va_list args)
{
	int number, len, i;
	int result[32];

	number = va_arg(args, int);

	if (number == 0)
	{
		print_number(0);
		return (1);
	}
	for (len = 0; number > 0; len++)
	{
		result[len] = number % 2;
		number = number / 2;
	}

	for (i = len - 1; i >= 0; i--)
	{
		
		print_number(result[i]);
	}
	return (len);
}
