#include"main.h"
/**
 * main - Function that prints the alphabet in lowercase
 *        followed byt a new line.
 *
 * Return: 0
 */
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
