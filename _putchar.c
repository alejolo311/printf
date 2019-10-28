#include "holberton.h"

/**
 * _putchar - Prints a char
 * Description: This function prints a char
 * @s: Char to print
 * Return: 1
 */
int _putchar(char s, char *buffer)
{
	buffer_add(buffer, s);
}
