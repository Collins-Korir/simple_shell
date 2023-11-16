#include "shell.h"

/**
 *custom__memset - fills memory with a constant byte
 *@t: pointer to the memory area
 *@b: byte to fill t with
 *@ct: bytes' count to be filled
 *Return: a pointer to the memory area t
 */
char custom_memset(char *t, char b, unsigned int ct)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		t[i] = b;
	return (t);
}

/**
 * f - frees a string of strings
 * @p: string of strings
 */
void f(char **p)
{
	char **a =p;

	if (!p)
		return;
	while (*p)
		free(*p++);
	free(a);
}

/**
 * _loc - reallocates a block of memory
 * @pr: pointer to previous malloc'ated block
 * @old_size: byte size of previous block
 * @new_size: byte size of new block
 *
 * Return: pointer to reallocated block of memory.
 */
void *_loc(void *pr, unsigned int old_size, unsigned int new_size)
{
	char *p;

	if (!pr)
		return (malloc(new_size));
	if (!new_size)
		return (free(pr), NULL);
	if (new_size == old_size)
		return (pr);

	p = malloc(new_size);
	if (!p)
		return (NULL);

	old_size = old_size < new_size ? old_size : new_size;
	while (old_size--)
		p[old_size] = ((char *)pr)[old_size];
	free(pr);
	return (p);
}
