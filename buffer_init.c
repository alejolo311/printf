#include "holberton.h"
/**
 * buffer_init - Initialize the buffer
 * Description: Function to initialize the buffer
 * Return: A pointer to the buffer
 */
char *buffer_init()
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (buffer)
		buffer_flush(buffer);

	return (buffer);
}

/**
 * buffer_add - Adds to the buffer
 * Description: Function to adds to the buffer
 * @buffer: Buffer to add
 * Return:
 */
int buffer_add(char *buffer, char s)
{
	int pos = buffer_pos(buffer);

	if (pos >= 1023)
	{
		buffer_print(buffer, 1024);
	}
	*(buffer + pos - 1) = s;
	return (pos);
}

/**
 * buffer_flush - Flush the buffer
 * Description: Function to flush the buffer
 * @buffer: Buffer to flush
 * Return:
 */
void buffer_flush(char *buffer)
{
	int i;

	for (i = 0; i < 1024; i++)
	{
		*(buffer + i) = '\0';
	}
}
