#include"main.h"
/**
 *_isalpha - fuction that checks for alphabetic character
 *
 *@c: character to be checked
 * Return: 0 or 1 depending on condition
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
