#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a fuction that allocates memorry using malloc
* @b: unsigned interger
* Return: Return a pointer to tha allocated memory
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *n;

	n = malloc(b);

	if (n == NULL)
		exit(98);
	return (n);
}
