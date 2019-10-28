#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("%");
	len2 = printf("%");
	printf("Length:[%d, %i]\n", len, len2);
	_printf("test %c\n", (char*)0);
	printf("test %c\n", (char*)0);
	return (0);
}
