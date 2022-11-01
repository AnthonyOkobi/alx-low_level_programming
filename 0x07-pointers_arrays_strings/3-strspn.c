#include <string.h>
#include "main.h"

/**
* _strspn - function that gets the lenght of a prefix substring
* @s: pointer to the main string
* @accept: pointer to the substring
*
* Return: the number of bytes in the intial segment of s
*
*/

unsigned int _strspn(char *s, char *accept)

{
return (strspn(s, accept));
}
