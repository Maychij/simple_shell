#include "shell.h"

/**
 * bfree -  takes a pointer to a pointer and frees the memory it points to, then sets the pointer to NULL. I
 * @ptr: the address of the pointer to free
 *
 * Return: 1 if freed, otherwise 0.
 */
int thefree(void **ptr)
{
	if (ptr && *ptr)
	{
		free(*ptr);
		*ptr = NULL;
		return (1);
	}
	return (0);
}
