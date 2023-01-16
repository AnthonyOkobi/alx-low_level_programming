#include <string.h>
#include "main.h"

/**
* _strpbrk - search a string for any of a set of bytes
* @s: pointer to the main string
* @accept: pointer to the substring
*
* Return: the number of bytes in s
*/

char *_strpbrk(char *s, char *accept)
{

int i;
int j;

for (i = 0; s[i] != '\0'; i++)
{

for (j = 0; accept[j] != '\0'; j++)

{
if (s[i] == accept[j])
return (s + i);
}

}
return (0);
}
