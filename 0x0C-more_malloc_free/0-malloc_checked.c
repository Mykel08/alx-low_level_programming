#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 * Return: a pointer to the allocated memory
*/
void *malloc_checker(unsigned int b)
{
	void *ptr;

	prt = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
