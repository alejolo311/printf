#include "holberton.h"

/**
 * buffer_print - Prints the buffer
 * Description: Function to initialize the buffer
 * @buffer: Buffer to print
 * @size: Size of the buffer
 * Return: A pointer to the buffer
 */
void buffer_print(char *buffer, int size)
{
	write(1, buffer, size);
	buffer_flush(buffer);
}

/**
 * buffer_remove - Frees the buffer
 * Description: Function to frees the buffer
 * @buffer: Buffer to frees
 * Return:
 */
void buffer_remove(char *buffer)
{
	free(buffer);
}

/**
 * buffer_pos - Position of the buffer
 * Description: Function to know the len of the buffer
 * @buffer: Buffer to know the len
 * Return: Length of the buffer
 */
int buffer_pos(char *buffer)
{
	int pos = 0;
	char *p = buffer;

	while (*(p + pos) != '\0')
		pos++;
	return (pos);
}
