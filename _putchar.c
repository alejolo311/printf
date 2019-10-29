#include "holberton.h"

/**
 * _putchar - Prints a char
 * Description: This function prints a char
 * @buffer: Buffer
 * @s: Char to print
 * Return: 1
 */
int _putchar(char *buffer, char s)
{
	return (buffer_add(buffer, s));
}
