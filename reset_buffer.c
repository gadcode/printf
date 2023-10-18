#include "main.h"
#include <stdio.h>
/**
 * reset_buffer - function that intializes and sets a buffer
 * @buffer: buffer size
 *
 * Return: 0
 */

void reset_buffer(char *buffer)
{
	int i;

	for(i = 0; i < 1024; i++)
	{
		buffer[i] = 0;
	}
	buffer[i] = '\0\;
}
