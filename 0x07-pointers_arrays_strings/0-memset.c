#include <string.h>
#include "main.h"

/**
* _memset - Fills memory with a constant byte
* @s: char
* @b: char
* @n: int
*
* Return: a pointer to the memory s
*/

char *_memset(char *s, char b, unsigned int n)

{
memset(s, b, n);
return (s);
}
