#include "holberton.h"
#include <stdio.h>
/**
 * buffer_init - Initialize the buffer
 * Description: Function to initialize the buffer
 * Return: A pointer to the buffer
 */
char *buffer_init()
{
	char *buffer = malloc(sizeof(char) * 1024);
	return (buffer);
}

/**
 * buffer_add - Adds to the buffer
 * Description: Function to adds to the buffer
 * @buffer: Buffer to add
 * @s: Character to add
 * Return: Size of @buffer
 */
char *buffer_write(char *buffer, const char *src, unsigned int buff_count)
{
	int i;

	for (i = 0; src[i]; i++, buff_count++)
	{

		buffer[buff_count] = src[i];
	}

	return (buffer);
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

	for (i = 0; i < 1024; i++)
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
