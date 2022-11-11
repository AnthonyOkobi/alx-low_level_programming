#include "main.h"

/**
* _isdigit - return 1 if c is a digit
* @c: receive a character
* Return: 0 for uppercase, 1 for lowercase
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
