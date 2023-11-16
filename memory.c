#include "shell.h"

/**
 * custom-free - frees a pointer and makes the address to null
 * @pointer: address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int custom free(void **pointer)
{
	if (pointer && *pointer)
	{
		free(*pointer);
		*pointer = NULL;
		return (1);
	}
	return (0);
}
