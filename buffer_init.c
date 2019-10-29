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
		buffer = buffer_flush(buffer);

	return (buffer);
}

/**
 * buffer_add - Adds to the buffer
 * Description: Function to adds to the buffer
 * @buffer: Buffer to add
 * @s: Character to add
 * Return: Size of @buffer
 */
int buffer_add(char *buffer, char s)
{
	int i = buffer_pos(buffer);

	if (i < 1023)
		*(buffer + i) = s;
	else
	{
		buffer_print(buffer, 1023);
		buffer = buffer_flush(buffer);
		buffer[0] = s;
	}
	return (i);
}

/**
 * buffer_flush - Flush the buffer
 * Description: Function to flush the buffer
 * @buffer: Buffer to flush
 * Return: A pointer to the buffer
 */
char *buffer_flush(char *buffer)
{
	int i;

	for (i = 0; i < 1023; i++)
	{
		buffer[i] = 0;
	}
	return (buffer);
}

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
